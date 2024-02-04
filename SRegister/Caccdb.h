#pragma once
namespace SRegister {

using namespace System;
using namespace System::Data;
using namespace System::Data::OleDb;
using namespace System::Collections;
//using namespace System::Windows::Forms;
using namespace System::Xml;

public ref class Caccdb :
	public XmlData
{
	OleDbConnection^ mcon;
	OleDbDataAdapter^ moleAdapter;

public:
	Caccdb(void);
	Caccdb(String^ tblName);
	Caccdb(String^ dbPath, String^ db);
	int RecordCount(String^ tableName);
	int RecordCount(String^ tableName, String^ cdnName);
	ArrayList^ DatabaseFieldNames(String^ tableName);

public:
	int Count;
	bool connectionOk;
	int DatabaseUpdate(String^ cmd);
	void DatabaseTableInsert(String^ tblName, String^ lst);
	DataTable^ DatabaseQuery(String^ query);
	DataTable^ DatabaseTest(String^ tblName, int);
	DataTable^ DatabaseTableFieldValue(String^ tblName, String^ fldName, String^ value);
	DataTable^ DatabaseTableQuery(String^ tblName, String^ cdnName);

	DataTable^ DatabaseTableNames(String^ tblName, String^ name, String^ fname);
	DataTable^ DatabaseMultipleNames(String^ Name, int total);
	DataTable^ DatabaseMultipleEntries(String^ tblName, String^ group);
};

}