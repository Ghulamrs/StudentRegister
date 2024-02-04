#include "StdAfx.h"
#include "StudentData.h"

namespace SRegister {

StudentData::StudentData(void)
{
	Sro = 0;

	Name = gcnew String(L"");
	Father = gcnew String(L"");

	Caste = gcnew String(L"");
	Address = gcnew String(L"");
	Occupation = gcnew String(L"");

	DOA = gcnew DateTime(1945, 12, 25);
	DOB = gcnew DateTime(1950, 12, 25);
	DOE = gcnew DateTime(1955, 12, 25);

	Class1  = 1;
	Class2  = 5;
	Session = 1;
	Passed  = true;
}

StudentData::StudentData(int sr, 
	String^ name, String^ father, String^ cat, String^ occ, String^ add, 
	DateTime^ da, DateTime^ db, DateTime^ de, int c1, int c2, int ss, int ps)
{
	Sro = sr;

	Name = name;
	Father = father;

	Caste = cat;
	Address = add;
	Occupation = occ;

	DOA = da;
	DOB = db;
	DOE = de;

	Class1  = c1;
	Class2  = c2;
	Session = ss;
	Passed  = ps;
}

}