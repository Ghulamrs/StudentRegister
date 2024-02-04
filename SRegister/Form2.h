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
	using namespace System::Threading;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
			: iSection(0)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  usingConfigFile;
	protected: 
	private: System::Windows::Forms::Label^  dataReference;
	private: System::Windows::Forms::Button^  ChangeDatabase;
	private: System::Windows::Forms::OpenFileDialog^  openFile;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::NumericUpDown^  SessionUpDown;
	public: System::Windows::Forms::Label^  Title;
	private: System::Windows::Forms::MaskedTextBox^  textBoxRNO;
	private: System::Windows::Forms::SaveFileDialog^  saveFile;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DateTimePicker^  DOE;
	private: System::Windows::Forms::ComboBox^  ComboBoxCaste;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  ComboBoxOccupation;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::CheckBox^  passCheckBox;
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
	private: System::Windows::Forms::MaskedTextBox^  textBoxRollNumber;
	private: System::Windows::Forms::CheckBox^  checkBoxPassOut;

	protected: 

































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
			this->usingConfigFile = (gcnew System::Windows::Forms::Label());
			this->dataReference = (gcnew System::Windows::Forms::Label());
			this->ChangeDatabase = (gcnew System::Windows::Forms::Button());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SessionUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->textBoxRNO = (gcnew System::Windows::Forms::MaskedTextBox());
			this->saveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->DOE = (gcnew System::Windows::Forms::DateTimePicker());
			this->ComboBoxCaste = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ComboBoxOccupation = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->passCheckBox = (gcnew System::Windows::Forms::CheckBox());
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
			this->textBoxRollNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->checkBoxPassOut = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SessionUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ExClassUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->InClassUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// usingConfigFile
			// 
			this->usingConfigFile->Enabled = false;
			this->usingConfigFile->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->usingConfigFile->Location = System::Drawing::Point(15, 401);
			this->usingConfigFile->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->usingConfigFile->Name = L"usingConfigFile";
			this->usingConfigFile->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->usingConfigFile->Size = System::Drawing::Size(133, 31);
			this->usingConfigFile->TabIndex = 89;
			this->usingConfigFile->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// dataReference
			// 
			this->dataReference->AutoSize = true;
			this->dataReference->Enabled = false;
			this->dataReference->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dataReference->Location = System::Drawing::Point(567, 402);
			this->dataReference->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dataReference->Name = L"dataReference";
			this->dataReference->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dataReference->Size = System::Drawing::Size(0, 25);
			this->dataReference->TabIndex = 88;
			this->dataReference->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
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
			this->ChangeDatabase->TabIndex = 74;
			this->ChangeDatabase->Text = L"پاس ک&ریں";
			this->ChangeDatabase->UseVisualStyleBackColor = true;
			this->ChangeDatabase->Click += gcnew System::EventHandler(this, &Form2::ChangeDatabase_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Enabled = false;
			this->label13->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label13->Location = System::Drawing::Point(427, 14);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 30);
			this->label13->TabIndex = 87;
			this->label13->Text = L"سیشن داخلہ";
			// 
			// SessionUpDown
			// 
			this->SessionUpDown->Enabled = false;
			this->SessionUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->SessionUpDown->ForeColor = System::Drawing::Color::Black;
			this->SessionUpDown->Location = System::Drawing::Point(501, 17);
			this->SessionUpDown->Margin = System::Windows::Forms::Padding(2);
			this->SessionUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->SessionUpDown->Name = L"SessionUpDown";
			this->SessionUpDown->Size = System::Drawing::Size(48, 24);
			this->SessionUpDown->TabIndex = 66;
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
			this->Title->TabIndex = 86;
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->textBoxRNO->TabIndex = 59;
			this->textBoxRNO->ValidatingType = System::Int32::typeid;
			this->textBoxRNO->Enter += gcnew System::EventHandler(this, &Form2::textBoxRNO_Enter);
			this->textBoxRNO->Leave += gcnew System::EventHandler(this, &Form2::textBoxRNO_Leave);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Enabled = false;
			this->label11->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label11->Location = System::Drawing::Point(427, 264);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 30);
			this->label11->TabIndex = 85;
			this->label11->Text = L"تاریخ خارجہ";
			// 
			// DOE
			// 
			this->DOE->CustomFormat = L"dd/MM/yyyy";
			this->DOE->Enabled = false;
			this->DOE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOE->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DOE->Location = System::Drawing::Point(501, 274);
			this->DOE->Margin = System::Windows::Forms::Padding(2);
			this->DOE->Name = L"DOE";
			this->DOE->Size = System::Drawing::Size(130, 23);
			this->DOE->TabIndex = 70;
			// 
			// ComboBoxCaste
			// 
			this->ComboBoxCaste->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ComboBoxCaste->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxCaste->Enabled = false;
			this->ComboBoxCaste->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComboBoxCaste->FormattingEnabled = true;
			this->ComboBoxCaste->Items->AddRange(gcnew cli::array< System::Object^  >(37) {L"آرائیں", L"اعوان", L"امامت", L"بٹ", L"بڑھئی", 
				L"بھٹی", L"پٹھان", L"تارڑ", L"جٹ", L"جھکھڑ", L"جوئیہ", L"چٹھہ", L"چندڑ", L"چیمہ", L"خان", L"درزی", L"راجپوت", L"رحمانی", L"ریاڑ", 
				L"سرگانہ", L"سنار", L"سید", L"شیخ", L"قریشی", L"قصاب", L"کشمیری", L"کمبوہ", L"کندی", L"کھوکھر", L"لوہار", L"ماچھی", L"مسلم شیخ", 
				L"مغل", L"ملک", L"موچی", L"نائی", L"وڑائچ"});
			this->ComboBoxCaste->Location = System::Drawing::Point(91, 271);
			this->ComboBoxCaste->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxCaste->Name = L"ComboBoxCaste";
			this->ComboBoxCaste->Size = System::Drawing::Size(138, 38);
			this->ComboBoxCaste->TabIndex = 64;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label10->Location = System::Drawing::Point(10, 274);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 30);
			this->label10->TabIndex = 84;
			this->label10->Text = L"ذات\\برادری";
			// 
			// ComboBoxOccupation
			// 
			this->ComboBoxOccupation->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->ComboBoxOccupation->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxOccupation->Enabled = false;
			this->ComboBoxOccupation->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComboBoxOccupation->FormattingEnabled = true;
			this->ComboBoxOccupation->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->ComboBoxOccupation->ItemHeight = 30;
			this->ComboBoxOccupation->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"زراعت", L"غیر زراعت"});
			this->ComboBoxOccupation->Location = System::Drawing::Point(91, 221);
			this->ComboBoxOccupation->Margin = System::Windows::Forms::Padding(2);
			this->ComboBoxOccupation->Name = L"ComboBoxOccupation";
			this->ComboBoxOccupation->Size = System::Drawing::Size(92, 36);
			this->ComboBoxOccupation->TabIndex = 63;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Enabled = false;
			this->label9->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label9->Location = System::Drawing::Point(26, 324);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 30);
			this->label9->TabIndex = 83;
			this->label9->Text = L"پتہ یا گا‌ؤں‎‏";
			// 
			// passCheckBox
			// 
			this->passCheckBox->AutoSize = true;
			this->passCheckBox->Enabled = false;
			this->passCheckBox->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->passCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->passCheckBox->Location = System::Drawing::Point(501, 307);
			this->passCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->passCheckBox->Name = L"passCheckBox";
			this->passCheckBox->Size = System::Drawing::Size(65, 34);
			this->passCheckBox->TabIndex = 71;
			this->passCheckBox->Text = L"پاس کیا";
			this->passCheckBox->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->passCheckBox->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Enabled = false;
			this->label8->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label8->Location = System::Drawing::Point(421, 217);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 30);
			this->label8->TabIndex = 82;
			this->label8->Text = L"جماعت خارجہ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label7->Location = System::Drawing::Point(447, 71);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 30);
			this->label7->TabIndex = 81;
			this->label7->Text = L"جماعت";
			// 
			// ExClassUpDown
			// 
			this->ExClassUpDown->Enabled = false;
			this->ExClassUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ExClassUpDown->Location = System::Drawing::Point(501, 229);
			this->ExClassUpDown->Margin = System::Windows::Forms::Padding(2);
			this->ExClassUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10, 0, 0, 0});
			this->ExClassUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->ExClassUpDown->Name = L"ExClassUpDown";
			this->ExClassUpDown->Size = System::Drawing::Size(51, 23);
			this->ExClassUpDown->TabIndex = 69;
			this->ExClassUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
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
			this->InClassUpDown->TabIndex = 67;
			this->InClassUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
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
			this->UpDown->TabIndex = 73;
			this->UpDown->TabStop = false;
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
			this->Next->TabIndex = 72;
			this->Next->Text = L"&آگے";
			this->Next->UseVisualStyleBackColor = true;
			// 
			// DOB
			// 
			this->DOB->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->DOB->CalendarTitleForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->DOB->CustomFormat = L"dd/MM/yyyy";
			this->DOB->Enabled = false;
			this->DOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DOB->Location = System::Drawing::Point(91, 121);
			this->DOB->Margin = System::Windows::Forms::Padding(2);
			this->DOB->Name = L"DOB";
			this->DOB->Size = System::Drawing::Size(130, 23);
			this->DOB->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label6->Location = System::Drawing::Point(13, 117);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 30);
			this->label6->TabIndex = 80;
			this->label6->Text = L"تاریخ پیدائش";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(439, 114);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 30);
			this->label5->TabIndex = 79;
			this->label5->Text = L"رول نمبر";
			// 
			// DOA
			// 
			this->DOA->CustomFormat = L"dd/MM/yyyy";
			this->DOA->Enabled = false;
			this->DOA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.17801F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOA->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->DOA->Location = System::Drawing::Point(501, 121);
			this->DOA->Margin = System::Windows::Forms::Padding(2);
			this->DOA->Name = L"DOA";
			this->DOA->Size = System::Drawing::Size(130, 23);
			this->DOA->TabIndex = 68;
			this->DOA->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Enabled = false;
			this->label4->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(27, 224);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 30);
			this->label4->TabIndex = 78;
			this->label4->Text = L"والد کا پیشہ";
			// 
			// ComboBoxVillage
			// 
			this->ComboBoxVillage->Cursor = System::Windows::Forms::Cursors::Default;
			this->ComboBoxVillage->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxVillage->Enabled = false;
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
			this->ComboBoxVillage->TabIndex = 65;
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
			this->label3->Size = System::Drawing::Size(59, 30);
			this->label3->TabIndex = 77;
			this->label3->Text = L" نمبرسلسلہ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(30, 167);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 30);
			this->label2->TabIndex = 76;
			this->label2->Text = L"والد کا نام";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(13, 66);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 30);
			this->label1->TabIndex = 75;
			this->label1->Text = L"نام طالب علم";
			// 
			// textBoxFather
			// 
			this->textBoxFather->Enabled = false;
			this->textBoxFather->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxFather->Location = System::Drawing::Point(91, 164);
			this->textBoxFather->Margin = System::Windows::Forms::Padding(2);
			this->textBoxFather->MaxLength = 64;
			this->textBoxFather->Name = L"textBoxFather";
			this->textBoxFather->Size = System::Drawing::Size(183, 37);
			this->textBoxFather->TabIndex = 61;
			// 
			// textBoxName
			// 
			this->textBoxName->Enabled = false;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxName->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxName->Location = System::Drawing::Point(91, 64);
			this->textBoxName->Margin = System::Windows::Forms::Padding(2);
			this->textBoxName->MaxLength = 64;
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(183, 37);
			this->textBoxName->TabIndex = 60;
			// 
			// textBoxRollNumber
			// 
			this->textBoxRollNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxRollNumber->Location = System::Drawing::Point(501, 118);
			this->textBoxRollNumber->Margin = System::Windows::Forms::Padding(4);
			this->textBoxRollNumber->Mask = L"000";
			this->textBoxRollNumber->Name = L"textBoxRollNumber";
			this->textBoxRollNumber->PromptChar = ' ';
			this->textBoxRollNumber->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxRollNumber->Size = System::Drawing::Size(34, 24);
			this->textBoxRollNumber->TabIndex = 90;
			// 
			// checkBoxPassOut
			// 
			this->checkBoxPassOut->AutoSize = true;
			this->checkBoxPassOut->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBoxPassOut->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->checkBoxPassOut->Location = System::Drawing::Point(410, 163);
			this->checkBoxPassOut->Name = L"checkBoxPassOut";
			this->checkBoxPassOut->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->checkBoxPassOut->Size = System::Drawing::Size(106, 34);
			this->checkBoxPassOut->TabIndex = 91;
			this->checkBoxPassOut->Text = L"پاس آؤٹ کریں";
			this->checkBoxPassOut->UseVisualStyleBackColor = true;
			this->checkBoxPassOut->CheckedChanged += gcnew System::EventHandler(this, &Form2::checkBoxPassOut_CheckedChanged);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(670, 438);
			this->Controls->Add(this->checkBoxPassOut);
			this->Controls->Add(this->textBoxRollNumber);
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
			this->Name = L"Form2";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;
			this->Text = L"اندراج سکول خارجہ";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->SessionUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ExClassUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->InClassUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->UpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int iSection;
		String^ databaseFilename;
		array<ArrayList^>^ lists;

		Form2(System::Windows::Forms::FormClosingEventHandler^ evh, array<ArrayList^>^ _lists) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ChangeCulture(L"ur-PK");
			CenterToScreen();
			BringToFront();		
			
			this->FormClosing += evh;
			lists = _lists;
		}

		int ChangeCulture(String^ language)	{
			Thread::CurrentThread->CurrentCulture = gcnew CultureInfo(language);
			InputLanguage^ lang = InputLanguage::FromCulture(Thread::CurrentThread->CurrentCulture);
			if(InputLanguage::InstalledInputLanguages->IndexOf(lang) == -1) throw gcnew ArgumentOutOfRangeException();
			InputLanguage::CurrentInputLanguage = lang;

			return 0;
		}
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			mdb = gcnew Caccdb(databaseFilename);
			if(!mdb->connectionOk) MessageBox::Show(L"Database loading failure!!!", L"Ooops");
			else {
				LoadDatabase();
				usingConfigFile->Text = databaseFilename + L" سکول";
			}
			if(lists[6]->Count > 0) Populate(ComboBoxCaste, lists[6]);
			if(lists[7]->Count > 0) Populate(ComboBoxOccupation, lists[7]);				 
			if(lists[8]->Count > 0) Populate(ComboBoxVillage, lists[8]);

			this->DOA->Visible  = false;
			textBoxRollNumber->Visible  = true;	
			ChangeCulture(L"en-US");
		 }

