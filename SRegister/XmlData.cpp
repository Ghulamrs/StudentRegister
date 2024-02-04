#include "StdAfx.h"
#include "XmlData.h"

namespace SRegister {

XmlData::XmlData(String^ file)
{
	this->m_filename = file;
	this->PreserveWhitespace = true;
	this->Load(file);
}

ArrayList^ XmlData::LoadList(String^ tag)
{
	ArrayList^ list = gcnew ArrayList;

	try {
		XmlElement^ root = this->DocumentElement;
		XmlNodeList^ nodes = root->GetElementsByTagName(tag);
		if(nodes->Count > 0) {
			for (int i=0; i<nodes->Count; i++) 
				list->Add(nodes[i]->InnerText);
		}
	}
	catch(Exception^) {
//		MessageBox::Show(e->Message, "Error Reading Config from XmlFile");
	}

	return list;
}

ArrayList^ XmlData::LoadFile(String^ tag)
{
#include "data.h"
	int i = 0;
	array<String^>^ arr;
	try {
		ArrayList^ list = LoadList(tag);
		if(list->Count > 0) return list;

		if(     tag->Contains("se")) arr = Sections;
		else if(tag->Contains("vi")) arr = Villages;
		else if(tag->Contains("oc")) arr = Occupations;
		else if(tag->Contains("ca")) arr = Castes;
		else { 
			list->Add(L"میاں رحیماں"); 
			return list;
		}

		while(i < arr->Length) list->Add(arr[i++]);
		return list;
	}
	catch(Exception^) {
//		MessageBox::Show(e->Message, "Error Reading Config from XmlFile");
	}
}

int XmlData::GetAttrib(String^ tag)
{
	try {
		XmlElement^ root = this->DocumentElement;
		XmlNodeList^ list = root->GetElementsByTagName(tag);
		if(list->Count < 1) return 0;

		XmlAttributeCollection^ attr = list[0]->Attributes;
		if(attr->Count < 1) return 0;

		String^ value = attr->Item(attr->Count-1)->Value;
		return Convert::ToInt32(value)-1;
	}
	catch(Exception^) {
//		MessageBox::Show(e->Message, "Error Reading Config from XmlFile");
	}
}

void XmlData::SetAttrib(String^ tag, int value)
{
	try {
		XmlElement^ root = this->DocumentElement;
		XmlNodeList^ list = root->GetElementsByTagName(tag);
		if(list->Count < 1) return ;

		XmlAttributeCollection^ attr = list[0]->Attributes;
		if(attr->Count < 1) return ;

		//String^ value = attr[attr->Count-1]->Value;
		if(value == Convert::ToInt32(attr->Item(attr->Count-1)->Value)) return;
		attr->Item(attr->Count-1)->Value = value.ToString();
	}
	catch(Exception^) {
//		MessageBox::Show(e->Message, "Error writing Config to XmlFile");
	}
	finally {
		Save(m_filename);
	}
}

void XmlData::StampCommand(String^ cmd)
{
	XmlDocument^ doc = gcnew XmlDocument();

	try {
		DateTime^ date = DateTime::Now;
		String^ label = "_" + date->ToString("yyyy-MM-dd");
		
		doc->Load(m_filename);
		XmlElement^ root = doc->DocumentElement;
		XmlNodeList^ list = root->GetElementsByTagName(label);
		if (list->Count == 0) {
			XmlElement^ ele = doc->CreateElement(label);
			root->AppendChild(ele);
		}
		if (list->Count > 0) {
			String^ tag = "_" + date->ToShortTimeString()->Replace(' ', '-')->Replace(':', '-');
			XmlElement^ ele = doc->CreateElement(tag, cmd);
			list->Item(list->Count-1)->AppendChild(ele);
		}
	}
	catch(Exception^) {
//		MessageBox::Show(e->Message, "Error updating command to XmlFile");
	}
	finally {
		doc->Save(m_filename);
	}
}

}

