#pragma once

namespace SRegister {
	using namespace System;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Globalization;
	using namespace System::Threading;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Diagnostics;
	using namespace System::Xml;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void) 
			: iSection(-1)
			, isFindOpen(false)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ChangeCulture(L"ur-PK");
			CenterToScreen();
			BringToFront();		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^  textBoxRNO;
	protected: 
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DateTimePicker^  DOE;
	private: System::Windows::Forms::ComboBox^  ComboBoxCaste;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  ComboBoxOccupation;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckBox^  passCheckBox;
	private: System::Windows::Forms::SaveFileDialog^  saveFile;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  ExClassUpDown;
	private: System::Windows::Forms::NumericUpDown^  InClassUpDown;
	private: System::Windows::Forms::NumericUpDown^  UpDown;


	private: System::Windows::Forms::Button^  Next;
	private: System::Windows::Forms::DateTimePicker^  DOB;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  DOA;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  ComboBoxVillage;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxFather;
	private: System::Windows::Forms::TextBox^  textBoxName;
	public: System::Windows::Forms::Label^  Title;


	private: System::Windows::Forms::NumericUpDown^  SessionUpDown;


	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  ChangeDatabase;
	private: System::Windows::Forms::OpenFileDialog^  openFile;
	private: System::Windows::Forms::Label^  dataReference;

	private: System::Windows::Forms::Label^  usingConfigFile;
	private: System::Windows::Forms::CheckBox^  adOnlyCheckBox;






	private: System::ComponentModel::IContainer^  components;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxRNO = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->DOE = (gcnew System::Windows::Forms::DateTimePicker());
			this->ComboBoxCaste = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ComboBoxOccupation = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->passCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->saveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ExClassUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->InClassUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->UpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->DOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->DOA = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ComboBoxVillage = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxFather = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->SessionUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ChangeDatabase = (gcnew System::Windows::Forms::Button());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataReference = (gcnew System::Windows::Forms::Label());
			this->usingConfigFile = (gcnew System::Windows::Forms::Label());
			this->adOnlyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ExClassUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->InClassUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SessionUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxRNO
			// 
			this->textBoxRNO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxRNO->Location = System::Drawing::Point(91, 19);
			this->textBoxRNO->Margin = System::Windows::Forms::Padding(2);
			this->textBoxRNO->Mask = L"00000";
			this->textBoxRNO->Name = L"textBoxRNO";
			this->textBoxRNO->PromptChar = ' ';
			this->textBoxRNO->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxRNO->Size = System::Drawing::Size(54, 26);
			this->textBoxRNO->TabIndex = 0;
			this->textBoxRNO->ValidatingType = System::Int32::typeid;
			this->textBoxRNO->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->textBoxRNO->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(427, 264);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 30);
			this->label11->TabIndex = 27;
			this->label11->Text = L"تاریخ خارجہ";
			// 
			// DOE
			// 
			this->DOE->CustomFormat = L"dd/MM/yyyy";
			this->DOE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOE->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DOE->Location = System::Drawing::Point(501, 274);
			this->DOE->Margin = System::Windows::Forms::Padding(2);
			this->DOE->Name = L"DOE";
			this->DOE->Size = System::Drawing::Size(130, 23);
			this->DOE->TabIndex = 11;
			this->DOE->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->DOE->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave);
			// 
			// ComboBoxCaste
			// 
			this->ComboBoxCaste->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ComboBoxCaste->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxCaste->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComboBoxCaste->FormattingEnabled = true;
			this->ComboBoxCaste->Items->AddRange(gcnew cli::array< System::Object^  >(36) {L"آرائیں", L"اعوان", L"بٹ", L"بڑھئی", L"بھٹی", 
				L"پٹھان", L"تارڑ", L"جٹ", L"جھکھڑ", L"جوئیہ", L"چٹھہ", L"چندڑ", L"چیمہ", L"خان", L"درزی", L"راجپوت", L"رحمانی", L"ریاڑ", L"سرگانہ", 
				L"سنار", L"سید", L"شیخ", L"قریشی", L"قصاب", L"کشمیری", L"کمبوہ", L"کندی", L"کھوکھر", L"لوہار", L"ماچھی", L"مسلم شیخ", L"مغل", 
				L"ملک", L"موچی", L"نائی", L"وڑائچ"});
			this->ComboBoxCaste->Location = System::Drawing::Point(91, 271);
			this->ComboBoxCaste->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxCaste->Name = L"ComboBoxCaste";
			this->ComboBoxCaste->Size = System::Drawing::Size(138, 38);
			this->ComboBoxCaste->TabIndex = 5;
			this->ComboBoxCaste->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &Form1::ComboBoxOccupation_DrawItem);
			this->ComboBoxCaste->DropDownClosed += gcnew System::EventHandler(this, &Form1::ComboBoxCaste_DropDownClosed);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(10, 274);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 30);
			this->label10->TabIndex = 20;
			this->label10->Text = L"ذات/برادری";
			// 
			// ComboBoxOccupation
			// 
			this->ComboBoxOccupation->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ComboBoxOccupation->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxOccupation->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComboBoxOccupation->FormattingEnabled = true;
			this->ComboBoxOccupation->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ComboBoxOccupation->ItemHeight = 30;
			this->ComboBoxOccupation->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"امامت", L"زراعت", L"غیر زراعت", L"تجارت", 
				L"مزدوری", L"ملازمت", L"سیپ"});
			this->ComboBoxOccupation->Location = System::Drawing::Point(91, 221);
			this->ComboBoxOccupation->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxOccupation->Name = L"ComboBoxOccupation";
			this->ComboBoxOccupation->Size = System::Drawing::Size(92, 36);
			this->ComboBoxOccupation->TabIndex = 4;
			this->ComboBoxOccupation->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &Form1::ComboBoxOccupation_DrawItem);
			this->ComboBoxOccupation->DropDownClosed += gcnew System::EventHandler(this, &Form1::ComboBoxOccupation_DropDownClosed);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(26, 324);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 30);
			this->label9->TabIndex = 21;
			this->label9->Text = L"پتہ یا گا‌ؤں‎‏";
			// 
			// passCheckBox
			// 
			this->passCheckBox->AutoSize = true;
			this->passCheckBox->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->passCheckBox->Location = System::Drawing::Point(501, 307);
			this->passCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->passCheckBox->Name = L"passCheckBox";
			this->passCheckBox->Size = System::Drawing::Size(65, 34);
			this->passCheckBox->TabIndex = 12;
			this->passCheckBox->Text = L"پاس کیا";
			this->passCheckBox->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->passCheckBox->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(421, 217);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 30);
			this->label8->TabIndex = 26;
			this->label8->Text = L"جماعت خارجہ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(422, 68);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 30);
			this->label7->TabIndex = 24;
			this->label7->Text = L"جماعت داخلہ";
			// 
			// ExClassUpDown
			// 
			this->ExClassUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ExClassUpDown->Location = System::Drawing::Point(501, 229);
			this->ExClassUpDown->Margin = System::Windows::Forms::Padding(2);
			this->ExClassUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->ExClassUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->ExClassUpDown->Name = L"ExClassUpDown";
			this->ExClassUpDown->Size = System::Drawing::Size(51, 23);
			this->ExClassUpDown->TabIndex = 10;
			this->ExClassUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->ExClassUpDown->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->ExClassUpDown->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave);
			// 
			// InClassUpDown
			// 
			this->InClassUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->InClassUpDown->Location = System::Drawing::Point(501, 76);
			this->InClassUpDown->Margin = System::Windows::Forms::Padding(2);
			this->InClassUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->InClassUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->InClassUpDown->Name = L"InClassUpDown";
			this->InClassUpDown->Size = System::Drawing::Size(51, 23);
			this->InClassUpDown->TabIndex = 8;
			this->InClassUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->InClassUpDown->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->InClassUpDown->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave);
			// 
			// UpDown
			// 
			this->UpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.06283F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UpDown->ForeColor = System::Drawing::SystemColors::WindowText;
			this->UpDown->Location = System::Drawing::Point(163, 19);
			this->UpDown->Margin = System::Windows::Forms::Padding(2);
			this->UpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->UpDown->Name = L"UpDown";
			this->UpDown->Size = System::Drawing::Size(49, 26);
			this->UpDown->TabIndex = 14;
			this->UpDown->TabStop = false;
			this->UpDown->Click += gcnew System::EventHandler(this, &Form1::UpDown_Click);
			// 
			// Next
			// 
			this->Next->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Next->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Next->Location = System::Drawing::Point(163, 382);
			this->Next->Margin = System::Windows::Forms::Padding(2);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(112, 45);
			this->Next->TabIndex = 13;
			this->Next->Text = L"&آگے";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &Form1::Next_Click);
			// 
			// DOB
			// 
			this->DOB->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->DOB->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->DOB->CustomFormat = L"dd/MM/yyyy";
			this->DOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DOB->Location = System::Drawing::Point(91, 121);
			this->DOB->Margin = System::Windows::Forms::Padding(2);
			this->DOB->Name = L"DOB";
			this->DOB->Size = System::Drawing::Size(130, 23);
			this->DOB->TabIndex = 2;
			this->DOB->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->DOB->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(13, 117);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 30);
			this->label6->TabIndex = 17;
			this->label6->Text = L"تاریخ پیدائش";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(434, 115);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 30);
			this->label5->TabIndex = 25;
			this->label5->Text = L"تایخ داخلہ";
			// 
			// DOA
			// 
			this->DOA->CustomFormat = L"dd/MM/yyyy";
			this->DOA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOA->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DOA->Location = System::Drawing::Point(501, 121);
			this->DOA->Margin = System::Windows::Forms::Padding(2);
			this->DOA->Name = L"DOA";
			this->DOA->Size = System::Drawing::Size(130, 23);
			this->DOA->TabIndex = 9;
			this->DOA->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->DOA->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(27, 224);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 30);
			this->label4->TabIndex = 19;
			this->label4->Text = L"والد کا پیشہ";
			// 
			// ComboBoxVillage
			// 
			this->ComboBoxVillage->Cursor = System::Windows::Forms::Cursors::Default;
			this->ComboBoxVillage->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxVillage->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComboBoxVillage->FormattingEnabled = true;
			this->ComboBoxVillage->ItemHeight = 30;
			this->ComboBoxVillage->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"ٹھٹھہ جھکھڑاں", L"ٹھٹھہ قادر", L"جلال آنہ", 
				L"جھلار", L"ساون پورہ", L"قلعہ ہرسکھرائے", L"میاں رحیماں", L"میلو آنہ", L"ناہریانوالہ"});
			this->ComboBoxVillage->Location = System::Drawing::Point(91, 323);
			this->ComboBoxVillage->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxVillage->Name = L"ComboBoxVillage";
			this->ComboBoxVillage->Size = System::Drawing::Size(138, 36);
			this->ComboBoxVillage->TabIndex = 6;
			this->ComboBoxVillage->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &Form1::ComboBoxOccupation_DrawItem);
			this->ComboBoxVillage->DropDownClosed += gcnew System::EventHandler(this, &Form1::ComboBoxVillage_DropDownClosed);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(26, 17);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 30);
			this->label3->TabIndex = 15;
			this->label3->Text = L" نمبرسلسلہ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(30, 167);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 30);
			this->label2->TabIndex = 18;
			this->label2->Text = L"والد کا نام";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(13, 66);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 30);
			this->label1->TabIndex = 16;
			this->label1->Text = L"نام طالب علم";
			// 
			// textBoxFather
			// 
			this->textBoxFather->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxFather->Location = System::Drawing::Point(91, 164);
			this->textBoxFather->Margin = System::Windows::Forms::Padding(2);
			this->textBoxFather->MaxLength = 64;
			this->textBoxFather->Name = L"textBoxFather";
			this->textBoxFather->Size = System::Drawing::Size(183, 37);
			this->textBoxFather->TabIndex = 3;
			this->textBoxFather->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBoxFather_MouseDown);
			// 
			// textBoxName
			// 
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxName->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxName->Location = System::Drawing::Point(91, 64);
			this->textBoxName->Margin = System::Windows::Forms::Padding(2);
			this->textBoxName->MaxLength = 64;
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(183, 37);
			this->textBoxName->TabIndex = 1;
			this->textBoxName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::textBoxName_MouseDown);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Title->ForeColor = System::Drawing::Color::Teal;
			this->Title->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Title->Location = System::Drawing::Point(223, 10);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(0, 33);
			this->Title->TabIndex = 22;
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SessionUpDown
			// 
			this->SessionUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SessionUpDown->ForeColor = System::Drawing::Color::Black;
			this->SessionUpDown->Location = System::Drawing::Point(501, 17);
			this->SessionUpDown->Margin = System::Windows::Forms::Padding(2);
			this->SessionUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2100, 0, 0, 0});
			this->SessionUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1800, 0, 0, 0});
			this->SessionUpDown->Name = L"SessionUpDown";
			this->SessionUpDown->Size = System::Drawing::Size(65, 24);
			this->SessionUpDown->TabIndex = 7;
			this->SessionUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1900, 0, 0, 0});
			this->SessionUpDown->Enter += gcnew System::EventHandler(this, &Form1::textBoxRNO_Enter);
			this->SessionUpDown->Leave += gcnew System::EventHandler(this, &Form1::textBoxRNO_Leave);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(427, 14);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 30);
			this->label13->TabIndex = 23;
			this->label13->Text = L"سیشن داخلہ";
			// 
			// ChangeDatabase
			// 
			this->ChangeDatabase->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ChangeDatabase->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ChangeDatabase->Location = System::Drawing::Point(395, 382);
			this->ChangeDatabase->Margin = System::Windows::Forms::Padding(2);
			this->ChangeDatabase->Name = L"ChangeDatabase";
			this->ChangeDatabase->Size = System::Drawing::Size(112, 45);
			this->ChangeDatabase->TabIndex = 14;
			this->ChangeDatabase->Text = L"ریفرنس فائل";
			this->ChangeDatabase->UseVisualStyleBackColor = true;
			this->ChangeDatabase->Click += gcnew System::EventHandler(this, &Form1::ChangeReferDatabase_Click);
			// 
			// dataReference
			// 
			this->dataReference->AutoSize = true;
			this->dataReference->Enabled = false;
			this->dataReference->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dataReference->Location = System::Drawing::Point(567, 410);
			this->dataReference->Name = L"dataReference";
			this->dataReference->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataReference->Size = System::Drawing::Size(0, 25);
			this->dataReference->TabIndex = 29;
			this->dataReference->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// usingConfigFile
			// 
			this->usingConfigFile->Enabled = false;
			this->usingConfigFile->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->usingConfigFile->Location = System::Drawing::Point(15, 410);
			this->usingConfigFile->Name = L"usingConfigFile";
			this->usingConfigFile->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->usingConfigFile->Size = System::Drawing::Size(100, 25);
			this->usingConfigFile->TabIndex = 28;
			this->usingConfigFile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// adOnlyCheckBox
			// 
			this->adOnlyCheckBox->AutoSize = true;
			this->adOnlyCheckBox->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->adOnlyCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->adOnlyCheckBox->Location = System::Drawing::Point(395, 167);
			this->adOnlyCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->adOnlyCheckBox->Name = L"adOnlyCheckBox";
			this->adOnlyCheckBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->adOnlyCheckBox->Size = System::Drawing::Size(118, 34);
			this->adOnlyCheckBox->TabIndex = 30;
			this->adOnlyCheckBox->Text = L" صرف داخل کریں";
			this->adOnlyCheckBox->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->adOnlyCheckBox->UseVisualStyleBackColor = true;
			this->adOnlyCheckBox->CheckedChanged += gcnew System::EventHandler(this, &Form1::adOnlyCheckBox_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(670, 438);
			this->Controls->Add(this->adOnlyCheckBox);
			this->Controls->Add(this->usingConfigFile);
			this->Controls->Add(this->dataReference);
			this->Controls->Add(this->ChangeDatabase);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->SessionUpDown);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->textBoxRNO);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->DOE);
			this->Controls->Add(this->ComboBoxCaste);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->ComboBoxOccupation);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->passCheckBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->ExClassUpDown);
			this->Controls->Add(this->InClassUpDown);
			this->Controls->Add(this->UpDown);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->DOB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->DOA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ComboBoxVillage);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxFather);
			this->Controls->Add(this->textBoxName);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;
			this->Text = L"اندراج سکول داخلہ ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ExClassUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->InClassUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SessionUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	int counter;
	array<int>^ data;
	Admission^ m_data;
	array<ArrayList^>^ lists;

	Form1(System::Windows::Forms::FormClosingEventHandler^ evh, array<ArrayList^>^ _lists) 
	{
		InitializeComponent();
		//
		// TODO: Add the constructor code here
		//
		ChangeCulture(L"ur-PK");
		CenterToScreen();
		BringToFront();		

		this->FormClosing += evh;
		lists = _lists;
		rdb = nullptr;
	}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		m_data = gcnew Admission;
		m_data->student = gcnew Student;

		UpDown->Minimum = 0;
		UpDown->Maximum = 1024;
		data = gcnew array<int>(1024+1);
		counter = 0;

		if(lists[4]->Count > 0) Populate(ComboBoxCaste, lists[4]);
		if(lists[5]->Count > 0) Populate(ComboBoxOccupation, lists[5]);				 
		if(lists[6]->Count > 0) Populate(ComboBoxVillage, lists[6]);

		mdb = gcnew Caccdb(databaseFilename);
		if(!mdb->connectionOk) MessageBox::Show(L"Database loading failure!!!", L"Ooops");
		else {
			DataTable^ table = mdb->DatabaseTest(mdb->Count);
			LoadDatabase(table);
			usingConfigFile->Text = databaseFilename + L" سکول";
		}
	}

	private: System::Void Next_Click(System::Object^  sender, System::EventArgs^  e) {
		int serial = 0;

		if(String::IsNullOrEmpty(textBoxName->Text) ||
			String::IsNullOrEmpty(textBoxFather->Text)) {
				MessageBox::Show(L"طالب علم کا نام اور والد کا نام لکھیں؟", L"دیکھئے");
				return ;
		}

		try {
			serial = Convert::ToInt32(textBoxRNO->Text);
		}
		catch(ArgumentNullException^ ) {
			MessageBox::Show(L"سلسلہ نمبر دینا ضروری ہے؟", L"دیکھئے");
		}
		catch(FormatException^ ) {
			MessageBox::Show(L"سلسلہ نمبر انگریزی ہندسوں میں لکھیں؟", L"دیکھئے");
		}
		
		Byte class1 = Convert::ToByte(InClassUpDown->Value);
		Byte class2 = Convert::ToByte(ExClassUpDown->Value);
		if(class1 > class2) {
			MessageBox::Show(L"سکول چھوڑنے والی کلاس، سکول میں داخلے والی کلاس سے بڑی یا برابر ہونی چاہیے؟", L"دیکھئے");
			return ;
		}

		UInt16 session = Convert::ToUInt16(SessionUpDown->Value);
		DateTime^ DOW = DateTime::Now; // Day of Week (today)
		if( Value2Days(DOB->Value) <= Value2Days(DOA->Value)-3*365 && 
			Value2Days(DOA->Value) <= Value2Days(DOE->Value)-(class2-class1-1)*365 &&
			Value2Days(DOE->Value) <= Value2Days(DOW)) {

			m_data->sro    = serial;

			m_data->student->name  = textBoxName->Text;
			m_data->student->fname = textBoxFather->Text;
			m_data->student->DOB   = DOB->Value;

			m_data->DOA    = DOA->Value;
			m_data->DOE    = DOE->Value;

			// Id Structure
			if(ComboBoxCaste->SelectedIndex == -1) ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->IndexOf(ComboBoxCaste->Text);
			if(ComboBoxVillage->SelectedIndex == -1) ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->IndexOf(ComboBoxVillage->Text);
			if(ComboBoxOccupation->SelectedIndex == -1) ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->IndexOf(ComboBoxOccupation->Text);

			m_data->student->caste     = ComboBoxCaste->SelectedIndex;
			m_data->student->village   = ComboBoxVillage->SelectedIndex;
			m_data->student->occupation= ComboBoxOccupation->SelectedIndex;

			m_data->class1  = class1;
			m_data->class2  = class2;
			m_data->session = session;
			m_data->pass    = passCheckBox->Checked ? 1 : 2;

			DataTable^ table = mdb->DatabaseTest(m_data->sro);
			if(table->Rows->Count > 0) {
				MessageBox::Show(L"یہ سلسلہ نمبر پہلے سے موجود ہے", L"دیکھئے"); return ;
			}

			DataTable^ table1 = mdb->DatabaseTableNames(m_data->student);
			if(table1->Rows->Count > 0) {
				System::Windows::Forms::DialogResult result = MyQueryMessageData(table1);
				if(result != System::Windows::Forms::DialogResult::OK) return ;
			}

			AddData();
			data[counter++] = m_data->sro;
			UpDown->Value = counter;

			// Empty inputs boxes
			textBoxName->Text = "";
			textBoxFather->Text = "";
			passCheckBox->Checked = false;
			textBoxRNO->ForeColor = System::Drawing::Color::LightGray;
		}
		else {
			MessageBox::Show(L"دی گئی تاریخیں آپس میں مطابقت نہیں رکھتیں؟", L"دیکھئے");
		}
	}

	void AddData(void) {
		int serNo = mdb->RecordCount(L"طلبا") + 1; // next number
		DataTable^ table = mdb->DatabaseTableNamesEtc( m_data->student, 
								  ComboBoxCaste->Items[m_data->student->caste]->ToString(), 
								ComboBoxVillage->Items[m_data->student->village]->ToString());
		if(table->Rows->Count > 0) {
			serNo = Convert::ToInt32(table->Rows[0][L"نمبر"]);
		}
		else mdb->DatabaseTableInsert(L"طلبا", SetStudentData(serNo));
//		String^ test = SetAdmissionData(serNo);
		mdb->DatabaseTableInsert(L"داخلہ", SetAdmissionData(serNo)); // serNo is used as reference
	}
