#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Windows::Forms::DataVisualization;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Finds
	/// </summary>
	public ref class AddItem : public System::Windows::Forms::Form
	{
	public:
		AddItem(void)
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
		~AddItem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Clos;
	protected: 


	protected: 

	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  Find;
	public: System::Windows::Forms::ComboBox^  ComboBoxField;
	public: System::Windows::Forms::DataGridView^  dataViewer;

	public: System::Windows::Forms::Label^  label2;


	public: System::Windows::Forms::GroupBox^  groupBox1;
    public: System::Windows::Forms::Button^  Update;
	public: System::Windows::Forms::ComboBox^  comboBoxWord;
	private: System::Windows::Forms::TextBox^  textBox;
	public: 
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Button^  PrintPlease;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	public: System::Windows::Forms::DateTimePicker^  dateTimePickerInCombo;
	public: System::Windows::Forms::Label^  userFile;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	public: System::Windows::Forms::Button^  Breakup;
	private: System::Windows::Forms::ColorDialog^  PrintColorDialog;
	public: 
	private: 
	public: 
	public: 

	public: 

	public: 
	private: 

	public: 
	private: 
























	public: 

	private: 


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->Clos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Find = (gcnew System::Windows::Forms::Button());
			this->ComboBoxField = (gcnew System::Windows::Forms::ComboBox());
			this->dataViewer = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->Update = (gcnew System::Windows::Forms::Button());
			this->comboBoxWord = (gcnew System::Windows::Forms::ComboBox());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->PrintPlease = (gcnew System::Windows::Forms::Button());
			this->dateTimePickerInCombo = (gcnew System::Windows::Forms::DateTimePicker());
			this->userFile = (gcnew System::Windows::Forms::Label());
			this->Breakup = (gcnew System::Windows::Forms::Button());
			this->PrintColorDialog = (gcnew System::Windows::Forms::ColorDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataViewer))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// Clos
			// 
			this->Clos->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Clos->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Clos->Location = System::Drawing::Point(728, 500);
			this->Clos->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->Clos->Name = L"Clos";
			this->Clos->Size = System::Drawing::Size(110, 45);
			this->Clos->TabIndex = 0;
			this->Clos->Text = L"&بند کریں";
			this->Clos->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(183, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 58);
			this->label1->TabIndex = 2;
			this->label1->Text = L"مثالیں";
			// 
			// Find
			// 
			this->Find->Enabled = false;
			this->Find->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Find->ForeColor = System::Drawing::Color::Green;
			this->Find->Location = System::Drawing::Point(17, 500);
			this->Find->Margin = System::Windows::Forms::Padding(2);
			this->Find->Name = L"Find";
			this->Find->Size = System::Drawing::Size(111, 45);
			this->Find->TabIndex = 3;
			this->Find->Text = L"&معلوم کریں";
			this->Find->UseVisualStyleBackColor = true;
			// 
			// ComboBoxField
			// 
			this->ComboBoxField->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->ComboBoxField->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ComboBoxField->FormattingEnabled = true;
			this->ComboBoxField->Location = System::Drawing::Point(52, 11);
			this->ComboBoxField->Name = L"ComboBoxField";
			this->ComboBoxField->Size = System::Drawing::Size(115, 66);
			this->ComboBoxField->TabIndex = 4;
			this->ComboBoxField->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &AddItem::ComboBoxField_DrawItem);
			this->ComboBoxField->SelectedIndexChanged += gcnew System::EventHandler(this, &AddItem::ComboBoxField_SelectedIndexChanged);
			// 
			// dataViewer
			// 
			this->dataViewer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataViewer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataViewer->Location = System::Drawing::Point(3, 61);
			this->dataViewer->MultiSelect = false;
			this->dataViewer->Name = L"dataViewer";
			this->dataViewer->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->dataViewer->RowTemplate->Height = 33;
			this->dataViewer->Size = System::Drawing::Size(838, 367);
			this->dataViewer->TabIndex = 5;
			this->dataViewer->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddItem::dataViewer_CellContentClick);
			this->dataViewer->CellMouseLeave += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddItem::dataViewer_CellMouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 15);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 58);
			this->label2->TabIndex = 6;
			this->label2->Text = L"کلیہ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart1);
			this->groupBox1->Controls->Add(this->dateTimePicker);
			this->groupBox1->Controls->Add(this->dataViewer);
			this->groupBox1->Location = System::Drawing::Point(12, 51);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->groupBox1->Size = System::Drawing::Size(844, 431);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"براہ کرم کوئی ریکارڈ تبدیل کرتے ہوئے انتہائی احتیاط کریں";
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			chartArea1->Area3DStyle->Enable3D = true;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			legend1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 61);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			series1->LabelForeColor = System::Drawing::SystemColors::ControlText;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			series2->LabelForeColor = System::Drawing::SystemColors::ControlText;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(838, 367);
			this->chart1->TabIndex = 63;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			title1->ForeColor = System::Drawing::Color::Green;
			title1->Name = L"Title1";
			this->chart1->Titles->Add(title1);
			this->chart1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddItem::chart1_MouseDown);
			this->chart1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AddItem::chart1_MouseMove);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->CalendarFont = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker->CalendarForeColor = System::Drawing::Color::Cyan;
			this->dateTimePicker->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker->CalendarTrailingForeColor = System::Drawing::SystemColors::ControlText;
			this->dateTimePicker->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker->Location = System::Drawing::Point(255, 188);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 67);
			this->dateTimePicker->TabIndex = 62;
			this->dateTimePicker->Visible = false;
			// 
			// Update
			// 
			this->Update->Enabled = false;
			this->Update->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Update->ForeColor = System::Drawing::Color::Red;
			this->Update->Location = System::Drawing::Point(144, 500);
			this->Update->Margin = System::Windows::Forms::Padding(2);
			this->Update->Name = L"Update";
			this->Update->Size = System::Drawing::Size(112, 45);
			this->Update->TabIndex = 57;
			this->Update->Text = L"&تبدیل کریں";
			this->Update->UseVisualStyleBackColor = true;
			// 
			// comboBoxWord
			// 
			this->comboBoxWord->DrawMode = System::Windows::Forms::DrawMode::OwnerDrawVariable;
			this->comboBoxWord->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxWord->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBoxWord->FormattingEnabled = true;
			this->comboBoxWord->Location = System::Drawing::Point(244, 11);
			this->comboBoxWord->Name = L"comboBoxWord";
			this->comboBoxWord->Size = System::Drawing::Size(222, 66);
			this->comboBoxWord->TabIndex = 58;
			this->comboBoxWord->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &AddItem::ComboBoxField_DrawItem);
			this->comboBoxWord->SelectedIndexChanged += gcnew System::EventHandler(this, &AddItem::comboBoxWord_SelectedIndexChanged);
			// 
			// textBox
			// 
			this->textBox->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox->Location = System::Drawing::Point(519, 12);
			this->textBox->Margin = System::Windows::Forms::Padding(2);
			this->textBox->Name = L"textBox";
			this->textBox->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox->Size = System::Drawing::Size(210, 67);
			this->textBox->TabIndex = 59;
			this->textBox->Enter += gcnew System::EventHandler(this, &AddItem::textBox_Enter);
			this->textBox->Leave += gcnew System::EventHandler(this, &AddItem::textBox_Leave);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(487, 15);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 58);
			this->label4->TabIndex = 60;
			this->label4->Text = L"لفظ";
			// 
			// PrintPlease
			// 
			this->PrintPlease->Enabled = false;
			this->PrintPlease->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PrintPlease->ForeColor = System::Drawing::Color::Red;
			this->PrintPlease->Location = System::Drawing::Point(595, 500);
			this->PrintPlease->Margin = System::Windows::Forms::Padding(2);
			this->PrintPlease->Name = L"PrintPlease";
			this->PrintPlease->Size = System::Drawing::Size(112, 45);
			this->PrintPlease->TabIndex = 61;
			this->PrintPlease->Text = L"&پرنٹ کریں";
			this->PrintPlease->UseVisualStyleBackColor = true;
			this->PrintPlease->Click += gcnew System::EventHandler(this, &AddItem::PrintPlease_Click);
			this->PrintPlease->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AddItem::PrintPlease_MouseDown);
			// 
			// dateTimePickerInCombo
			// 
			this->dateTimePickerInCombo->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePickerInCombo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePickerInCombo->Location = System::Drawing::Point(277, 509);
			this->dateTimePickerInCombo->Name = L"dateTimePickerInCombo";
			this->dateTimePickerInCombo->Size = System::Drawing::Size(200, 65);
			this->dateTimePickerInCombo->TabIndex = 62;
			this->dateTimePickerInCombo->Visible = false;
			this->dateTimePickerInCombo->MouseEnter += gcnew System::EventHandler(this, &AddItem::dateTimePickerInCombo_MouseEnter);
			this->dateTimePickerInCombo->MouseLeave += gcnew System::EventHandler(this, &AddItem::dateTimePickerInCombo_MouseLeave);
			// 
			// userFile
			// 
			this->userFile->AutoSize = true;
			this->userFile->Enabled = false;
			this->userFile->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->userFile->Location = System::Drawing::Point(776, 17);
			this->userFile->Name = L"userFile";
			this->userFile->Size = System::Drawing::Size(0, 50);
			this->userFile->TabIndex = 63;
			// 
			// Breakup
			// 
			this->Breakup->Enabled = false;
			this->Breakup->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.94764F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Breakup->ForeColor = System::Drawing::Color::Red;
			this->Breakup->Location = System::Drawing::Point(378, 500);
			this->Breakup->Margin = System::Windows::Forms::Padding(2);
			this->Breakup->Name = L"Breakup";
			this->Breakup->Size = System::Drawing::Size(112, 45);
			this->Breakup->TabIndex = 64;
			this->Breakup->Text = L"&گراف";
			this->Breakup->UseVisualStyleBackColor = true;
			// 
			// AddItem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 58);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 563);
			this->Controls->Add(this->Breakup);
			this->Controls->Add(this->userFile);
			this->Controls->Add(this->dateTimePickerInCombo);
			this->Controls->Add(this->PrintPlease);
			this->Controls->Add(this->Update);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->comboBoxWord);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ComboBoxField);
			this->Controls->Add(this->Find);
			this->Controls->Add(this->Clos);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 7, 4, 7);
			this->MinimizeBox = false;
			this->Name = L"AddItem";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L" ریکارڈز ڈھونڈیں";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataViewer))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
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
	int row, column;
	DataTable^ m_table;
	array<ArrayList^>^ m_lists;
	AddItem(array<System::EventHandler^>^ evh, array<ArrayList^>^ _lists) {
		InitializeComponent();

		// defined in MainForm.h file
		this->Find->Click += evh[0];
		this->Clos->Click  += evh[1];
		this->Update->Click += evh[2];
		this->Breakup->Click += evh[3];

		this->chart1->Visible = false;
		this->dataViewer->Visible = true;
		this->printColor = Color::Black;
		
		this->CenterToScreen();
		this->BringToFront();

		m_lists = _lists;
		ComboBoxField->Items->AddRange(m_lists[10]->ToArray()); 
		ComboBoxField->Items->RemoveAt(3);
		ComboBoxField->Items->Insert(3, L"سال");
		ComboBoxField->Items->AddRange(gcnew array<String^>{L"کیفیت", L"سارا داخلہ"});
		ComboBoxField->SelectedIndex = 0;
	}

