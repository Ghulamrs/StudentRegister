#include "stdafx.h"
#include "XmlData.h"
#include "DbnClient.h"

using namespace System;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
//using namespace System::Threading;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

namespace SRegister {
#define RBUFFER_SIZE (8192)

	DbnClient::DbnClient() //: 
//		XmlData(L"Command.xml")
	{
		hostname = Dns::GetHostName();
		client = gcnew TcpClient(hostname, 2054);
		client->ReceiveBufferSize = RBUFFER_SIZE;
		if (client->Connected) {
			stream = client->GetStream();
			reader = gcnew BinaryReader(stream);
			writer = gcnew BinaryWriter(stream);
			SendIdentity();
		}
		else {
			MessageBox::Show(L"No NetworkStream available!", "SRegister");
		}
	}

#define ASYNC_MODEL

	void DbnClient::despatchFunction(String^ command)
	{
		if (!client->Connected) return;
		writer->Write(command);

		String^ nDataLength = reader->ReadString();
#ifdef ASYNC_MODEL
		int buffer_size = int::Parse(nDataLength);
		m_buffer = gcnew array<Byte>(buffer_size);
		if (stream->CanRead) {
			numberOfBytesAlreadyRead = 0;
			autoEvent = gcnew AutoResetEvent(false);
			if (buffer_size > RBUFFER_SIZE) buffer_size = RBUFFER_SIZE;
			stream->BeginRead(m_buffer, 0, buffer_size, gcnew AsyncCallback(this, &DbnClient::myReadCallBack), stream);
			autoEvent->WaitOne();
		}
		else {
			MessageBox::Show("Sorry. You cannot read from this NetworkStream.", "SRegister");
		}
#else
		array<String^>^ str = nDataLength->Split(gcnew array<Char>{','});
		int buffer_size = int::Parse(str[0]);
		int frame_size = int::Parse(str[1]);
		m_buffer = gcnew array<Byte>(buffer_size);
		if (frame_size == buffer_size) reader->Read(m_buffer, 0, m_buffer->Length);
		else ReadAll(frame_size);
#endif
	}

	void DbnClient::myReadCallBack(IAsyncResult^ ar)
	{
		NetworkStream^ myNetworkStream = safe_cast<NetworkStream^>(ar->AsyncState);
		int numberOfBytesRead = myNetworkStream->EndRead(ar);

		if (numberOfBytesAlreadyRead > 0) Array::Copy(myReadBuffer, 0, m_buffer, numberOfBytesAlreadyRead, numberOfBytesRead);
		numberOfBytesAlreadyRead += numberOfBytesRead;
		if (numberOfBytesAlreadyRead < m_buffer->Length) {

			numberOfBytesRead = RBUFFER_SIZE;
			if (m_buffer->Length - numberOfBytesAlreadyRead < numberOfBytesRead) numberOfBytesRead = m_buffer->Length - numberOfBytesAlreadyRead;
			myReadBuffer = gcnew array<Byte>(numberOfBytesRead);

			myNetworkStream->BeginRead(myReadBuffer, 0, numberOfBytesRead, gcnew AsyncCallback(this, &DbnClient::myReadCallBack), myNetworkStream);
		}
		else {
			autoEvent->Set();
		}
	}

	void DbnClient::ReadAll(int fsize)
	{
		int read_bytes = 0;
		int data_size = m_buffer->Length;
		int frame_count = data_size / fsize;
		if (data_size % fsize) frame_count++;
		for (int i = 0; i < frame_count; i++) {
			if (data_size - read_bytes < fsize) fsize = data_size - read_bytes;
			stream->Read(m_buffer, read_bytes, fsize);
			read_bytes += fsize;
			Thread::Sleep(1);
		}
	}

	void DbnClient::SendIdentity(void)
	{
		String^ msg = L"SRegister_remote_user";
		String^ psw = L"grakhtar767";

		if (client->Connected) {
			writer->Write(msg);		 // special string
			writer->Write(hostname); // machine name
			writer->Write(Environment::UserDomainName);// username
			writer->Write(psw);		 // passkey
		}
	}

	DataTable^ DbnClient::Deserializer(void)
	{
		DataTable^ table;
		try {
			MemoryStream^ stream = gcnew MemoryStream(m_buffer);
			IFormatter ^formatter = gcnew Formatters::Binary::BinaryFormatter();
			table = (DataTable^)formatter->Deserialize(stream);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Alert");
		}
		return table;
	}

	DbnClient::~DbnClient() {
		reader->Close();
		writer->Close();
		stream->Close();
		delete client;
	}
}