public:
	String^ SetStudentData(int sro) {
		StringBuilder^ sb = gcnew StringBuilder();
		sb->Append(sro.ToString()                                                  + ", '");
		sb->Append(m_data->student->name                                           + "','");
		sb->Append(m_data->student->fname                                          + "',#");
		sb->Append(m_data->student->DOB->ToString("d", gcnew CultureInfo(L"en-US"))+ "#,'");
		sb->Append(ComboBoxCaste->Items[m_data->student->caste]                    + "','");
		sb->Append(ComboBoxOccupation->Items[m_data->student->occupation]          + "','");
		sb->Append(ComboBoxVillage->Items[m_data->student->village]                + "'");

		return sb->ToString();
	}

	String^ SetAdmissionData(int reference) {
		StringBuilder^ sb = gcnew StringBuilder();
		sb->Append(m_data->sro.ToString()                                 + ", ");
		sb->Append(m_data->session.ToString()                             + ", ");
		sb->Append(m_data->class1.ToString()                              + ",#");
		sb->Append(m_data->DOA->ToString("d", gcnew CultureInfo(L"en-US"))+ "#,");
		sb->Append(m_data->class2.ToString()                              + ",#");
		sb->Append(m_data->DOE->ToString("d", gcnew CultureInfo(L"en-US"))+ "#,");
		sb->Append(m_data->pass.ToString()                                + ",");
		sb->Append(reference.ToString());

		return sb->ToString();
	}

