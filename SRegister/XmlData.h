#pragma once

namespace SRegister {

using namespace System;
using namespace System::Collections;
using namespace System::Xml;

public ref class XmlData :
public XmlDocument
{
	String^ m_filename;
public:
	XmlData(String^ file);
	ArrayList^ LoadList(String^ tag);
	ArrayList^ LoadFile(String^ tag);
	void SetAttrib(String^ tag, int);
	void StampCommand(String^);
	int GetAttrib(String^ tag);
};

}
