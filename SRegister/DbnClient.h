#pragma once
namespace SRegister {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Net;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Threading;
	using namespace System::Collections;
	using namespace System::Net::Sockets;
	using namespace System::Windows::Forms;
	using namespace System::Runtime::Serialization;
	using namespace System::Runtime::Serialization::Formatters::Binary;

	public ref class DbnClient //:
//		public XmlData
	{
		String^ hostname;
		TcpClient^ client;
		BinaryReader^ reader;
		BinaryWriter^ writer;
		NetworkStream^ stream;
		AutoResetEvent^ autoEvent;
		array<Byte>^ m_buffer;
		array<Byte>^ myReadBuffer;
		int numberOfBytesAlreadyRead;

	public:
		DbnClient();
		void despatchFunction(String^ command);
		void myReadCallBack(IAsyncResult^ ar);
		DataTable^ Deserializer(void);
		void SendIdentity(void);
		void ReadAll(int fsize);
		virtual ~DbnClient();
	};
}