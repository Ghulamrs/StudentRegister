#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Promotion
	/// </summary>
	public ref class Promotion : public System::Windows::Forms::Form
	{
	public:
		Promotion(void)
			: whichclass(0)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			CenterToScreen();
			BringToFront();		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Promotion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::Button^  Promote;

	protected: 

	private: System::Windows::Forms::ComboBox^  comboBoxClass;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  show;
	private: System::Windows::Forms::Label^  Msg;
	private: System::Windows::Forms::Button^  RetainClass;
	private: System::Windows::Forms::TextBox^  TotalMarks;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBoxPP;


	private: System::Windows::Forms::Label^  label3;


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
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Promote = (gcnew System::Windows::Forms::Button());
			this->comboBoxClass = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->show = (gcnew System::Windows::Forms::Button());
			this->Msg = (gcnew System::Windows::Forms::Label());
			this->RetainClass = (gcnew System::Windows::Forms::Button());
			this->TotalMarks = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxPP = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(13, 54);
			this->dataGridView->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(590, 541);
			this->dataGridView->TabIndex = 0;
			// 
			// Promote
			// 
			this->Promote->Enabled = false;
			this->Promote->Location = System::Drawing::Point(370, 609);
			this->Promote->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->Promote->Name = L"Promote";
			this->Promote->Size = System::Drawing::Size(110, 41);
			this->Promote->TabIndex = 1;
			this->Promote->Text = L"&پاس کریں";
			this->Promote->UseVisualStyleBackColor = true;
			this->Promote->Click += gcnew System::EventHandler(this, &Promotion::Promote_Click);
			// 
			// comboBoxClass
			// 
			this->comboBoxClass->FormattingEnabled = true;
			this->comboBoxClass->Location = System::Drawing::Point(68, 612);
			this->comboBoxClass->Name = L"comboBoxClass";
			this->comboBoxClass->Size = System::Drawing::Size(83, 38);
			this->comboBoxClass->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 615);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"جماعت";
			// 
			// show
			// 
			this->show->Location = System::Drawing::Point(158, 609);
			this->show->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->show->Name = L"show";
			this->show->Size = System::Drawing::Size(103, 41);
			this->show->TabIndex = 4;
			this->show->Text = L"د&کھائیں";
			this->show->UseVisualStyleBackColor = true;
			this->show->Click += gcnew System::EventHandler(this, &Promotion::show_Click);
			// 
			// Msg
			// 
			this->Msg->AutoSize = true;
			this->Msg->Location = System::Drawing::Point(8, 10);
			this->Msg->Name = L"Msg";
			this->Msg->Size = System::Drawing::Size(0, 30);
			this->Msg->TabIndex = 5;
			// 
			// RetainClass
			// 
			this->RetainClass->DialogResult = System::Windows::Forms::DialogResult::No;
			this->RetainClass->Location = System::Drawing::Point(497, 609);
			this->RetainClass->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->RetainClass->Name = L"RetainClass";
			this->RetainClass->Size = System::Drawing::Size(110, 41);
			this->RetainClass->TabIndex = 6;
			this->RetainClass->Text = L"رول نمبر ملائیں";
			this->RetainClass->UseVisualStyleBackColor = true;
			this->RetainClass->Click += gcnew System::EventHandler(this, &Promotion::RetainClass_Click);
			// 
			// TotalMarks
			// 
			this->TotalMarks->Location = System::Drawing::Point(410, 7);
			this->TotalMarks->Name = L"TotalMarks";
			this->TotalMarks->Size = System::Drawing::Size(50, 37);
			this->TotalMarks->TabIndex = 7;
			this->TotalMarks->Text = L"850";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(356, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 30);
			this->label2->TabIndex = 8;
			this->label2->Text = L"کل نمبر";
			// 
			// comboBoxPP
			// 
			this->comboBoxPP->FormattingEnabled = true;
			this->comboBoxPP->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"33", L"40", L"50", L"60"});
			this->comboBoxPP->Location = System::Drawing::Point(540, 6);
			this->comboBoxPP->Name = L"comboBoxPP";
			this->comboBoxPP->Size = System::Drawing::Size(63, 38);
			this->comboBoxPP->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(478, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 30);
			this->label3->TabIndex = 10;
			this->label3->Text = L"پاس فیصد";
			// 
			// Promotion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 666);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxPP);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TotalMarks);
			this->Controls->Add(this->RetainClass);
			this->Controls->Add(this->Msg);
			this->Controls->Add(this->show);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxClass);
			this->Controls->Add(this->Promote);
			this->Controls->Add(this->dataGridView);
			this->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->Name = L"Promotion";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;
			this->Text = L"کلاس پروموشن";
			this->Load += gcnew System::EventHandler(this, &Promotion::Promotion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	Caccdb^ mdb;
	DataTable^ table;
	ArrayList^ title;
	String^ databaseFilename;
	array<String^>^  classes;
	Promotion(String^ dbName)	{
		classes = gcnew array<String^>(11) {L"جماعت", L"اوّل", L"دوئم", L"سوئم", L"چہارم", L"پنجم", L"ششم", L"ہفتم", L"ہشتم", L"نہم", L"دہم"};
		InitializeComponent();
		//
		//TODO: Add the constructor code here
		//
		CenterToScreen();
		BringToFront();	
		databaseFilename = dbName;

		int j=1, k=5;
		if(dbName->Contains(L"high")) j=9, k=10;
		else if(dbName->Contains(L"middle")) j=6, k=8;		
		for(int i=j; i<=k; i++)	comboBoxClass->Items->Add(classes[i]);
		this->comboBoxClass->SelectedIndex = 0;
		this->comboBoxPP->SelectedIndex = 0;
	}
private: System::Void Promotion_Load(System::Object^  sender, System::EventArgs^  e) {
		array<String^>^ titles = gcnew array<String^>(8) {L"رول نمبر", L"نام", L"والد کا نام", L"برادری", L"گا‌ؤں", L"حاصل کردہ نمبر", L"پاس", L"کیفیت"};
		mdb = gcnew Caccdb(databaseFilename);
		if(!mdb->connectionOk) MessageBox::Show(L"Database loading failure!!!", L"Ooops");
		else {
			title = gcnew ArrayList;
			for(int i=0; i<titles->Length; i++)	title->Add(titles[i]);
		}
	}

private: System::Void show_Click(System::Object^  sender, System::EventArgs^  e) {
		if(databaseFilename->Contains(L"high")) whichclass = this->comboBoxClass->SelectedIndex+9;
		else if(databaseFilename->Contains(L"middle")) whichclass = this->comboBoxClass->SelectedIndex+6;	
		else whichclass = this->comboBoxClass->SelectedIndex+1;
		String^ cmd = "select class.RollNo, StudentName, FathersName, Caste, Address, class.Marks, Passed, class.Status FROM Student INNER JOIN class ON Student.[RNO] = class.[RNO] where Class=" + whichclass.ToString() + L" order by class.RollNo"; //StampCommand(cmd);
		table = mdb->DatabaseQuery(cmd);
		if(table->Rows->Count > 0) UpdateDataViewer(whichclass);
		else {
			MessageBox::Show(L"جماعت " + classes[whichclass] + L" کا کوئی ریکارڈ نہیں ملا۔", L"جناب عالی");
		}
	}
private: System::Void Promote_Click(System::Object^  sender, System::EventArgs^ e) {
		int classn = whichclass + 1;
		
		if(classn > 8) MessageBox::Show(L"جماعت " + classes[whichclass] + L" کو یہاں سے پاس کرنا ممکن نہیں۔", L"جناب عالی");
		else {
			double percent = Convert::ToDouble(comboBoxPP->Items[comboBoxPP->SelectedIndex]);
			int Marks = (int)(percent * Convert::ToDouble(TotalMarks->Text)/100.0);
			String^ cmd = gcnew String(L"update class set Class=" + classn.ToString() + L",Status=0 where (Status=1 and Class=" + whichclass.ToString() + L" and Marks>" + Marks.ToString() + ")");
			int res = mdb->DatabaseUpdate(cmd);
			MessageBoxButtons buttons = MessageBoxButtons::OK;
			if(res >= 0) {
				int res1 = SetRollNumbers(0, classn, 0);
				int res2 = SetRollNumbers(res1, classn, 1);
				if(res1 && res2) MessageBox::Show(L"دئیے گئے معیار پر پورا اترنے والے طلباء کو پاس کر دیا گیا ہے۔", L"کامیابی", buttons, MessageBoxIcon::Exclamation);
			}
			else MessageBox::Show(L"طلباء کو پاس نہیں کیا جا سکا۔", L"اوں ہوں", buttons, MessageBoxIcon::Hand);
		}
	}
private: System::Void RetainClass_Click(System::Object^  sender, System::EventArgs^  e) {
	}
public: void UpdateDataViewer(int Class) {
		if( this->table->Rows->Count > 0) {
			this->Msg->Text = L"جماعت " + comboBoxClass->SelectedItem->ToString() + L" کے طلباء کی فہرست مندرجہ ذیل ہے۔";
			this->dataGridView->AutoGenerateColumns = true;
			this->dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView->DataSource = this->table;
			for(int i=0; i<this->dataGridView->Columns->Count; i++)
				if(i < 5) this->dataGridView->Columns[i]->ReadOnly = true;
			for(int k=0; k<this->dataGridView->Columns->Count; k++)
				this->dataGridView->Columns[k]->HeaderCell->Value = title[k];
			Promote->Enabled = true;
		}
	}

	unsigned char whichclass;
	int SetRollNumbers(int enroll, int classn, int status)
	{
		int res = 0;
		int rollNo = enroll + 1;

		String^ cmd = gcnew String(L"select * from class where (Status=" + status.ToString() + L" and Class=" + classn.ToString() + L") order by RollNo");
		DataTable^ table = mdb->DatabaseQuery(cmd);
		if(table->Rows->Count > 0) {
			for(int i=0; i<table->Rows->Count; i++, rollNo++) {
				cmd = gcnew String(L"update class set RollNo=" + rollNo.ToString() + L",Status=0 where RNO=" + table->Rows[i]["RNO"]);
				res += mdb->DatabaseUpdate(cmd);
			}
		}

		return table->Rows->Count;
	}
};
}
