#include "StdAfx.h"
#include "XmlData.h"
#include "Caccdb.h"

namespace SRegister {

Caccdb::Caccdb(void)
	: XmlData(L"Command.xml")
	,connectionOk(false)
	, Count(0)
{
}

Caccdb::Caccdb(String^ dbName)
	: XmlData(L"Command.xml")
	,connectionOk(false)
	, Count(0)
{
	try {
		String^ NameString = Environment::CurrentDirectory + L"\\Database\\" + dbName; //;Persist Security Info=True";
		String^ connetionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + NameString + ".accdb;Jet OLEDB:Database Password=gra786"; 
				
		mcon = gcnew OleDbConnection(connetionString);
		moleAdapter = gcnew OleDbDataAdapter();
		if(mcon != nullptr && moleAdapter != nullptr) {
			Count = RecordCount(L"student");
			connectionOk = true;
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
}

Caccdb::Caccdb(String^ dbPath, String^ db)
	: XmlData(L"Command.xml")
	,connectionOk(false)
	, Count(0)
{
	try {
		String^ NameString = dbPath + db; //;Persist Security Info=True";
		String^ connetionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + NameString + ".accdb;Jet OLEDB:Database Password=gra786"; 
				
		mcon = gcnew OleDbConnection(connetionString);
		moleAdapter = gcnew OleDbDataAdapter();
		if(mcon != nullptr && moleAdapter != nullptr) {
			Count = RecordCount(L"student");
			connectionOk = true;
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
}

ArrayList^ Caccdb::DatabaseFieldNames(String^ tableName)
{
	ArrayList^ list = gcnew ArrayList;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select * from " + tableName; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			OleDbDataReader^ reader = moleAdapter->SelectCommand->ExecuteReader(CommandBehavior::SchemaOnly);
			DataTable^ table = reader->GetSchemaTable();

			for(int i=0; i<table->Rows->Count; i++) list->Add(table->Rows[i][0]->ToString());
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Description");
	}
	finally {
		mcon->Close();
	}
		
	return list;
}

int Caccdb::RecordCount(String^ tableName)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select count(*) from " + tableName;  StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
		
	return Convert::ToInt32(table->Rows[0][0]);
}

int Caccdb::RecordCount(String^ tableName, String^ cdnName)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select count(*) from " + tableName + L" where " + cdnName;  StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
		
	return Convert::ToInt32(table->Rows[0][0]);
}

DataTable^ Caccdb::DatabaseTableFieldValue(String^ tblName, String^ fldName, String^ value)
{
	DataTable^ table = gcnew DataTable;

	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select Distinct " + fldName + " from " + tblName + " where " + fldName + " like '" + value + "%'"; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
		
	return table;
}

DataTable^ Caccdb::DatabaseTest(String^ tblName, int RNo)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select * from " + tblName + L" where RNO=" + RNo.ToString(); StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation on table " + tblName);
	}
	finally {
		mcon->Close();
	}

	return table;
}

DataTable^ Caccdb::DatabaseQuery(String^ query)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			moleAdapter->SelectCommand = gcnew OleDbCommand(query, mcon); StampCommand(query);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation query failed");
	}
	finally {
		mcon->Close();
	}

	return table;
}

DataTable^ Caccdb::DatabaseTableQuery(String^ tblName, String^ cdnName)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select * from " + tblName + L" where " + cdnName; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation on table " + tblName);
	}
	finally {
		mcon->Close();
	}

	return table;
}

DataTable^ Caccdb::DatabaseTableNames(String^ tblName, String^ name, String^ fname)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String ^cmd = "select * from " + tblName + " where (StudentName like '" + name + "') and (FathersName like '" + fname + "')"; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
		//MessageBox::Show(cmd + L"\r\n\r\n" + ex->Message, "DatabaseTestName");
	}
	finally {
		mcon->Close();
	}
				
	return table;
}

void Caccdb::DatabaseTableInsert(String^ tblName, String^ lst)
{
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "insert into " + tblName + " values(" + lst + ")"; StampCommand(cmd);
			moleAdapter->InsertCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->InsertCommand->ExecuteNonQuery();
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
}

DataTable^ Caccdb::DatabaseMultipleNames(String^ Name, int total)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select " + Name + " from student group by " + Name + " having count(*) > " + total.ToString(); StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
	
	return table;
}

DataTable^ Caccdb::DatabaseMultipleEntries(String^ tblName, String^ group)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select " + group + " from " + tblName + " group by " + group + " having count(*) > 1;"; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
				
	return table;
}

int Caccdb::DatabaseUpdate(String^ cmd) // used to run update command
{
	int result = 0;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open(); StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			result = moleAdapter->SelectCommand->ExecuteNonQuery();
		}
	}
	catch (Exception^) {
//		MessageBox::Show(ex->Message, "Database Operation");
	}
	finally {
		mcon->Close();
	}
	
	return result;
}
}