private: System::Void ComboBoxField_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox->Enabled = true;
		Breakup->Enabled = false;
		comboBoxWord->Enabled = true;

		if(ComboBoxField->SelectedIndex==3) comboBoxWord->DataSource = m_lists[ComboBoxField->SelectedIndex+8];
		else comboBoxWord->DataSource = m_lists[ComboBoxField->SelectedIndex];
		comboBoxWord->SelectedIndex = 0;

		this->Find->Enabled = true;
	}
private: System::Void comboBoxWord_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox->Text = comboBoxWord->SelectedItem->ToString();
	}
	int ChangeCulture(String^ language) {
		Thread::CurrentThread->CurrentCulture = gcnew CultureInfo(language);
		InputLanguage^ lang = InputLanguage::FromCulture(Thread::CurrentThread->CurrentCulture);
		if(InputLanguage::InstalledInputLanguages->IndexOf(lang) == -1) throw gcnew ArgumentOutOfRangeException();
		InputLanguage::CurrentInputLanguage = lang;

		return 0;
	}
private: System::Void textBox_Enter(System::Object^  sender, System::EventArgs^  e) {
		if( ComboBoxField->SelectedIndex==1 || 
			ComboBoxField->SelectedIndex==2 || 
			ComboBoxField->SelectedIndex==6 || 
			ComboBoxField->SelectedIndex==7 || 
			ComboBoxField->SelectedIndex==8) return ;

		ChangeCulture(L"en-US");
	}