public:
		void SetFormData(int opt, DataTable^ table)	{
			if(opt) textBoxRNO->Text    = table->Rows[0]["RNO"]->ToString();
			textBoxName->Text   = table->Rows[0]["StudentName"]->ToString();
			textBoxFather->Text = table->Rows[0]["FathersName"]->ToString();

			if(opt) InClassUpDown->Value = Convert::ToByte(table->Rows[0]["InClass"]);
			if(opt) ExClassUpDown->Value = Convert::ToByte(table->Rows[0]["ExClass"]);
			if(opt) SessionUpDown->Value = Convert::ToByte(table->Rows[0]["Session"]);
			if(opt) passCheckBox->Checked= Convert::ToByte(table->Rows[0]["Passed"]) ? true : false;

			if(opt) DOA->Value = Convert::ToDateTime(table->Rows[0]["DOA"]);
			DOB->Value = Convert::ToDateTime(table->Rows[0]["DOB"]);
			if(opt) DOE->Value = Convert::ToDateTime(table->Rows[0]["DOE"]);

			ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->IndexOf(table->Rows[0]["Occupation"]->ToString());
			ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->IndexOf(table->Rows[0]["Address"]->ToString());
			ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->IndexOf(table->Rows[0]["Caste"]->ToString());

			// If the name is not present in the pre-defined lists then add before displaying it
			if( ComboBoxOccupation->SelectedIndex < 0) {
				ComboBoxOccupation->Items->Insert(ComboBoxOccupation->Items->Count-1, table->Rows[0]["Occupation"]->ToString());
				ComboBoxOccupation->SelectedIndex = ComboBoxOccupation->Items->Count-2;
			}
			if( ComboBoxVillage->SelectedIndex < 0) {
				ComboBoxVillage->Items->Insert(ComboBoxVillage->Items->Count-1, table->Rows[0]["Address"]->ToString());
				ComboBoxVillage->SelectedIndex = ComboBoxVillage->Items->Count-2;
			}
			if( ComboBoxCaste->SelectedIndex < 0) {
				ComboBoxCaste->Items->Insert(ComboBoxCaste->Items->Count-1, table->Rows[0]["Caste"]->ToString());
				ComboBoxCaste->SelectedIndex = ComboBoxCaste->Items->Count-2;
			}
		}

		int LoadDatabase() {
			DataTable^ table = mdb->DatabaseTest(L"student", mdb->Count);
			if(table->Rows->Count > 0) SetFormData(1, table);
			else { // Empty inputs boxes
				textBoxRNO->Text = "";
				textBoxName->Text = "";
				textBoxFather->Text = "";

				ComboBoxCaste->SelectedIndex = -1;
				ComboBoxVillage->SelectedIndex = -1;
				ComboBoxOccupation->SelectedIndex= -1;

				InClassUpDown->Value = iSection > 0 ? (iSection > 1 ? 9 : 6) : 1;
				ExClassUpDown->Value = iSection > 0 ? (iSection > 1 ?10 : 8) : 5;
				SessionUpDown->Value = iSection > 0 ? (iSection > 1 ? 1 : 1) : 20;
				passCheckBox->Checked = false;

				DOA->Value = DateTime::Now;
				DOB->Value = DateTime::Now;
				DOE->Value = DateTime::Now;
			}
		
			return 1;
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
private: System::Void textBoxRNO_Enter(System::Object^  sender, System::EventArgs^  e) {
			ChangeCulture(L"en-US");
			textBoxRNO->ForeColor = System::Drawing::Color::Black;
		}
private: System::Void textBoxRNO_Leave(System::Object^  sender, System::EventArgs^  e) {
			ChangeCulture(L"ur-PK");

			try {
				int serial = Convert::ToInt32(textBoxRNO->Text);
				DataTable^ table = mdb->DatabaseTest(L"student", serial);
				if(table->Rows->Count > 0) SetFormData(0, table);
			}
			catch(ArgumentNullException^ ) {
	//			MessageBox::Show(L"سلسلہ نمبر دینا ضروری ہے؟", L"دیکھئے");
			}
			catch(FormatException^ ) {
	//			MessageBox::Show(L"سلسلہ نمبر انگریزی ہندسوں میں لکھیں؟", L"دیکھئے");
			}
		}

private: System::Void checkBoxPassOut_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			ExClassUpDown->Enabled = checkBoxPassOut->Checked;
			DOE->Enabled = checkBoxPassOut->Checked;
			passCheckBox->Enabled = checkBoxPassOut->Checked;
			label8->Enabled = checkBoxPassOut->Checked;
			label11->Enabled = checkBoxPassOut->Checked;

			label5->Enabled = !checkBoxPassOut->Checked;
			label7->Enabled = !checkBoxPassOut->Checked;
			InClassUpDown->Enabled = !checkBoxPassOut->Checked;
			textBoxRollNumber->Enabled = !checkBoxPassOut->Checked;
		}

public:	 
	Caccdb^ mdb;
private: System::Void ChangeDatabase_Click(System::Object^  sender, System::EventArgs^  e) {
			 Promotion^ promo = gcnew Promotion(databaseFilename);
			 promo->Show(this);
		 }
};
}
