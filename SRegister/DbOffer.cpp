#include "stdafx.h"
#include "XmlData.h"
#include "student.h"
#include "Caccdb.h"
#include "DbOffer.h"

namespace SRegister {

	DbOffer::DbOffer()
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

			while (true) {
				TcpClient^ client = m_listener->AcceptTcpClient();
				NetworkStream^ stream = client->GetStream();
				MessageBox::Show("A client connection request received !!!", "Alert");

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

	void DbOffer::serverThreadFunction(Object^ object)
	{
		NetworkStream^ stream = static_cast<NetworkStream^>(object);
		array<String^>^ info = gcnew array<String^>(4) {"test", "test", "test", "test"};

		int strCount = 0;
		try {
			BinaryReader^ reader = gcnew BinaryReader(stream);
			BinaryWriter^ writer = gcnew BinaryWriter(stream);
			while (true) {
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

//						String^ title = String::Format("Count = {0}", table->Rows->Count);
//						MessageBox::Show(msg, title);
						array<Byte>^ serializedTableData = Serializer(table);
						writer->Write(serializedTableData->Length.ToString()); 
						writer->Write(serializedTableData);
						//int ix = serializedTableData->Length;
						//MessageBox::Show(ix.ToString(), "test");
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
}