private: System::Void textBox_Leave(System::Object^  sender, System::EventArgs^  e) {
		if( ComboBoxField->SelectedIndex==1 || 
			ComboBoxField->SelectedIndex==2 || 
			ComboBoxField->SelectedIndex==6 || 
			ComboBoxField->SelectedIndex==7 || 
			ComboBoxField->SelectedIndex==8) return ;

		ChangeCulture(L"ur-PK");
	}
private: System::Void PrintPlease_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			if(m_table->Rows->Count > 0) {
				Form1View^ dlg = gcnew Form1View();
				dlg->sData->Clear();
				for(int i=0; i<m_table->Rows->Count; i++) {
					if( dataViewer->SelectedRows->Count == 1 && dataViewer->SelectedRows[0]->Index != i) continue;
					dlg->sData->Add(gcnew StudentData(
						Convert::ToInt32(   m_table->Rows[i][L"نمبر"]),
											m_table->Rows[i][L"نام"]->ToString(),
											m_table->Rows[i][L"ولد"]->ToString(),
											m_table->Rows[i][L"ذات"]->ToString(),
											m_table->Rows[i][L"پیشہ"]->ToString(),
											m_table->Rows[i][L"پتہ"]->ToString(),
						Convert::ToDateTime(m_table->Rows[i][L"تاریخ"]),
						Convert::ToDateTime(m_table->Rows[i][L"پیدائش"]),
						Convert::ToDateTime(m_table->Rows[i][L"تاتاریخ"]),
						Convert::ToInt32(   m_table->Rows[i][L"جماعت"]),
						Convert::ToInt32(   m_table->Rows[i][L"تاجماعت"]),
						Convert::ToInt32(   m_table->Rows[i][L"سال"]),
						Convert::ToInt32(   m_table->Rows[i][L"کیفیت"])));
				}
				dlg->printOption = this->dataViewer->SelectedRows->Count == 1 ? 1 : 0;
				dlg->printColor = this->printColor;
				dlg->ShowDialog();
			}
		}
		catch(Exception^ e) {
			MessageBox::Show(e->Message, "Error");
		}
	}
