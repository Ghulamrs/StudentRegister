
#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Xml;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
			: iSection(-1)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  sectionComboBox;
	private: System::Windows::Forms::Label^   Title;

	private: System::Windows::Forms::Button^  Admissions;
	private: System::Windows::Forms::Button^  Information;
	private: System::Windows::Forms::Button^  Expulsion;
	private: System::Windows::Forms::Label^   label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^   label3;
	private: System::Windows::Forms::Button^  Quit;



	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->sectionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Admissions = (gcnew System::Windows::Forms::Button());
			this->Information = (gcnew System::Windows::Forms::Button());
			this->Expulsion = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Quit = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// sectionComboBox
			// 
			this->sectionComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			resources->ApplyResources(this->sectionComboBox, L"sectionComboBox");
			this->sectionComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sectionComboBox->FormattingEnabled = true;
			this->sectionComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {resources->GetString(L"sectionComboBox.Items"), 
				resources->GetString(L"sectionComboBox.Items1"), resources->GetString(L"sectionComboBox.Items2")});
			this->sectionComboBox->Name = L"sectionComboBox";
			this->sectionComboBox->DrawItem += gcnew System::Windows::Forms::DrawItemEventHandler(this, &MainForm::sectionComboBox_DrawItem);
			this->sectionComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::sectionComboBox_SelectedIndexChanged);
			// 
			// Title
			// 
			resources->ApplyResources(this->Title, L"Title");
			this->Title->ForeColor = System::Drawing::Color::Green;
			this->Title->Name = L"Title";
			// 
			// Admissions
			// 
			this->Admissions->ForeColor = System::Drawing::Color::DarkGreen;
			resources->ApplyResources(this->Admissions, L"Admissions");
			this->Admissions->Name = L"Admissions";
			this->Admissions->UseVisualStyleBackColor = true;
			this->Admissions->Click += gcnew System::EventHandler(this, &MainForm::Admissions_Click);
			// 
			// Information
			// 
			this->Information->ForeColor = System::Drawing::Color::Navy;
			resources->ApplyResources(this->Information, L"Information");
			this->Information->Name = L"Information";
			this->Information->UseVisualStyleBackColor = true;
			this->Information->Click += gcnew System::EventHandler(this, &MainForm::Information_Click);
			// 
			// Expulsion
			// 
			this->Expulsion->ForeColor = System::Drawing::Color::Red;
			resources->ApplyResources(this->Expulsion, L"Expulsion");
			this->Expulsion->Name = L"Expulsion";
			this->Expulsion->UseVisualStyleBackColor = true;
			this->Expulsion->Click += gcnew System::EventHandler(this, &MainForm::PassEx_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Name = L"label2";
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Green;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Name = L"label3";
			// 
			// Quit
			// 
			this->Quit->ForeColor = System::Drawing::Color::Green;
			resources->ApplyResources(this->Quit, L"Quit");
			this->Quit->Name = L"Quit";
			this->Quit->UseVisualStyleBackColor = true;
			this->Quit->Click += gcnew System::EventHandler(this, &MainForm::Quit_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Quit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Expulsion);
			this->Controls->Add(this->Information);
			this->Controls->Add(this->Admissions);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->sectionComboBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	AddItem^ کلیہ;
	String^ databaseFilename;
	array<ArrayList^>^ lists;

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	try {
		ConfigFile = gcnew String(L"Config.xml");
		XmlData^ xml = gcnew XmlData(ConfigFile);

		//String^ EnvDir = Environment::GetFolderPath(Environment::SpecialFolder::CommonProgramFiles);
		//Process::Start(EnvDir->Replace(L" (x86)", L"") + L"\\Microsoft Shared\\ink\\TabTip.exe");

		lists = gcnew array<ArrayList^>(15);
		lists[3] = xml->LoadFile("se"); UpdateSection(xml); // section names from Students.xml
		lists[4] = mdb->DatabaseFieldNames(L"class");     // fields names of current database - 5 items
		lists[5] = mdb->DatabaseFieldNames(L"Student");   // fields names of student database - 13 items
		lists[6] = xml->LoadFile("ca");     // caste names items from Students.xml
		lists[7] = xml->LoadFile("oc");     // occupation names items from Students.xml
		lists[8] = xml->LoadFile("vi");     // village names items from Students.xml

		int index = xml->GetAttrib("Village");
		if(index < 0) index = 0;
		if(index >= lists[8]->Count) index = lists[8]->Count - 1;
		Title->Text += sectionComboBox->Items[sectionComboBox->SelectedIndex];
		Title->Text += L"،" + lists[8][index]->ToString();
		this->Text  += L" اشاعت 6.5";
	}
	catch(Exception^ e) {
		MessageBox::Show(e->Message, "Runtime exception !!!");
	}
}

	void UpdateSection(XmlData^ xml) {
		int index = xml->GetAttrib("Section");
		if(index < 0) index = 0;
		if(index >= lists[3]->Count) index = lists[3]->Count - 1;
		sectionComboBox->SelectedIndex = index;
	}
