#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;
	using namespace Microsoft::Reporting::WinForms;

	/// <summary>
	/// Summary for Form1View
	/// </summary>
	public ref class Form1View : public System::Windows::Forms::Form
	{
	public:
		Form1View(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		  printOption = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::Reporting::WinForms::ReportViewer^  reportViewer;
	private: System::Windows::Forms::BindingSource^  bindingSource;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	protected: 

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
			this->components = (gcnew System::ComponentModel::Container());
			Microsoft::Reporting::WinForms::ReportDataSource^  reportDataSource1 = (gcnew Microsoft::Reporting::WinForms::ReportDataSource());
			this->bindingSource = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->reportViewer = (gcnew Microsoft::Reporting::WinForms::ReportViewer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource))->BeginInit();
			this->SuspendLayout();
			// 
			// reportViewer
			// 
			this->reportViewer->Dock = System::Windows::Forms::DockStyle::Fill;
			reportDataSource1->Name = L"DataSet";
			reportDataSource1->Value = this->bindingSource;
			this->reportViewer->LocalReport->DataSources->Add(reportDataSource1);
			this->reportViewer->LocalReport->ReportEmbeddedResource = L"StudentReport.rdlc";
			this->reportViewer->LocalReport->ReportPath = L".\\StudentReport.rdlc";
			this->reportViewer->Location = System::Drawing::Point(0, 0);
			this->reportViewer->Margin = System::Windows::Forms::Padding(1);
			this->reportViewer->Name = L"reportViewer";
			this->reportViewer->PageCountMode = Microsoft::Reporting::WinForms::PageCountMode::Actual;
			this->reportViewer->Size = System::Drawing::Size(1008, 730);
			this->reportViewer->TabIndex = 0;
			// 
			// Form1View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 730);
			this->Controls->Add(this->reportViewer);
			this->Name = L"Form1View";
			this->Text = L"Form1View";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &Form1View::Form1View_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:	 static List<StudentData^>^ sData = gcnew List<StudentData^>();
	private: System::Void Form1View_Load(System::Object^  sender, System::EventArgs^  e) {
				 if(printOption==1) {
					this->reportViewer->LocalReport->ReportEmbeddedResource = L"StudentReciept.rdlc";
					this->reportViewer->LocalReport->ReportPath = L".\\StudentReciept.rdlc";
					this->reportViewer->Size = System::Drawing::Size(768, 1024);
					this->ClientSize = System::Drawing::Size(768, 1024);
				 }
				 else { 
					 this->ps = this->reportViewer->GetPageSettings();
					 this->ps->Landscape = true;
					 this->ps->PaperSize = gcnew System::Drawing::Printing::PaperSize("A4", 827, 1169);
					 this->ps->PaperSize->RawKind = (int)System::Drawing::Printing::PaperKind::A4;
					 Margins^ margins = gcnew Margins(40,10,100,50);
					 this->ps->Margins = margins;
					 this->reportViewer->SetPageSettings(ps);
					 String^ hColor = L"#" + printColor->R.ToString("X2") + printColor->G.ToString("X2") + printColor->B.ToString("X2"); 
					 ReportParameter^ rp = gcnew ReportParameter(L"colorText", hColor);
					 this->reportViewer->LocalReport->SetParameters(rp);
				 }

				 this->bindingSource->DataSource = sData;
				 this->reportViewer->RefreshReport();
			 }
public:
	int printOption;
	PageSettings^ ps;
	System::Drawing::Color^ printColor;
};
}
