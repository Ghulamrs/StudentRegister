#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Windows::Forms::DataVisualization;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	public:
		Display(void)
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
		~Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView;
	public:  System::Windows::Forms::Label^   label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected: 

	protected: 


	protected: 

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView
			// 
			this->dataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView->Location = System::Drawing::Point(11, 15);
			this->dataGridView->Margin = System::Windows::Forms::Padding(2, 6, 2, 6);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->dataGridView->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView->Size = System::Drawing::Size(766, 201);
			this->dataGridView->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(13, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 30);
			this->label1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(577, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"درج کریں";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(685, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"نہ کریں";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Display
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->button2;
			this->ClientSize = System::Drawing::Size(788, 273);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView);
			this->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(2, 6, 2, 6);
			this->Name = L"Display";
			this->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->RightToLeftLayout = true;
			this->Text = L"پہلے سے موجود ریکارڈز";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Display::Display_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		DataTable^ table;

	private: System::Void Display_Load(System::Object^  sender, System::EventArgs^  e) {
		array<String^>^ title = gcnew array<String^>(13){
			L"نمبر",
			L"نام",
			L"والد",
			L"پیدائش",
			L"برادری",
			L"پیشہ",
			L"گا‍‌ؤں"
		};
		if( this->table->Rows->Count > 0) {
			this->dataGridView->AutoGenerateColumns = true;
			this->dataGridView->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView->DataSource = this->table;
			for(int i=0; i<this->dataGridView->Columns->Count; i++)
				this->dataGridView->Columns[i]->ReadOnly = true;
			for(int k=0; k<this->dataGridView->Columns->Count; k++)
				this->dataGridView->Columns[k]->HeaderCell->Value = title[k];
		}
	}
};
}