private: System::Void sectionComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if(iSection < 0) {
			databaseFilename = lists[3][sectionComboBox->SelectedIndex]->ToString();
			mdb = gcnew Caccdb(databaseFilename);
			if(!mdb->connectionOk) MessageBox::Show(L"Database loading failure!!!", L"Ooops");
		}
		else {
			sectionComboBox->SelectedIndex = lists[3]->IndexOf(databaseFilename);
		}
	}
private: System::Void sectionComboBox_DrawItem(System::Object^  sender, System::Windows::Forms::DrawItemEventArgs^  e) {
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
private: System::Void Admissions_Click(System::Object^  sender, System::EventArgs^  e) {
		if(iSection >= 0) return ;
		Form1^ form = gcnew Form1(gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::CloseForm), lists);
		form->databaseFilename = this->databaseFilename;
		form->iSection = iSection = sectionComboBox->SelectedIndex;
		form->Title->Text = this->Title->Text;
		form->Show();
	}
private: System::Void PassEx_Click(System::Object^  sender, System::EventArgs^  e) {
		if(iSection >= 0) return ;
		Form2^ form = gcnew Form2(gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::CloseForm), lists);
		form->databaseFilename = this->databaseFilename;
		form->iSection = iSection = sectionComboBox->SelectedIndex;
		form->Title->Text = this->Title->Text;
		form->Show();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		help^ h1 = gcnew help();
		h1->Show();
	}
