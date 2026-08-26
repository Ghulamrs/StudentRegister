#include "stdafx.h"
#include "XmlData.h"
#include "student.h"
#include "Caccdb.h"
#include "DbOffer.h"

namespace SRegister {
#define RBUFFER_SIZE (8192)

	DbOffer::DbOffer()
		: m_alive(false)
	{
		String^ hostname = Dns::GetHostName();
		m_addressList = Dns::GetHostEntry(hostname)->AddressList;
		m_listenerThread = gcnew Thread(gcnew ParameterizedThreadStart(this, &DbOffer::listenerThreadFunction));
		m_listenerThread->Start();
	}

	void DbOffer::listenerThreadFunction(Object^ object)
	{
		//Form1^ form = static_cast<Form1^>(object);
		try {
			m_listener = gcnew TcpListener(m_addressList[0], 2054);
			m_listener->Start();
			m_alive = true;
			while (m_alive) {
				TcpClient^ client = m_listener->AcceptTcpClient();
				client->SendBufferSize = RBUFFER_SIZE;
				NetworkStream^ stream = client->GetStream();

				//MessageBox::Show("A client connection request received !!!", "Alert");

				//	showString = gcnew ShowString(this, &Form1::messageReceived);
				m_serverThread = gcnew Thread(gcnew ParameterizedThreadStart(this, &DbOffer::serverThreadFunction));
				m_serverThread->Start(stream);
			}
		}
		catch (Exception^ er)
		{
			MessageBox::Show(er->Message);
		}
	}
	
#define ASYNC_MODEL
	void DbOffer::serverThreadFunction(Object^ object)
	{
		NetworkStream^ stream = static_cast<NetworkStream^>(object);
		array<String^>^ info = gcnew array<String^>(4) {"test", "test", "test", "test"};

		int strCount = 0;
		try {
			BinaryReader^ reader = gcnew BinaryReader(stream);
			BinaryWriter^ writer = gcnew BinaryWriter(stream);

			while (m_alive) {
				if (stream->DataAvailable) {
					String^ msg = reader->ReadString(); StampCommand(msg);
					if (strCount < 4) {
						info[strCount++] = msg;
						if (strCount == 4) {
							if(!VerifyIdentity(info)) break;
						}
					}
					else {
						DataTable^ table = DatabaseQuery(msg);
#ifdef ASYNC_MODEL
						array<Byte>^ serializedTableData = Serializer(table);
						writer->Write(serializedTableData->Length.ToString()); 
						writer->Write(serializedTableData);
#else					
						int frame_size = RBUFFER_SIZE;
						array<Byte>^ serializedTableData = Serializer(table);
						if (serializedTableData->Length <= frame_size) {
							writer->Write(serializedTableData->Length.ToString() + "," + serializedTableData->Length.ToString());
							writer->Write(serializedTableData);
						}
						else {
							int	send_bytes = 0;
							int frame_count = serializedTableData->Length / frame_size;
							if (serializedTableData->Length % frame_size) frame_count++;
							writer->Write(serializedTableData->Length.ToString() + "," + frame_size.ToString());
							for (int i = 0; i < frame_count; i++) {
								if (serializedTableData->Length - send_bytes < frame_size) frame_size = serializedTableData->Length - send_bytes;
								stream->Write(serializedTableData, send_bytes, frame_size);
								send_bytes += frame_size;
							}
						}
#endif						
					}
				}
			}
		}
		catch (Exception^ er)
		{
			MessageBox::Show(er->Message);
		}
	}

	int DbOffer::VerifyIdentity(array<String^>^ data)
	{
		if (data[0] == L"SRegister_remote_user" && data[3] == L"grakhtar767") return 1;
		return 0;
	}

	array<Byte>^ DbOffer::Serializer(DataTable^ table)
	{
		MemoryStream^ stream = gcnew MemoryStream();
		BinaryFormatter^ formatter = gcnew BinaryFormatter();
		//IFormatter ^formatter = gcnew Formatters::Binary::BinaryFormatter();
		//System::Runtime::Serialization::IFormatter ^formatter = gcnew System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();

		formatter->Serialize(stream, table);
		return stream->GetBuffer();
	}

	void DbOffer::set_alive(bool alive)
	{
		m_alive = alive;
	}
}