private: System::Void dataViewer_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if(e->RowIndex >= this->dataViewer->RowCount) return ;
		if(e->ColumnIndex == 3 || e->ColumnIndex == 9 || e->ColumnIndex == 11) {
			String^ str = this->dataViewer[e->ColumnIndex, e->RowIndex]->EditedFormattedValue->ToString();
			dateTimePicker->Value = Convert::ToDateTime(str);
			Rectangle^ rect = this->dataViewer->GetCellDisplayRectangle(e->ColumnIndex, e->RowIndex+1, true); rect->Inflate(5,5);
			dateTimePicker->Location = rect->Location;
			dateTimePicker->Size = rect->Size;
			dateTimePicker->Visible = true;
			ChangeCulture(L"en-US");
			row = e->RowIndex;
		}
		else if(e->ColumnIndex < 7) {
//			ChangeCulture(L"ur-PK");
		}
		column = e->ColumnIndex;
	}
private: System::Void dataViewer_CellMouseLeave(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if(dateTimePicker->Visible) {
			ChangeCulture(L"ur-PK");
			dataViewer[column,row]->Value = dateTimePicker->Value;
			dateTimePicker->Visible = false;
		}
		else if(column < 7) {
//			ChangeCulture(L"en-US");
		}
	}
private: System::Void dateTimePickerInCombo_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		ChangeCulture(L"ur-PK");
	}
