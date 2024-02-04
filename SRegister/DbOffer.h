#pragma once
namespace SRegister {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Net;
	using namespace System::Threading;
	using namespace System::Collections;
	using namespace System::Net::Sockets;
//	using namespace System::Runtime::Serialization::Formatters;
	using namespace System::Runtime::Serialization::Formatters::Binary;

#include "Caccdb.h"

	public ref class DbOffer :
		public Caccdb
	{
		array<IPAddress^>^ m_addressList;
		TcpListener^ m_listener;
		Thread^ m_listenerThread;
		Thread^ m_serverThread;	

	public:
		DbOffer();
		void listenerThreadFunction(Object^ object);
		void serverThreadFunction(Object^ object);
		int VerifyIdentity(array<String^>^ data);
		array<Byte>^  Serializer(DataTable^ table);
	};
}