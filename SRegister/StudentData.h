#pragma once
namespace SRegister {
using namespace System;

public ref class StudentData
{
	private:
		int sro;				// Enrollment Number
		String^   name;			// Student name
		String^   father;		// Father name
		DateTime^ doa;			// Date of Admission
		DateTime^ dob;			// Date of Birth
		DateTime^ doe;			// Date of School Leaving
		String^   caste;		
		String^   address;		
		String^   occupation;	
		int       class1;
		int       class2;
		int       session;
		int       passed;

public:
	StudentData(void);
	StudentData(int, 
	String^, String^, String^, String^, String^, 
	DateTime^, DateTime^, DateTime^, int, int, int, int);
	property String^ Name {	
		String^ get() { return name; }
		void set(String^ _name) { name = _name; }
	}
	property String^ Father {	
		String^ get() { return father; }
		void set(String^ _name) { father = _name; }
	}
	property String^ Caste {	
		String^ get() { return caste; }
		void set(String^ _name) { caste = _name; }
	}
	property String^ Address {	
		String^ get() { return address; }
		void set(String^ _name) { address = _name; }
	}
	property String^ Occupation {	
		String^ get() { return occupation; }
		void set(String^ _name) { occupation = _name; }
	}

	property DateTime^ DOA {	
		DateTime^ get() { return doa; }
		void set(DateTime^ _date) { doa = _date; }
	}
	property DateTime^ DOB {	
		DateTime^ get() { return dob; }
		void set(DateTime^ _date) { dob = _date; }
	}
	property DateTime^ DOE {	
		DateTime^ get() { return doe; }
		void set(DateTime^ _date) { doe = _date; }
	}

	property int Sro {	
		int get() { return sro; }
		void set(int _number) { sro = _number; }
	}
	property int Class1 {	
		int get() { return class1; }
		void set(int _number) { class1 = _number; }
	}
	property int Class2 {	
		int get() { return class2; }
		void set(int _number) { class2 = _number; }
	}
	property int Session {	
		int get() { return session; }
		void set(int _number) { session = _number; }
	}
	property int Passed {	
		int get() { return passed; }
		void set(int _boolean) { passed = _boolean; }
	}
};

}
