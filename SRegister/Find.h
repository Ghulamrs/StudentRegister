#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Finds
	/// </summary>
	public ref class Finds : public System::Windows::Forms::Form
	{
	public:
		Finds(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Finds()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Clos;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox;
	protected: 

	public: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Find;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Clos = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Find = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Clos
			// 
			this->Clos->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Clos->ForeColor = System::Drawing::Color::Black;
			this->Clos->Location = System::Drawing::Point(45, 100);
			this->Clos->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->Clos->Name = L"Clos";
			this->Clos->Size = System::Drawing::Size(96, 44);
			this->Clos->TabIndex = 3;
			this->Clos->Text = L"&بند کریں";
			this->Clos->UseVisualStyleBackColor = true;
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 15.83246F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(45, 19);
			this->textBox->Margin = System::Windows::Forms::Padding(2);
			this->textBox->Name = L"textBox";
			this->textBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox->Size = System::Drawing::Size(208, 41);
			this->textBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(257, 19);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L" لفظ";
			// 
			// Find
			// 
			this->Find->ForeColor = System::Drawing::Color::Green;
			this->Find->Location = System::Drawing::Point(217, 101);
			this->Find->Margin = System::Windows::Forms::Padding(2);
			this->Find->Name = L"Find";
			this->Find->Size = System::Drawing::Size(96, 44);
			this->Find->TabIndex = 2;
			this->Find->Text = L"&ٹھیک ہے";
			this->Find->UseVisualStyleBackColor = true;
			// 
			// Finds
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 156);
			this->Controls->Add(this->Find);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->Clos);
			this->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->MaximizeBox = false;
			this->Name = L"Finds";
			this->Text = L" نئے الفاظ";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Finds::Finds_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	property String^ StringToFind {
		String^ get() {
			return textBox->Text;
		}
		void set(String^ value) {
			textBox->Text = value;
		}
	}

	public:
	Finds(array<System::EventHandler^>^ evh) {
		InitializeComponent();

		// defined in Form1.h file(Form1 class)
		this->Find->Click += evh[0];
		this->Clos->Click += evh[1];
		
		this->CenterToScreen();
		this->BringToFront();
	}
private: System::Void Finds_Load(System::Object^  sender, System::EventArgs^  e) {
		if(label1->Text->Contains(L"گا‌ؤں"))	this->textBox->MaxLength = 128;
		else this->textBox->MaxLength = 32;
	}
};
}