private: System::Void UpDown_Click(System::Object^  sender, System::EventArgs^  e) {
		int count = Convert::ToInt32(UpDown->Value);
		if(count >= counter) { UpDown->Value = counter; return ; }

		DataTable^ table = mdb->DatabaseTest(data[count]);
		if(table->Rows->Count > 0) SetFormData(0, table);
	}

public:	void SetFormData(int opt, DataTable^ table)	{
		if(opt) textBoxRNO->Text = table->Rows[0][L"داخلہ.نمبر"]->ToString();
		textBoxName->Text   = table->Rows[0][L"نام"]->ToString();
		textBoxFather->Text = table->Rows[0][L"ولد"]->ToString();

		if(opt) InClassUpDown->Value = Convert::ToByte(table->Rows[0][L"جماعت"]);
		if(opt) ExClassUpDown->Value = Convert::ToByte(table->Rows[0][L"تاجماعت"]);
		if(opt) SessionUpDown->Value =Convert::ToInt16(table->Rows[0][L"سال"]);
		if(opt) passCheckBox->Checked= Convert::ToByte(table->Rows[0][L"کیفیت"]) ? true : false;

		if(opt) DOA->Value = Convert::ToDateTime(table->Rows[0][L"تاریخ"]);
		DOB->Value = Convert::ToDateTime(table->Rows[0][L"پیدائش"]);
		if(opt) DOE->Value = Convert::ToDateTime(table->Rows[0][L"تاتاریخ"]);

		ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->IndexOf(table->Rows[0][L"پیشہ"]->ToString());
		ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->IndexOf(table->Rows[0][L"پتہ"]->ToString());
		ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->IndexOf(table->Rows[0][L"ذات"]->ToString());

		// If the name is not present in the pre-defined lists then add before displaying it
		if( ComboBoxOccupation->SelectedIndex < 0) {
			ComboBoxOccupation->Items->Insert(ComboBoxOccupation->Items->Count-1, table->Rows[0][L"پیشہ"]->ToString());
			ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->Count-2;
		}
		if( ComboBoxVillage->SelectedIndex < 0) {
			ComboBoxVillage->Items->Insert(ComboBoxVillage->Items->Count-1, table->Rows[0][L"پتہ"]->ToString());
			ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->Count-2;
		}
		if( ComboBoxCaste->SelectedIndex < 0) {
			ComboBoxCaste->Items->Insert(ComboBoxCaste->Items->Count-1, table->Rows[0][L"ذات"]->ToString());
			ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->Count-2;
		}
	}

	int Value2Days(DateTime^ firstDate)	{
		array<short>^ DaysInMonth = gcnew array<short>(11) {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
		int lYear  = firstDate->Year-1;
		int lDays  = lYear*365 + lYear/4 - lYear/100 + lYear/400;
		if( firstDate->Month > 1) lDays += DaysInMonth[firstDate->Month-2];
		lDays += firstDate->Day;

		return lDays;
	}
public:
	System::Windows::Forms::DialogResult MyQueryMessageData(DataTable^ table) {
		Display^ display = gcnew Display();
		String^ name = table->Rows[0][L"نام"]->ToString();
		String^ fame = table->Rows[0][L"ولد"]->ToString();
		display->label1->Text = String::Format(L"{0} ولد {1} نام کے {2} ریکارڈز موجود ہیں۔ پھر بھی یہ ریکارڈ درج کریں؟", name, fame, table->Rows->Count);
		display->table = table;

		return display->ShowDialog();
	}
	
	Finds^ لفظ;
private: System::Void ComboBoxOccupation_DropDownClosed(System::Object^  sender, System::EventArgs^  e) {
		if(ComboBoxOccupation->SelectedIndex == ComboBoxOccupation->Items->Count-1 && !isFindOpen) {
			System::EventHandler^ h1 = gcnew System::EventHandler(this, &Form1::AddOccupation);
			System::EventHandler^ h2 = gcnew System::EventHandler(this, &Form1::FindCloseO);
			array<System::EventHandler^>^ handlers = gcnew array<System::EventHandler^>(2){h1, h2};
			isFindOpen = true;

			لفظ = gcnew Finds(handlers);
			لفظ->label1->Text = L"پیشہ";
			لفظ->Show();
		}
	}
private: System::Void ComboBoxCaste_DropDownClosed(System::Object^  sender, System::EventArgs^  e) {
		if(ComboBoxCaste->SelectedIndex == ComboBoxCaste->Items->Count-1 && !isFindOpen) {
			System::EventHandler^ h1 = gcnew System::EventHandler(this, &Form1::AddCaste);
			System::EventHandler^ h2 = gcnew System::EventHandler(this, &Form1::FindCloseC);
			array<System::EventHandler^>^ handlers = gcnew array<System::EventHandler^>(2){h1, h2};
			isFindOpen = true;

			لفظ = gcnew Finds(handlers);
			لفظ->label1->Text = L"ذات/برادری";
			لفظ->Show();
		}
	}
private: System::Void ComboBoxVillage_DropDownClosed(System::Object^  sender, System::EventArgs^  e) {
		if(ComboBoxVillage->SelectedIndex == ComboBoxVillage->Items->Count-1 && !isFindOpen) {
			System::EventHandler^ h1 = gcnew System::EventHandler(this, &Form1::AddVillage);
			System::EventHandler^ h2 = gcnew System::EventHandler(this, &Form1::FindCloseV);
			array<System::EventHandler^>^ handlers = gcnew array<System::EventHandler^>(2){h1, h2};
			isFindOpen = true;

			لفظ = gcnew Finds(handlers);
			لفظ->label1->Text = L"گا‌ؤں";
			لفظ->Show();
		}
	}
public:
void AddOccupation(System::Object^ sender, System::EventArgs^ e) {
		String^ strFind = لفظ->StringToFind;
		if(strFind->Trim()->Length==0) {
			MessageBox::Show(L"پہلے مطلوبہ لفظ دئیے ہوئے خانے میں لکھیں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
			return ;
		}

		int index = 0;
		if((index=ComboBoxOccupation->Items->IndexOf(strFind)) < 0) {
			ComboBoxOccupation->Items->Insert(ComboBoxOccupation->Items->Count-1, strFind);
			ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->Count-2;
		}
		else {
			ComboBoxOccupation->SelectedIndex = index;
			MessageBox::Show(String::Format(L"لفظ {0}" L" پہلے سے موجود ہے ", strFind), L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
		}
		isFindOpen = false;
		لفظ->Close();
	}
void AddCaste(System::Object^ sender, System::EventArgs^ e) {
		String^ strFind = لفظ->StringToFind;
		if(strFind->Trim()->Length==0) {
			MessageBox::Show(L"پہلے مطلوبہ لفظ دئیے ہوئے خانے میں لکھیں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
			return ;
		}

		int index = 0;
		if((index=ComboBoxCaste->Items->IndexOf(strFind)) < 0) {
			ComboBoxCaste->Items->Insert(ComboBoxCaste->Items->Count-1, strFind);
			ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->Count-2;
		}
		else {
			ComboBoxCaste->SelectedIndex = index;
			MessageBox::Show(String::Format(L"لفظ {0}" L" پہلے سے موجود ہے ", strFind), L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
		}
		isFindOpen = false;
		لفظ->Close();
	}
void AddVillage(System::Object^ sender, System::EventArgs^ e) {
		String^ strFind = لفظ->StringToFind;
		if(strFind->Trim()->Length==0) {
			MessageBox::Show(L"پہلے مطلوبہ لفظ دئیے ہوئے خانے میں لکھیں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
			return ;
		}

		int index = 0;
		if((index=ComboBoxVillage->Items->IndexOf(strFind)) < 0) {
			ComboBoxVillage->Items->Insert(ComboBoxVillage->Items->Count-1, strFind);
			ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->Count-2;
		}
		else {
			ComboBoxVillage->SelectedIndex = index;
			MessageBox::Show(String::Format(L"لفظ {0}" L" پہلے سے موجود ہے ", strFind), L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
		}
		isFindOpen = false;
		لفظ->Close();
	}

	void FindCloseO(System::Object^ sender, System::EventArgs^ e) {
		if(ComboBoxOccupation->Items->Count > 1) 
			ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->Count-2;
		isFindOpen = false;
		لفظ->Close();
	}

	void FindCloseV(System::Object^ sender, System::EventArgs^ e) {
		if(ComboBoxVillage->Items->Count > 1)
			ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->Count-2;
		isFindOpen = false;
		لفظ->Close();
	}

	void FindCloseC(System::Object^ sender, System::EventArgs^ e) {
		if(ComboBoxCaste->Items->Count > 1)
			ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->Count-2;
		isFindOpen = false;
		لفظ->Close();
	}

public:
	int ChangeCulture(String^ language) {
		Thread::CurrentThread->CurrentCulture = gcnew CultureInfo(language);
		InputLanguage^ lang = InputLanguage::FromCulture(Thread::CurrentThread->CurrentCulture);
		if(InputLanguage::InstalledInputLanguages->IndexOf(lang) == -1) throw gcnew ArgumentOutOfRangeException();
		InputLanguage::CurrentInputLanguage = lang;

		return 0;
	}

private: System::Void textBoxRNO_Enter(System::Object^  sender, System::EventArgs^  e) {
		ChangeCulture(L"en-US");
		textBoxRNO->ForeColor = System::Drawing::Color::Black;

	}
private: System::Void textBoxRNO_Leave(System::Object^  sender, System::EventArgs^  e) {
		ChangeCulture(L"ur-PK");
	}
private: System::Void textBoxRNO_Leave_1(System::Object^  sender, System::EventArgs^  e) {
		ChangeCulture(L"ur-PK");

		try {
			int serial = Convert::ToInt32(textBoxRNO->Text);						
			DataTable^ table = mdb->DatabaseTest(serial);
			LoadDatabase(table);
		}
		catch(ArgumentNullException^ ) {
//			MessageBox::Show(L"سلسلہ نمبر دینا ضروری ہے؟", L"دیکھئے");
		}
		catch(FormatException^ ) {
//			MessageBox::Show(L"سلسلہ نمبر انگریزی ہندسوں میں لکھیں؟", L"دیکھئے");
		}
	}
private: System::Void ChangeReferDatabase_Click(System::Object^  sender, System::EventArgs^  e) {
		this->openFile->InitialDirectory = Environment::CurrentDirectory + L"\\database";
		this->openFile->Filter = L"اردو فائلیں" L"(*." L"accdb" L" )|*." L"accdb" L"|ہر طرح کی فائلیں (*.*)|*.*";
		this->openFile->FilterIndex = 1;

		if(this->openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			referenceFilename = this->openFile->SafeFileName;
					
			rdb = gcnew Caccdb(referenceFilename->Remove(referenceFilename->IndexOf('.')));
			if(!rdb->connectionOk) {
				MessageBox::Show(L"Reference database loading failure!!!", L"Ooops");
				dataReference->Text = L"";
			}
			else { 
				dataReference->Text = referenceFilename->Remove(referenceFilename->IndexOf(".")) + L" سکول"; 
			}
		}	
	}
public:
	String^ databaseFilename;
	String^ referenceFilename;
	int LoadDatabase(DataTable^ table) {

		if(table->Rows->Count > 0) SetFormData(1, table);
		else { // Empty inputs boxes
//			textBoxRNO->Text = "";
			textBoxRNO->ForeColor = System::Drawing::Color::LightGray;
			textBoxName->Text = "";
			textBoxFather->Text = "";

			//ComboBoxCaste->SelectedIndex = -1;
			//ComboBoxVillage->SelectedIndex = -1;
			//ComboBoxOccupation->SelectedIndex= -1;

			InClassUpDown->Value = iSection > 0 ? (iSection > 1 ? 9 : 6) : 1;
			ExClassUpDown->Value = iSection > 0 ? (iSection > 1 ?10 : 8) : 5;
			//SessionUpDown->Value = iSection > 0 ? (iSection > 1 ? 1 : 1) : 20;
			passCheckBox->Checked = false;

			//DOA->Value = DateTime::Now;
			DOB->Value = DateTime::Now;
			//DOE->Value = DateTime::Now;
		}
		
		return 0;
	}

	int Populate(ComboBox^ object, ArrayList^ list)	{
		list->Sort();
		object->Items->Clear();
		for(int i=0; i<list->Count; i++) {
			object->Items->Add(list[i]);
		}
		object->Items->Add(L"؟؟؟");

		return object->Items->Count;
	}

private: System::Void ContextMenuItem_Clicked(System::Object^  sender, System::EventArgs^  e) {
		if(iSelection < 30) {
			ToolStripMenuItem^ item = (ToolStripMenuItem ^)sender;
			int index = Convert::ToInt32(item->Text->Remove(item->Text->IndexOf(L".")));
			DataTable^ table = rdb->DatabaseQuery(gcnew String(L"select * from طلبا where نمبر=" + index.ToString()));
			if(table->Rows->Count > 0) SetFormData(0, table);
		}
		else {
			MenuItem^ item = (MenuItem ^)sender;
			int index = Convert::ToInt32(item->Text->Remove(item->Text->IndexOf(L".")));
			DataTable^ table = rdb->DatabaseQuery(gcnew String(L"select * from طلبا where نمبر=" + index.ToString()));
			if(table->Rows->Count > 0) SetFormData(0, table);
		}
	}

private: System::Void textBoxName_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		textBoxName->ContextMenuStrip = nullptr;
		if(e->Button == System::Windows::Forms::MouseButtons::Right) {
			try {
				if(rdb != nullptr && rdb->connectionOk) {
				if(!String::IsNullOrEmpty(textBoxName->Text)) {
					iSelection = -1;
					String^ cmd = gcnew String(L"select نام,ولد,ذات,پتہ,نمبر from طلبا where نام like '%" + textBoxName->Text + L"%' order by نمبر;");
					DataTable^ table = rdb->DatabaseQuery(cmd);
					if(table->Rows->Count > 0) {
						List<String^>^ items = gcnew List<String^>();
						System::Windows::Forms::ContextMenu^ menu = gcnew System::Windows::Forms::ContextMenu();
						menu->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
						System::Windows::Forms::ContextMenuStrip^ urdu = gcnew System::Windows::Forms::ContextMenuStrip();
						urdu->ForeColor = System::Drawing::Color::Navy;
						urdu->BackColor = label1->BackColor;
						urdu->Font = label1->Font;
						
						iSelection = table->Rows->Count;
						for(int i=iSelection-1; i>-1; --i) {
							String^ qdName = table->Rows[i][L"نام"]->ToString() + L" ولد " + table->Rows[i][L"ولد"]->ToString() + L" ،" + table->Rows[i][L"ذات"]->ToString() + L" ،" + table->Rows[i][L"پتہ"]->ToString();
							if(items->IndexOf(qdName) < 0) {
								items->Add(qdName);
								String^ Name = qdName->Insert(0, table->Rows[i][L"نمبر"]->ToString() + L". ");
								if(iSelection < 30) {
									ToolStripMenuItem^ item = gcnew ToolStripMenuItem(Name, nullptr, gcnew System::EventHandler(this, &Form1::ContextMenuItem_Clicked));
									urdu->Items->Add(item);
								}
								else {
									MenuItem^ item = gcnew MenuItem(Name, gcnew System::EventHandler(this, &Form1::ContextMenuItem_Clicked));
									menu->MenuItems->Add(item);
								}
							}
						}

						if(iSelection < 30) textBoxName->ContextMenuStrip = urdu;
						else menu->Show(textBoxName, System::Drawing::Point(e->X, e->Y));
					}
				}
				else MessageBox::Show(L"پہلے نام تو لکھیں۔", L"‎جناب عالی");
				}
				else MessageBox::Show(L"کوئی ریفرینس سیٹ نہیں کیا ہوا۔", L"‎جناب عالی");
			}
			catch(Exception ^e) {
				MessageBox::Show(e->Message, "Error");
			}
		}
		else {
			if(e->Button == System::Windows::Forms::MouseButtons::Left) {
				textBoxRNO->ForeColor = System::Drawing::Color::Black;
				try {
					if(!String::IsNullOrEmpty(textBoxName->Text) && textBoxName->Text->Length > 1) {
						DataTable^ table = mdb->DatabaseTableFieldValue(L"طلبا", L"نام", textBoxName->Text);
						if(table->Rows->Count < 1) table = mdb->DatabaseTableFieldValue(L"طلبا", L"نام", L"% "+textBoxName->Text);
						System::Windows::Forms::ContextMenuStrip^ urdu = gcnew System::Windows::Forms::ContextMenuStrip();
						urdu->ForeColor = System::Drawing::Color::Navy;
						urdu->BackColor = label1->BackColor;
						urdu->Font = label1->Font;

						if(table->Rows->Count > 0) {
							int iUntil = table->Rows->Count > 50 ? 50 : table->Rows->Count;
							for(int i=0; i<iUntil; ++i) {
								String^ Name = table->Rows[i][L"نام"]->ToString();
								ToolStripMenuItem^ item = gcnew ToolStripMenuItem(Name, nullptr, gcnew System::EventHandler(this, &Form1::textBoxName_Updated));
								urdu->Items->Add(item);
							}

							urdu->Show(this, textBoxName->Location + System::Drawing::Size(0, textBoxName->Size.Height));
						}
					}
				}
				catch(Exception ^e) {
					MessageBox::Show(e->Message, "Error");
				}
			}
		}
	}
private: System::Void textBoxFather_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	try {
		if(!String::IsNullOrEmpty(textBoxFather->Text) && textBoxFather->Text->Length > 1) {
			DataTable^ table = mdb->DatabaseTableFieldValue(L"طلبا", L"ولد", textBoxFather->Text);
			if(table->Rows->Count < 1) table = mdb->DatabaseTableFieldValue(L"طلبا", L"ولد", L"% "+textBoxFather->Text);			
			System::Windows::Forms::ContextMenuStrip^ urdu = gcnew System::Windows::Forms::ContextMenuStrip();
			urdu->ForeColor = System::Drawing::Color::Navy;
			urdu->BackColor = label1->BackColor;
			urdu->Font = label1->Font;
			
			if(table->Rows->Count > 0) {
				int iUntil = table->Rows->Count > 50 ? 50 : table->Rows->Count;
				for(int i=0; i<iUntil; ++i) {
					String^ Name = table->Rows[i][L"ولد"]->ToString();
					ToolStripMenuItem^ item = gcnew ToolStripMenuItem(Name, nullptr, gcnew System::EventHandler(this, &Form1::textBoxFather_Updated));
					urdu->Items->Add(item);
				}
				urdu->Show(this, textBoxFather->Location + System::Drawing::Size(0, textBoxFather->Size.Height));
			}
		}
	}
	catch(Exception ^) {
//		MessageBox::Show(e->Message, "Error");
	}
}

public:
	int iSection;
	int iSelection; // used in context menu
private: System::Void ComboBoxOccupation_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
		StringFormat^ format = gcnew StringFormat(StringFormatFlags::NoClip | StringFormatFlags::DirectionRightToLeft);
		format->LineAlignment = StringAlignment::Near;
		format->Alignment = StringAlignment::Near;

		ComboBox^ cbox = (ComboBox^)sender;
		e->DrawBackground();
		System::Drawing::Font^ myFont = gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
		e->Graphics->DrawString(cbox->Items[ e->Index ]->ToString(), myFont, System::Drawing::Brushes::Black, 
			RectangleF((float)e->Bounds.X, (float)e->Bounds.Y, (float)e->Bounds.Width, (float)e->Bounds.Height), format);
		e->DrawFocusRectangle();
	}
public:
	bool isFindOpen;
private: System::Void textBoxName_Updated(System::Object^  sender, System::EventArgs^  e) {
		ToolStripMenuItem^ item = (ToolStripMenuItem ^)sender;
		textBoxName->Text = item->Text;
	}
private: System::Void textBoxFather_Updated(System::Object^  sender, System::EventArgs^  e) {
		ToolStripMenuItem^ item = (ToolStripMenuItem ^)sender;
		textBoxFather->Text = item->Text;
	}

private: System::Void adOnlyCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		ExClassUpDown->Enabled = !adOnlyCheckBox->Checked;
		DOE->Enabled           = !adOnlyCheckBox->Checked;
		label8->Enabled        = !adOnlyCheckBox->Checked;
		label11->Enabled       = !adOnlyCheckBox->Checked;
		passCheckBox->Enabled  = !adOnlyCheckBox->Checked;
		if(adOnlyCheckBox->Checked) {
			ExClassUpDown->Value = InClassUpDown->Value;
		}
	}
	Caccdb^ mdb;
	Caccdb^ rdb;
};
}