private: System::Void dateTimePickerInCombo_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		ChangeCulture(L"en-US");
	}

private: System::Void ComboBoxField_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
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
private: System::Void chart1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		//HitTestResult^ result = chart1->HitTest(e->X, e->Y);
		//try {
		//	bool exploded = (chart1->Series[0]->Points[result->PointIndex]->CustomProperties == "Exploded=true") ? true : false;

		//	for each(DataPoint^ point in chart1->Series[0]->Points) {
		//		point->CustomProperties = "";
		//	}

		//	if(exploded) return;
		//	if( result->ChartElementType == ChartElementType::DataPoint) {
		//		DataPoint^ point = chart1->Series[0]->Points[result->PointIndex];
		//		point->CustomProperties = "Exploded = true";
		//	}

		//	if( result->ChartElementType == ChartElementType::LegendItem) {
		//		DataPoint^ point = chart1->Series[0]->Points[result->PointIndex];
		//		point->CustomProperties = "Exploded = true";
		//	}
		//}
		//catch(Exception^ ) {
		//}
	}
private: System::Void chart1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		//HitTestResult^ result = chart1->HitTest(e->X, e->Y);
		//try {
		//	for each(DataPoint^ point in chart1->Series[0]->Points) {
		//		point->BackSecondaryColor = Color::Black;
		//		point->BackHatchStyle = ChartHatchStyle::None;
		//		point->BorderWidth = 1;
		//	}
  //  
		//	if( result->ChartElementType == ChartElementType::DataPoint ||
		//		result->ChartElementType == ChartElementType::LegendItem) {                

		//		DataPoint^ point = chart1->Series[0]->Points[result->PointIndex];
		//		point->BackSecondaryColor = Color::White;
		//		point->BackHatchStyle = ChartHatchStyle::Percent25;
		//		point->BorderWidth = 2;
		//	}
		//}
		//catch(Exception^ ) {
		//}
	}
public:
	void DisplayData(DataTable^ table)	{
		this->m_table = table;
		if( this->m_table->Rows->Count > 0) {
			this->dataViewer->AutoGenerateColumns = true;
			this->dataViewer->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataViewer->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
            this->dataViewer->EditMode = DataGridViewEditMode::EditOnEnter;
			this->dataViewer->DataSource = this->m_table;
            this->dataViewer->Columns[0]->ReadOnly = true;

			this->dataViewer->RowHeadersVisible = true;
			for(int i=1; i<=this->dataViewer->RowCount; i++) 
				this->dataViewer->Rows[i-1]->HeaderCell->Value = i.ToString();

			if(this->ComboBoxField->SelectedIndex > 0) {
				int countRecord  = this->dataViewer->RowCount - 1;
				this->groupBox1->Text = countRecord.ToString() + L" ریکارڈ ملے ہیں۔";
			}
			else if(this->dataViewer->RowCount > 1) 
				this->dataViewer->Rows[0]->Selected = true;

			this->PrintPlease->Enabled = true;
			this->Update->Enabled = true;

//			for(int k=0; k<this->dataViewer->Columns->Count; k++)
//				this->dataViewer->Columns[k]->HeaderCell->Value = this->ComboBoxField->Items[k];
		}
		else {
			this->Update->Enabled = false;
			this->PrintPlease->Enabled = false;
			MessageBox::Show(String::Format(L" {0}" L" سے ملتا ریکارڈ موجود نہیں ہے ", StringToFind), L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void PrintPlease_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if(e->Button == System::Windows::Forms::MouseButtons::Right) {
			PrintColorDialog = gcnew ColorDialog;
			PrintColorDialog->Color = Color::Black;
			if(PrintColorDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				printColor = PrintColorDialog->Color;
			}
		}
	}
public:
	System::Drawing::Color^ printColor;
};
}
