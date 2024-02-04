#include "StdAfx.h"
#include "XmlData.h"
#include "student.h"
#include "Caccdb.h"

namespace SRegister {

Caccdb::Caccdb(void)
	: XmlData(L"Command.xml")
	,connectionOk(false)
	, Count(0)
{
	String^ dbName;
	if (DiscoverDatabase(dbName) > 0) {
		try {
			String^ NameString = Environment::CurrentDirectory + L"\\Database\\" + dbName; //;Persist Security Info=True";
			String^ connetionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + NameString + ";Persist Security Info=True";

			mcon = gcnew OleDbConnection(connetionString);
			moleAdapter = gcnew OleDbDataAdapter();
			if (mcon != nullptr && moleAdapter != nullptr) {
				Count = RecordCount(L"داخلہ");
				connectionOk = true;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Database Operation");
		}
	}
}

Caccdb::Caccdb(String^ dbName)
	: XmlData(L"Command.xml")
	,connectionOk(false)
	, Count(0)
{
	try {
		String^ NameString = Environment::CurrentDirectory + L"\\Database\\" + dbName; //;Persist Security Info=True";
		String^ connetionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + NameString + ".accdb;Persist Security Info=True"; 
				
		mcon = gcnew OleDbConnection(connetionString);
		moleAdapter = gcnew OleDbDataAdapter();
		if(mcon != nullptr && moleAdapter != nullptr) {
			Count = RecordCount(L"داخلہ");
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
		String^ connetionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + NameString + ".accdb;Persist Security Info=True"; 
				
		mcon = gcnew OleDbConnection(connetionString);
		moleAdapter = gcnew OleDbDataAdapter();
		if(mcon != nullptr && moleAdapter != nullptr) {
			Count = RecordCount(L"داخلہ");
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
			String^ cmd = "select Distinct " + fldName + " from " + tblName + " where " + fldName + " like '" + value + "%' order by " + fldName; StampCommand(cmd);
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

//DataTable^ Caccdb::DatabaseTest(String^ tblName, int RNo)
DataTable^ Caccdb::DatabaseTest(int No)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
            String^ cmd = L"select طلبا.نمبر, نام, ولد, پیدائش, ذات, پتہ, پیشہ,داخلہ.نمبر, داخلہ.جماعت, داخلہ.تاریخ, داخلہ.تاجماعت, داخلہ.تاتاریخ, داخلہ.کیفیت, داخلہ.سال, داخلہ.حوالہ FROM طلبا INNER JOIN داخلہ ON داخلہ.[حوالہ]=طلبا.[نمبر] where داخلہ.نمبر=" + No.ToString() + L" order by داخلہ.نمبر";
			//String^ cmd = "select * from " + tblName + L" where نمبر=" + RNo.ToString(); StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Database Operation failed");
	}
	finally {
		mcon->Close();
	}

	return table;
}

DataTable^ Caccdb::DatabaseFindInTable(String^ tblName, int RNo)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select * from " + tblName + L" where نمبر=" + RNo.ToString(); StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Database Operation failed");
	}
	finally {
		mcon->Close();
	}

	return table;
}
DataTable^ Caccdb::DatabaseQuery(String^ query)
{
	DataTable^ table = gcnew DataTable(L"Student");
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			moleAdapter->SelectCommand = gcnew OleDbCommand(query, mcon); StampCommand(query);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Database Operation query failed");
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
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Database Operation on table " + tblName);
	}
	finally {
		mcon->Close();
	}

	return table;
}

//DataTable^ Caccdb::DatabaseTableNames(String^ tblName, String^ name, String^ fname)
DataTable^ Caccdb::DatabaseTableNames(Student^ student)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String ^cmd = L"select * from طلبا where (نام like '" + student->name + "')" + 
											  L" and (ولد like '" + student->fname + "')"; StampCommand(cmd);
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


DataTable^ Caccdb::DatabaseTableNamesTable(DataTable^ table, String^ fldName, String^ value)
{
	DataTable^ rtable = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			table->Rows[0][fldName] = value;
			String ^cmd = L"select * from طلبا where (نام  like '" + table->Rows[0][L"نام"]->ToString() + "')" + 
											  L" and (ولد  like '" + table->Rows[0][L"ولد"]->ToString() + "')" + 
											  L" and (ذات  like '" + table->Rows[0][L"ذات"]->ToString() + "')" + 
											  L" and (پیشہ like '" + table->Rows[0][L"پیشہ"]->ToString()+ "')" + 
											  L" and (پتہ  like '" + table->Rows[0][L"پتہ"]->ToString() + "')"; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(rtable);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "DatabaseTableNamesTable");
	}
	finally {
		mcon->Close();
	}
				
	return rtable;
}

DataTable^ Caccdb::DatabaseTableNamesEtc(Student^ student, String^ caste, String^ village)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String ^cmd = L"select * from طلبا where (نام like '" + student->name + "')" + 
											  L" and (ولد like '" + student->fname + "')"+ 
											  L" and (ذات like '" + caste   + "')"+ 
											  L" and (پتہ like '" + village + "')"; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "DatabaseTableNamesEtc");
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
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "DatabaseTableInsert");
	}
	finally {
		mcon->Close();
	}
}

DataTable^ Caccdb::DatabaseMultipleRecords(String^ tblName, String^ fldName, int total)
{
	DataTable^ table = gcnew DataTable;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "select " + fldName + " from " + tblName + " group by " + fldName + " having count(*) > " + total.ToString(); StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			moleAdapter->SelectCommand->ExecuteNonQuery();
			moleAdapter->Fill(table);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Database Operation");
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
			String^ cmd = "select " + group + " from " + tblName + "  group by " + group + " having count(*) > 1;"; StampCommand(cmd);
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

int Caccdb::DatabaseTableDelete(String^ tblName, String^ cdnName)
{
	int result = 0;
	try {
		if(mcon != nullptr && moleAdapter != nullptr) {
			mcon->Open();
			String^ cmd = "delete * from " + tblName + L" where " + cdnName; StampCommand(cmd);
			moleAdapter->SelectCommand = gcnew OleDbCommand(cmd, mcon);
			result = moleAdapter->SelectCommand->ExecuteNonQuery();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Database Operation on table " + tblName);
	}
	finally {
		mcon->Close();
	}

	return result;
}

int Caccdb::DiscoverDatabase(String^ &file)
{
	int fileCount = 0;
	try
	{
		DirectoryInfo^ di = gcnew DirectoryInfo(Environment::CurrentDirectory);

		array<DirectoryInfo^>^ dirs = di->GetDirectories("*tab*");
		if (dirs->Length > 0) {
			Collections::IEnumerator^ diEnum = dirs->GetEnumerator();
			while (diEnum->MoveNext()) {

				DirectoryInfo^ diNext = safe_cast<DirectoryInfo^>(diEnum->Current);
				if (diNext->Name->ToLower()->Contains("database")) {
					array<FileInfo^>^ files = diNext->GetFiles("*.accdb");
					fileCount = files->Length;

					Collections::IEnumerator^ fiEnum = files->GetEnumerator();
					while (fiEnum->MoveNext()) {
						FileInfo^ fiNext = safe_cast<FileInfo^>(fiEnum->Current);
						file = fiNext->Name;
					}
					break;
				}
			}
		}
	}
	catch (Exception^ e) {
		MessageBox::Show(String::Format("The discover database failed: {0}", e), "Alert");
	}

	return fileCount;
}
}
