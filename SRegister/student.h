namespace SRegister {

using namespace System;

	public ref struct Status {
	public:
		short village;// village id
		short caste;    // caste id
		Byte  occupation; // occ id
		Byte  class1;
		Byte  class2;
		Byte  session;
		bool  pass;
	};

	public ref class Student {
	public:
		int sro;		// Enrollment Number
		String^   name;			// Student name
		String^   father;		// Father name
		DateTime^ DOA;			// Date of Admission
		DateTime^ DOB;			// Date of Birth
		DateTime^ DOE;			// Date of School Leaving
		Status^	  status;
	};
}
