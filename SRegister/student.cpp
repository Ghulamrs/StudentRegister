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

	public ref class StudentData {
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
		bool      passed;

	public:
		StudentData(){}

		property String^ Name {	// Student name
			String^ get() { return name; }
			void set(String^ _name) { name = _name; }
		}
		property String^ Father {	// Student name
			String^ get() { return father; }
			void set(String^ _name) { father = _name; }
		}
		property String^ Caste {	// Student name
			String^ get() { return caste; }
			void set(String^ _name) { caste = _name; }
		}
		property String^ Address {	// Student name
			String^ get() { return address; }
			void set(String^ _name) { address = _name; }
		}
		property String^ Occupation {	// Student name
			String^ get() { return occupation; }
			void set(String^ _name) { occupation = _name; }
		}

		property DateTime^ DOA {	// Student name
			DateTime^ get() { return doa; }
			void set(DateTime^ _date) { doa = _date; }
		}
		property DateTime^ DOB {	// Student name
			DateTime^ get() { return dob; }
			void set(DateTime^ _date) { dob = _date; }
		}
		property DateTime^ DOE {	// Student name
			DateTime^ get() { return doe; }
			void set(DateTime^ _date) { doe = _date; }
		}

		property int Sro {	// Student name
			int get() { return sro; }
			void set(int _number) { sro = _number; }
		}
		property int Class1 {	// Student name
			int get() { return class1; }
			void set(int _number) { class1 = _number; }
		}
		property int Class2 {	// Student name
			int get() { return class2; }
			void set(int _number) { class2 = _number; }
		}
		property int Session {	// Student name
			int get() { return session; }
			void set(int _number) { session = _number; }
		}
		property bool Passed {	// Student name
			bool get() { return passed; }
			void set(bool _boolean) { passed = _boolean; }
		}
	};
}