public:
	int ChangeCulture(String^ language) {
		Thread::CurrentThread->CurrentCulture = gcnew CultureInfo(language);
		InputLanguage^ lang = InputLanguage::FromCulture(Thread::CurrentThread->CurrentCulture);
		if(InputLanguage::InstalledInputLanguages->IndexOf(lang) == -1) throw gcnew ArgumentOutOfRangeException();
		InputLanguage::CurrentInputLanguage = lang;

		return 0;
	}

	ArrayList^ GetList(DataTable^ table) {
		ArrayList^ list = gcnew ArrayList;
		for(int i=0; i<table->Rows->Count; i++) {
			String^ Name = String::Join(L" ،", 
				table->Rows[i]["StudentName"], 
				table->Rows[i]["FathersName"], 
				table->Rows[i]["Caste"], 
				table->Rows[i]["Address"]);

			list->Add(Name);
		}

		return list;
	}

	ArrayList^ GetList(String^ field, int Count) {
		ArrayList^ list = gcnew ArrayList();
		DataTable^ table = mdb->DatabaseMultipleNames(field, Count);
		if( table->Rows->Count > 0) {
			for(int i=0; i<table->Rows->Count; i++) 
				list->Add(table->Rows[i][field]->ToString());
		}

		return list;
	}

	List<String^>^ GetDateList(String^ field, int Count) {
		List<String^>^ list = gcnew List<String^>();
		DataTable^ table = mdb->DatabaseMultipleNames(field, Count);
		if( table->Rows->Count > 0) {
			for(int i=0; i<table->Rows->Count; i++) {
				DateTime^ date = Convert::ToDateTime(table->Rows[i][field]);
				list->Add(date->ToString("d", gcnew CultureInfo(L"en-US")));
			}
		}

		return list;
	}

	void FindWhat(System::Object^ sender, System::EventArgs^ e) {
		ArrayList^ fieldName = lists[5];
		String^ strFind = کلیہ->StringToFind;
		int index = کلیہ->ComboBoxField->SelectedIndex;
		if(index < 0) {	
			MessageBox::Show(L"براہ کرمِ: مطلوبہ لفظ کے لئے کلیہ منتخب کریں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation); 
			return ;
		}
		if(strFind->Trim()->Length==0) {
			if(2 < index && index <= 5) strFind = کلیہ->dateTimePickerInCombo->Value.ToString("d", gcnew CultureInfo(L"en-US"));
			else if(index != 14) {
				MessageBox::Show(L"پہلے مطلوبہ لفظ دئیے ہوئے خانے میں لکھیں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
				return ;
			}
		}
		کلیہ->chart1->Visible = false;
		کلیہ->Breakup->Enabled = false;
		کلیہ->PrintPlease->Enabled = true;
		کلیہ->dataViewer->Visible = true;
		کلیہ->Update->Enabled = true;

		String^ cmd = gcnew String(L"select * from student");
		if(index == 0) { 
			int to, from = Convert::ToInt32(strFind); to = from + 10; 
			cmd += L" where (" + fieldName[index] + L">=" + from.ToString() + L")";
			cmd += L"  and  (" + fieldName[index] + L"<"  + to.ToString()   + L")"; 
		}
		else if(index <= 2) cmd += L" where "  + fieldName[index] + L" like '%" + strFind + L"%'";  // Name
		else if(index <= 5) cmd += L" where [" + fieldName[index] + L"]=#"      + strFind + L"#";   // Date
		else if(index <= 8) cmd += L" where "  + fieldName[index] + L" like '"  + strFind + L"%'";  // Occu/Caste/Village
		else if(index ==13) {
			array<String^>^ strComp = strFind->Split(gcnew array<Char>(1){L'،'});
			cmd += L" where (" + fieldName[1] + L" like '%" + strComp[0]->Trim() + L"%')";
			cmd += L"  and  (" + fieldName[2] + L" like '%" + strComp[1]->Trim() + L"%')";
			cmd += L"  and  (" + fieldName[6] + L" like '%" + strComp[2]->Trim() + L"%')";
			cmd += L"  and  (" + fieldName[8] + L" like '%" + strComp[3]->Trim() + L"%')";
		}
		else if(index != 14) {
			cmd += L" where " + fieldName[index] + L"=" + strFind;  
			cmd = cmd->Replace(L"Session=", L"[Session]="); 
		}
		//cmd = L"select * from (select distinct StudentName,FathersName,Caste,DOB,Address from Student where Address like '%" + strFind + L"%')";
		//cmd = L"select distinct StudentName,FathersName,Caste,DOB,Address from Student where Address like '%" + strFind + L"%'";
		//DataTable^ table = mdb->DatabaseQuery(cmd); MessageBox::Show(cmd, L"Records found: " + table->Rows->Count.ToString());
		DataTable^ table = mdb->DatabaseQuery(cmd + L" order by RNO");
		کلیہ->DisplayData(table);
	}

    void FindUpdate(System::Object^ sender, System::EventArgs^ e)  {
		ArrayList^ fieldName = lists[5];
        if(کلیہ->dataViewer->SelectedRows->Count <= 0) {
			MessageBox::Show(L"پہلے ریکارڈ یا کسی سطر کا انتخاب کریں۔", L"جناب عالی");
			return ;
        }

		int k, j = کلیہ->dataViewer->SelectedRows[0]->Index;
        int Srno = Convert::ToInt32(کلیہ->dataViewer[0,j]->Value);
	    DataTable^ table = mdb->DatabaseTest(L"student", Srno);
		if(table->Rows->Count > 1) {
			String^ field = nullptr;
			for(k = 1; k < 13; k++) {
				field = fieldName[k]->ToString();
				String^ sa = table->Rows[0][field]->ToString();
			    String^ sb = کلیہ->dataViewer[k,j]->Value->ToString();
				if(sa->CompareTo(sb)) break;
			}
			if(k == 13) {
				MessageBox::Show(L"ریکارڈ میں تبدیلی کے لئے مطلوبہ ریکارڈ تبدیل کر کے اس سطر کا انتخاب کریں۔", L"جناب عالی");
				return ;
			}
		}

        String^ args = gcnew String(L"");
        for(int i=1; i<13; i++) {
            if(     i < 3) args += fieldName[i] + L"='" + کلیہ->dataViewer[i,j]->Value->ToString() + L"',";
            else if(i < 6) args += fieldName[i] + L"='" + Convert::ToDateTime(کلیہ->dataViewer[i,j]->Value).ToString("d", gcnew CultureInfo(L"en-US")) + L"',";
            else if(i < 9) args += fieldName[i] + L"='" + کلیہ->dataViewer[i,j]->Value->ToString() + L"',";
            else if(i <12) args += fieldName[i] + L"="  + کلیہ->dataViewer[i,j]->Value->ToString() + L",";
            else   args += L"[" +  fieldName[i] + L"]=" + کلیہ->dataViewer[i,j]->Value->ToString();
        }

		MessageBoxButtons buttons = MessageBoxButtons::OK;						 
        String^ cmd = gcnew String(L"update student set " + args + " where RNO=" + Srno.ToString());
        if(mdb->DatabaseUpdate(cmd) > 0) MessageBox::Show(L"مطلوبہ ریکارڈ تبدیل کر دیا گیا ہے۔", L"کامیابی", buttons, MessageBoxIcon::Exclamation);
		else MessageBox::Show(L"مطلوبہ ریکارڈ تبدیل نہیں ہو سکا۔", L"اوں ہوں", buttons, MessageBoxIcon::Hand);
    }

    void FindShowPie(System::Object^ sender, System::EventArgs^ e)  {
		array<int>^  xValues, ^yValues, ^zValues;
 		ArrayList^ fieldName = lists[5];

		کلیہ->Update->Enabled = false;
		کلیہ->dataViewer->Visible = false;
		کلیہ->PrintPlease->Enabled = false;
		کلیہ->chart1->Series["Series1"]->Points->Clear();
		کلیہ->chart1->Series["Series2"]->Points->Clear();
		کلیہ->chart1->Series["Series1"]->LegendText = L"";
		کلیہ->chart1->Series["Series2"]->Enabled = false;
		کلیہ->chart1->Visible = true;

		int index = کلیہ->ComboBoxField->SelectedIndex;
		int jh=0, nCurrent = 0, nTotal = mdb->Count;
		switch(index) {
			case 3:	
			case 4:	
			case 5:	{
					List<String^>^ items = GetDateList(fieldName[index]->ToString(), index==4 ? 3 : 20);
					yValues = gcnew array<int>(items->Count);
					for each(String^ item in items) {
						String^ cmd = gcnew String(L"[" + fieldName[index]->ToString() + L"]=#") + item + L"#";
						yValues[jh++] = mdb->RecordCount(L"student", cmd);
					}
					کلیہ->chart1->Titles["Title1"]->Text = L"مختلف تاریخوں کے بچوں کا تناسب";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(items, yValues);
				}
				break;
			case 6:	
			case 7:	
			case 8:	{
					ArrayList^ items = GetList(fieldName[index]->ToString(), 10);
					yValues = gcnew array<int>(items->Count);
					for each(String^ item in items) {
						yValues[jh++] = mdb->RecordCount(L"student", gcnew String(L"(" + fieldName[index]->ToString() + L" like '%") + item + L"%')");
					}
					کلیہ->chart1->Titles["Title1"]->Text = L"سب سے زیادہ  " + کلیہ->ComboBoxField->SelectedItem->ToString() + L" سے طالب علم";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(items, yValues);
				}
				break;
			case 11: {
					String^ type = fieldName[8]->ToString();
					ArrayList^ items = GetList(type, 10);
					yValues = gcnew array<int>(items->Count);
					zValues = gcnew array<int>(items->Count);
					for each(String^ item in items) {
						yValues[jh] = mdb->RecordCount(L"student", gcnew String(L"(" + type + L" like '%") + item + L"%') and (Passed=True)");
						zValues[jh++] = mdb->RecordCount(L"student", gcnew String(L"(" + type + L" like '%") + item + L"%') and (Passed=False)");
					}
					کلیہ->chart1->Titles["Title1"]->Text = L"مختلف دیہات کے بچوں کا تناسب";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = false;
					کلیہ->chart1->Series["Series2"]->Enabled = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
					کلیہ->chart1->Series["Series2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(items, yValues);
					کلیہ->chart1->Series["Series2"]->Points->DataBindXY(items, zValues);
					کلیہ->chart1->Series["Series1"]->Color = System::Drawing::Color::Green;
					کلیہ->chart1->Series["Series2"]->Color = System::Drawing::Color::YellowGreen;
					کلیہ->chart1->Series["Series1"]->LegendText= L"پاس";
					کلیہ->chart1->Series["Series2"]->LegendText= L"فیل";
					کلیہ->chart1->Series["Series2"]->ToolTip = L"#PERCENT";
				}
				break;
			case 12: {
					jh = کلیہ->sessions[1]-کلیہ->sessions[0];
					xValues = gcnew array<int>(jh);
					yValues = gcnew array<int>(jh);
					for(int i=0; i<jh; i++) {
						xValues[i] = کلیہ->sessions[0]+i;
						yValues[i] = mdb->RecordCount(L"student", gcnew String(L"[Session]=") + xValues[i].ToString());
						xValues[i]+= کلیہ->sessions[2];
					}
					کلیہ->chart1->Titles["Title1"]->Text = L"مختلف سیشن کے بچوں کی تعداد";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(xValues, yValues);
					کلیہ->chart1->Series["Series1"]->Color = System::Drawing::Color::DodgerBlue;
				}
				break;
			default:
				break;
		}
		کلیہ->chart1->Series["Series1"]->LegendToolTip = L"تعداد #VAL";
		کلیہ->chart1->Series["Series1"]->LabelToolTip = L"#VAL";
		کلیہ->chart1->Series["Series1"]->ToolTip = L"#PERCENT";
	}

	void FindClose(System::Object^ sender, System::EventArgs^ e) {
		کلیہ->Close();
	}

	ArrayList^ GetList(array<String^>^ ar) {
		ArrayList^ list = gcnew ArrayList;
		for(int i=0; i<ar->Length; i++) list->Add(ar[i]);
		return list;
	}

	ArrayList^ GetNumberList(int m, int n, int k) {
		ArrayList^ list = gcnew ArrayList;
		for(int i=m; i<=n; i+=k) list->Add(i.ToString());
		return list;
	}

private: System::Void Information_Click(System::Object^  sender, System::EventArgs^  e) {
		System::EventHandler^ h1 = gcnew System::EventHandler(this, &MainForm::FindWhat);
		System::EventHandler^ h2 = gcnew System::EventHandler(this, &MainForm::FindClose);
        System::EventHandler^ h3 = gcnew System::EventHandler(this, &MainForm::FindUpdate);
        System::EventHandler^ h4 = gcnew System::EventHandler(this, &MainForm::FindShowPie);
		array<System::EventHandler^>^ handlers = gcnew array<System::EventHandler^>(4){h1, h2, h3, h4};

		array<int>^ sessions = gcnew array<int>(3){1, 100, 1919};
		DataTable^ table = mdb->DatabaseQuery(L"select * from student order by RNO");
		if(table->Rows->Count > 0) {
			lists[0]    = GetNumberList(1, table->Rows->Count-1, 10);

			DateTime^dt = Convert::ToDateTime(table->Rows[0]["DOA"]);
			sessions[0] = Convert::ToInt32(table->Rows[0]["Session"]);
			sessions[1] = Convert::ToInt32(table->Rows[table->Rows->Count-1]["Session"]);
			sessions[2] = dt->Year - sessions[0];
						
			lists[12]   = GetNumberList(sessions[0], sessions[1], 1);
		}

		lists[1]  = GetList(L"StudentName", 5);
		lists[2]  = GetList(L"FathersName", 3);
		if(sectionComboBox->SelectedIndex == 2) lists[10] = lists[9] = GetNumberList(9,10, 1);
		else if(sectionComboBox->SelectedIndex) lists[10] = lists[9] = GetNumberList(6, 8, 1);
		else                                    lists[10] = lists[9] = GetNumberList(1, 5, 1);

		lists[11] = GetList(gcnew array<String^>(2){L"True", L"False"});
		lists[13] = GetList(mdb->DatabaseMultipleEntries(L"student", gcnew String(L"StudentName,FathersName,Caste,Address")));
		lists[14] = GetList(gcnew array<String^>(1){L"سارا داخلہ"});

		کلیہ = gcnew AddItem(handlers, lists, sessions);
		کلیہ->userFile->Text = this->databaseFilename + L" سکول";
		کلیہ->label1->Text = L"مطلوبہ نام";
		کلیہ->Show();
	}
private: System::Void Quit_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ EnvDir = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\Student Register\\";
		if(Directory::Exists(EnvDir) && File::Exists(EnvDir + L"default.accdb")) {
			String^ caption = L"خبر دار";
			MessageBoxButtons buttons = MessageBoxButtons::YesNo;						 
			String^ message = String::Format(L"کیا آپ نئی ڈیٹا فائل بنانا چاہتے ہیں؟");
			System::Windows::Forms::DialogResult res = MessageBox::Show(message, caption, buttons, MessageBoxIcon::Information);
			if(res == System::Windows::Forms::DialogResult::Yes) {
				System::EventHandler^ h1 = gcnew System::EventHandler(this, &MainForm::AddNewFile);
				System::EventHandler^ h2 = gcnew System::EventHandler(this, &MainForm::CloseNewFile);
				array<System::EventHandler^>^ handlers = gcnew array<System::EventHandler^>(2){h1, h2};

				لفظ = gcnew Finds(handlers);
				لفظ->Text = L"ڈیٹا فائل";
				لفظ->label1->Text = L"فائل کا نام";
				لفظ->Show();
			}
		}
		else MessageBox::Show(L"پروگرام میں فائل بنانے کی گنجائش موجود نہیں ہے۔", L"اوں ہوں", MessageBoxButtons::OKCancel, MessageBoxIcon::Hand);
	}

public:
	Finds^ لفظ;
	void AddNewFile(System::Object^ sender, System::EventArgs^ e) {
		String^ newFilename = لفظ->StringToFind;
		if(newFilename->Trim()->Length==0) {
			MessageBox::Show(L"پہلے دئیے ہوئے خانے میں فائل کا نام لکھیں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
			return ;
		}

		String^ CurDir = Environment::CurrentDirectory + L"\\Database\\";
		if(!File::Exists(CurDir + newFilename + L".accdb")) {
			String^ EnvDir = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\Student Register\\";
			File::Copy(EnvDir + L"default.accdb", CurDir + newFilename + L".accdb", true);
			String^ msg = newFilename + L" فائل بنا دی گئی ہے۔";
			if(File::Exists(CurDir + newFilename + L".accdb")) MessageBox::Show(msg, L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
			else MessageBox::Show(L"فائل بنانے کا عمل مکمل نہیں ہو سکا۔", L"اوں ہوں", MessageBoxButtons::OKCancel, MessageBoxIcon::Hand);
		}
		else MessageBox::Show(String::Format(L"فائل {0}" L" پہلے سے موجود ہے ", newFilename), L"اوں ہوں", MessageBoxButtons::OKCancel, MessageBoxIcon::Hand);
		لفظ->Close();
	}

	void CloseNewFile(System::Object^ sender, System::EventArgs^ e) {
		لفظ->Close();
	}

private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		try {
			String^ CurDir = Environment::CurrentDirectory + L"\\Database\\";
			String^ EnvDir = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)+"\\Student Register\\";
			XmlData^ xml = gcnew XmlData(ConfigFile);			
			xml->SetAttrib("Section", 1+lists[3]->IndexOf(databaseFilename));

			for(int i=0; i<3; i++) {
				String^ database = lists[3][i]->ToString();
				databaseFilename = database + L".accdb";
				if(Directory::Exists(EnvDir) && File::Exists(CurDir + databaseFilename)) {
					if(!File::Exists(EnvDir + databaseFilename)) File::Copy(CurDir + databaseFilename, EnvDir + databaseFilename, true);
					else {
						Caccdb^ accdb = gcnew Caccdb(CurDir, database);
						if(accdb->connectionOk) { 
							Caccdb^ refdb = gcnew Caccdb(EnvDir, database);
							if(refdb->connectionOk) { 
								if( refdb->Count < accdb->Count) {
									File::Copy(EnvDir + databaseFilename, EnvDir + databaseFilename->Replace(L"accdb", L"accbk"), true);
									File::Copy(CurDir + databaseFilename, EnvDir + databaseFilename, true);
								}
							}
						}
					} 
				}
			}
		}
		catch(Exception^ ) {
			//MessageBox::Show(e->Message, "Runtime exception !!!");
		}
	}
public:
	int iSection;
	String^ ConfigFile;
	void CloseForm(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		iSection = -1;
	}

	Caccdb^ mdb;
};
}
