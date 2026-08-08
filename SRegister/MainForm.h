
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
	using namespace ARegister;
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
			this->Expulsion->ForeColor = System::Drawing::Color::Green;
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
//	DbnClient^ client1;
	String^ databaseFilename;
	array<ArrayList^>^ lists;

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			ConfigFile = gcnew String(L"Config.xml");
			XmlData^ xml = gcnew XmlData(ConfigFile);
//			client1 = gcnew DbnClient();

			//String^ EnvDir = Environment::GetFolderPath(Environment::SpecialFolder::CommonProgramFiles);
			//Process::Start(EnvDir->Replace(L" (x86)", L"") + L"\\Microsoft Shared\\ink\\TabTip.exe");

			lists = gcnew array<ArrayList^>(15);
			lists[3] = xml->LoadFile("se"); 
			UpdateSection(xml); // section names from Students.xml
			lists[4] = xml->LoadFile("ca");     // caste names items from Students.xml
			lists[5] = xml->LoadFile("oc");     // occupation names items from Students.xml
			lists[6] = xml->LoadFile("vi");     // village names items from Students.xml
			lists[10]= mdb->DatabaseFieldNames(L"طلبا");   // fields names of student database - 13 items
			lists[12]= mdb->DatabaseFieldNames(L"داخلہ");  // fields names of current database - 5 items

			int index = xml->GetAttrib("Village");
			if(index < 0) index = 0;
			if(index >= lists[6]->Count) index = lists[6]->Count - 1;
			Title->Text += sectionComboBox->Items[sectionComboBox->SelectedIndex];
			Title->Text += L"،" + lists[6][index]->ToString();
			this->Text  += L" اشاعت 9.5";
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
		Class1::ShowMe(this->databaseFilename);
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

	ArrayList^ GetList(DataTable^ table1, DataTable^ table2) {
		ArrayList^ list = gcnew ArrayList;
		for(int i=0; i<table2->Rows->Count; i++) {
			int index = Convert::ToInt16(table2->Rows[i][L"حوالہ"]);

			String^ Name = String::Join(L" ،", 
				table1->Rows[index-1][L"نام"], 
				table1->Rows[index-1][L"ولد"], 
				table1->Rows[index-1][L"ذات"], 
				table1->Rows[index-1][L"پتہ"]);

			list->Add(Name);
		}

		return list;
	}

	ArrayList^ GetList(String^ tblName, String^ field, int Count) {
		ArrayList^ list = gcnew ArrayList();
		DataTable^ table = mdb->DatabaseMultipleRecords(tblName, field, Count);
		if( table->Rows->Count > 0) {
			for(int i=0; i<table->Rows->Count; i++) 
				list->Add(table->Rows[i][field]->ToString());
		}

		return list;
	}

	String^ SetStudentDataFromTablePlus(int SNo, DataTable^ table, String^ fName, String^ fValue) {
		table->Rows[0][fName] = fValue;
		DateTime^ date = Convert::ToDateTime(table->Rows[0][L"پیدائش"]);
				
		StringBuilder^ sb = gcnew StringBuilder(SNo.ToString()     + ", '");
		sb->Append(table->Rows[0][L"نام"]->ToString()              + "','");
		sb->Append(table->Rows[0][L"ولد"]->ToString()              + "',#");
		sb->Append(date->ToString("d", gcnew CultureInfo(L"en-US"))+ "#,'");
		sb->Append(table->Rows[0][L"ذات"]->ToString()              + "','");
		sb->Append(table->Rows[0][L"پیشہ"]->ToString()             + "','");
		sb->Append(table->Rows[0][L"پتہ"]->ToString()              + "'");

		return sb->ToString();
	}

	void FindWhat(System::Object^ sender, System::EventArgs^ e) {
		String^ strFind = کلیہ->StringToFind;
		int index = کلیہ->ComboBoxField->SelectedIndex;
		int to = 10;
		if(index < 0) {	
			MessageBox::Show(L"براہ کرمِ: مطلوبہ لفظ کے لئے کلیہ منتخب کریں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation); 
			return ;
		}
		if(strFind->Trim()->Length==0) {
			MessageBox::Show(L"پہلے مطلوبہ لفظ دئیے ہوئے خانے میں لکھیں", L"جناب عالی", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
			return ;
		}
		کلیہ->chart1->Visible = false;
		کلیہ->Breakup->Enabled = false;
		کلیہ->PrintPlease->Enabled = true;
		کلیہ->dataViewer->Visible = true;
		کلیہ->Update->Enabled = true;

        String^ cmd = L"select داخلہ.نمبر, نام, ولد, پیدائش, ذات, پیشہ, پتہ, داخلہ.سال, داخلہ.جماعت, داخلہ.تاریخ, داخلہ.تاجماعت, داخلہ.تاتاریخ, داخلہ.کیفیت FROM طلبا INNER JOIN داخلہ ON داخلہ.[حوالہ]=طلبا.[نمبر]";
		String^ field = کلیہ->ComboBoxField->Items[index]->ToString();
		if(index < lists[10]->Count) {
			switch(index) {
			case 0: to += Convert::ToInt32(strFind); cmd += L" where (داخلہ." + field + L">=" + strFind + L") and (داخلہ." + field + L"<"  + to.ToString() + L")"; break;
			case 3:	cmd += L" where (داخلہ."+ field + L"="  + strFind + L")";         break; // سال
			default:cmd += L" where (طلبا." + field + L" like '%" + strFind + L"%')"; break;
			}
		}
		else if(index < 8) {
			cmd += L" where (داخلہ." + field + L"=" + strFind + L")"; // کیفیت
		}
		DataTable^ table = mdb->DatabaseQuery(cmd + L" order by داخلہ.نمبر");
//		client1->despatchFunction(cmd);
//		DataTable^ table = client1->Deserializer();
		کلیہ->DisplayData(table);
	}

	int tulbaTableChanged(int j, DataTable^ table)
	{
		int k;
		if(table->Rows->Count > 0) {
			ArrayList^ fieldName = lists[10];
			for(k = 1; k < fieldName->Count; k++) {
				String^ field = fieldName[k]->ToString();
				String^ sa = table->Rows[0][field]->ToString();
				String^ sb = کلیہ->dataViewer[k,j]->Value->ToString();
				if(sa->CompareTo(sb)) break;
			}
			if(k < fieldName->Count) { // Does any record match the updated student
				return k;
			}
		}

		return 0;
	}

	int admisTableChanged(int j, DataTable^ table)
	{
		int i, k = lists[10]->Count;
		if(table->Rows->Count > 0) {
			ArrayList^ fieldName = lists[12];
			for(i = 1; i < fieldName->Count-1; i++) {
				String^ field = fieldName[i]->ToString();
				String^ sa = table->Rows[0][field]->ToString();
				String^ sb = کلیہ->dataViewer[k+i-1,j]->Value->ToString();
				if(sa->CompareTo(sb)) break;
			}
			if(i < fieldName->Count-1) { // Does any record match the updated student
				return i;
			}
		}

		return 0;
	}

	int updateTulbaRecord(int j, int SNo, ArrayList^ fieldName)
	{
		String^ cmd = gcnew String(L"update طلبا set ");
		for(int i=1; i<7; i++) {
			if(i == 3)     cmd += fieldName[i] + L"='" + Convert::ToDateTime(کلیہ->dataViewer[i,j]->Value).ToString("d", gcnew CultureInfo(L"en-US")) + L"',";
			else if(i < 6) cmd += fieldName[i] + L"='" + کلیہ->dataViewer[i,j]->Value->ToString() + L"',";
			else           cmd += fieldName[i] + L"='" + کلیہ->dataViewer[i,j]->Value->ToString() + L"'";
		}
		cmd += L" where نمبر=" + SNo.ToString();
		return mdb->DatabaseUpdate(cmd);
	}

	int updateAdmisRecord(int j, int RNo, ArrayList^ fieldName)
	{
		String^ cmd = gcnew String(L"update داخلہ set ");
		for(int i=1; i<7; i++) {
	        if(i==3||i==5) cmd += fieldName[i] + L"='" + Convert::ToDateTime(کلیہ->dataViewer[i+6,j]->Value).ToString("d", gcnew CultureInfo(L"en-US")) + L"',";
			else if(i < 6) cmd += fieldName[i] + L"="  + کلیہ->dataViewer[i+6,j]->Value->ToString() + L",";
			else           cmd += fieldName[i] + L"="  + کلیہ->dataViewer[i+6,j]->Value->ToString();
		}
		cmd += L" where نمبر=" + RNo.ToString();
		return mdb->DatabaseUpdate(cmd);
	}

    void FindUpdate(System::Object^ sender, System::EventArgs^ e)  {
        if(کلیہ->dataViewer->SelectedRows->Count <= 0) {
			MessageBox::Show(L"پہلے کسی سطر یا ریکارڈ کا انتخاب کریں۔", L"جناب عالی");
			return ;
        }

		int j = کلیہ->dataViewer->SelectedRows[0]->Index;
        int RNo = Convert::ToInt32(کلیہ->dataViewer[0,j]->Value);
	    DataTable^ table2 = mdb->DatabaseFindInTable(L"داخلہ", RNo);
		if(table2->Rows->Count > 0) {
			int No, SNo = Convert::ToInt32(table2->Rows[0][L"حوالہ"]);
			DataTable^ table1 = mdb->DatabaseFindInTable(L"طلبا", SNo);
			int rm = 0, m = tulbaTableChanged(j, table1);
			int rn = 0, n = admisTableChanged(j, table2);
			if(m+n < 1) {
				MessageBox::Show(L"ریکارڈ میں تبدیلی کے لئے مطلوبہ ریکارڈ تبدیل کر کے اس سطر کا انتخاب کریں۔", L"جناب عالی");
				return ;
			}

			if(n > 0) rn = updateAdmisRecord(j, RNo, lists[12]);
			if(m > 0) {
				ArrayList^ fieldName = lists[10];
				String^ field = fieldName[m]->ToString();
				String^ newValue = کلیہ->dataViewer[m,j]->Value->ToString(); 
				DataTable^ table3 = mdb->DatabaseTableNamesTable(table1, field, newValue);
				DataTable^ table4 = mdb->DatabaseTableQuery(L"داخلہ", L"حوالہ=" + SNo.ToString());
				if(table4->Rows->Count < 2) { // only one reference 
					if(table3->Rows->Count > 0) { // change the reference of student table in admis table
						No = Convert::ToInt32(table3->Rows[0][L"نمبر"]);
						rm = mdb->DatabaseUpdate(L"update داخلہ set حوالہ=" + No.ToString() + L" where نمبر=" + RNo.ToString());
						mdb->DatabaseTableDelete(L"طلبا", L"نمبر=" + SNo.ToString());
					}
					else {
						rm = updateTulbaRecord(j, SNo, lists[10]);
					}
				}
				else { // more than one references
					if(table3->Rows->Count > 0) { // change the reference of student table in admis table
						No = Convert::ToInt32(table3->Rows[0][L"نمبر"]);
						rm = mdb->DatabaseUpdate(L"update داخلہ set حوالہ=" + No.ToString() + L" where نمبر=" + RNo.ToString());
					}
					else {
						No = mdb->RecordCount(L"طلبا") + 1; // next number
						mdb->DatabaseTableInsert(L"طلبا", SetStudentDataFromTablePlus(No, table1, field, newValue));
						rm = mdb->DatabaseUpdate(L"update داخلہ set حوالہ=" + No.ToString() + L" where نمبر=" + RNo.ToString());
					}
				}
			}

			MessageBoxButtons buttons = MessageBoxButtons::OK;						 
			if((n > 0 && rn < 1) || (m > 0 && rm < 1)) MessageBox::Show(L"مطلوبہ ریکارڈ تبدیل نہیں ہو سکا۔", L"اوں ہوں", buttons, MessageBoxIcon::Hand);
			else MessageBox::Show(L"مطلوبہ ریکارڈ تبدیل کر دیا گیا ہے۔", L"کامیابی", buttons, MessageBoxIcon::Exclamation);
		}
    }

    void FindShowPie(System::Object^ sender, System::EventArgs^ e)  {
		ArrayList^ items;
		int Count = 10;
		try {
			کلیہ->Update->Enabled = false;
			کلیہ->dataViewer->Visible = false;
			کلیہ->PrintPlease->Enabled = false;
			کلیہ->chart1->Series["Series1"]->Points->Clear();
			کلیہ->chart1->Series["Series2"]->Points->Clear();
			کلیہ->chart1->Series["Series1"]->LegendText = L"";
			کلیہ->chart1->Series["Series2"]->Enabled = false;
			کلیہ->chart1->Visible = true;
			int index = کلیہ->ComboBoxField->SelectedIndex;
			switch (index) {
			case 1:
			case 2:
			case 4:
			case 5:
			case 6: {
					ArrayList^ fieldName = lists[10];
					String^ field = fieldName[index]->ToString();
					do items = GetList(L"طلبا", field, Count++);
					while (items->Count > 10);					
					List<int>^ ylist = gcnew List<int>(items->Count);
					for each(String^ item in items) {
						String^ cmd = gcnew String(L"(" + field + L" like '") + item + L"')";
						ylist->Add(mdb->RecordCount(L"طلبا", cmd));
					}
					کلیہ->chart1->Titles["Title1"]->Text = field + L" کے اعتبار سے طلباء کا تناسب";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(items, ylist);
					کلیہ->chart1->Series["Series1"]->Color = System::Drawing::Color::DodgerBlue;
				}
				break;
			case 3: {
					String^ field = L"سال";
					do items = GetList(L"داخلہ", field, Count++);
					while (items->Count > 15);
					List<int>^ ylist = gcnew List<int>(items->Count);
					for each(String^ item in items) {
						String^ cmd = gcnew String(field + L"=") + item;
						ylist->Add(mdb->RecordCount(L"داخلہ", cmd));
					}
					کلیہ->chart1->Titles["Title1"]->Text = L"مختلف سالوں میں طلباء کی تعداد";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(items, ylist);
					کلیہ->chart1->Series["Series1"]->Color = System::Drawing::Color::DodgerBlue;
				}
				break;
			case 7: {
					items = GetList(L"داخلہ", L"سال", 5);
					List<int>^ ylist = gcnew List<int>(items->Count);
					List<int>^ zlist = gcnew List<int>(items->Count);
					for each(String^ item in items) {
						String^ cmd1 = gcnew String(L"(سال=" + item + L") and (کیفیت=1)");
						String^ cmd2 = gcnew String(L"(سال=" + item + L") and (کیفیت=2)");
						ylist->Add(mdb->RecordCount(L"داخلہ", cmd1));
						zlist->Add(mdb->RecordCount(L"داخلہ", cmd2));
					}
					کلیہ->chart1->Titles["Title1"]->Text = L"نتائج کے اعتبار سے مختلف سالوں میں طلباء کا تناسب";
					کلیہ->chart1->ChartAreas["ChartArea1"]->Area3DStyle->Enable3D = true;
					کلیہ->chart1->Series["Series2"]->Enabled = true;
					کلیہ->chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
					کلیہ->chart1->Series["Series2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
					کلیہ->chart1->Series["Series1"]->Points->DataBindXY(items, zlist);
					کلیہ->chart1->Series["Series2"]->Points->DataBindXY(items, ylist);
					کلیہ->chart1->Series["Series1"]->Color = System::Drawing::Color::YellowGreen;
					کلیہ->chart1->Series["Series2"]->Color = System::Drawing::Color::Green;
					کلیہ->chart1->Series["Series1"]->LegendText = L"فیل";
					کلیہ->chart1->Series["Series2"]->LegendText = L"پاس";
					کلیہ->chart1->Series["Series2"]->ToolTip = L"#PERCENT";
				}
				break;
			default:
				break;
			}
			کلیہ->chart1->Series["Series1"]->LegendToolTip = L"تعداد #VAL";
			کلیہ->chart1->Series["Series1"]->LabelToolTip = L"#VAL";
			کلیہ->chart1->Series["Series1"]->ToolTip = L"#PERCENT";
		}
		catch (Exception^) {
		}
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

		DataTable^ table = mdb->DatabaseQuery(L"select * from داخلہ order by نمبر");
		if(table->Rows->Count > 0) {
			lists[0] = GetNumberList(1, table->Rows->Count, 10);
			int ind1 = Convert::ToInt16(table->Rows[0][L"سال"]);
			int ind2 = Convert::ToInt16(table->Rows[table->Rows->Count-1][L"سال"]);
			lists[11]= GetNumberList(ind1, ind2, 1);
		}

		lists[1]  = GetList(L"طلبا", L"نام", 3);
		lists[2]  = GetList(L"طلبا", L"ولد", 3);

		lists[7] = GetNumberList(1, 3, 1);
		lists[8] = lists[0];
		lists[9] = GetList(gcnew array<String^>(1){L"سارا داخلہ"});

		کلیہ = gcnew AddItem(handlers, lists);
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

private: String^ CsvValue(Object^ v) {
		if(v == nullptr || v == System::DBNull::Value) return L"";
		if(v->GetType() == System::DateTime::typeid)
			return safe_cast<System::DateTime>(v).ToString(L"yyyy-MM-dd", System::Globalization::CultureInfo::InvariantCulture);
		return Convert::ToString(v, System::Globalization::CultureInfo::InvariantCulture);
	}

private: String^ CsvField(String^ s) {
		if(s == nullptr) return L"";
		if(s->IndexOfAny(gcnew array<System::Char>(4){L',', L'"', L'\r', L'\n'}) < 0) return s;
		return L"\"" + s->Replace(L"\"", L"\"\"") + L"\"";
	}

private: void ExportCsv(String^ dbPath, String^ database, String^ outDir) {
		array<String^>^ tables = gcnew array<String^>(2){ L"طلبا", L"داخلہ" };
		array<String^>^ names  = gcnew array<String^>(2){ L"students", L"admissions" };
		for(int t=0; t<tables->Length; t++) {
			Caccdb^ db = gcnew Caccdb(dbPath, database);
			if(!db->connectionOk) continue;
			DataTable^ table = db->DatabaseQuery(L"select * from " + tables[t] + L" order by نمبر");
			if(table == nullptr) continue;
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			for(int c=0; c<table->Columns->Count; c++) {
				if(c) sb->Append(L",");
				sb->Append(CsvField(table->Columns[c]->ColumnName));
			}
			sb->Append(L"\r\n");
			for(int r=0; r<table->Rows->Count; r++) {
				for(int c=0; c<table->Columns->Count; c++) {
					if(c) sb->Append(L",");
					sb->Append(CsvField(CsvValue(table->Rows[r][c])));
				}
				sb->Append(L"\r\n");
			}
			File::WriteAllText(outDir + database + L"-" + names[t] + L".csv", sb->ToString(), gcnew System::Text::UTF8Encoding(true));
		}
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
				if(File::Exists(CurDir + databaseFilename)) ExportCsv(CurDir, database, CurDir);
				if(Directory::Exists(EnvDir) && File::Exists(CurDir + databaseFilename)) {
					if(!File::Exists(EnvDir + databaseFilename)) File::Copy(CurDir + databaseFilename, EnvDir + databaseFilename, true);
					else {
						Caccdb^ accdb = gcnew Caccdb(CurDir, database);
						if(accdb->connectionOk) { 
							Caccdb^ refdb = gcnew Caccdb(EnvDir, database);
							if(refdb->connectionOk) { 
								System::DateTime curTime = File::GetLastWriteTime(CurDir + databaseFilename);
								System::DateTime envTime = File::GetLastWriteTime(EnvDir + databaseFilename);
								if( curTime > envTime ) {
									String^ bkName = database + L"_" + System::DateTime::Now.ToString(L"yyyyMMdd") + L".accbk";
									if(!File::Exists(EnvDir + bkName)) File::Copy(EnvDir + databaseFilename, EnvDir + bkName, false);
									File::Copy(CurDir + databaseFilename, EnvDir + databaseFilename, true);
									array<String^>^ kept = Directory::GetFiles(EnvDir, database + L"_*.accbk");
									if(kept->Length > 30) {
										Array::Sort(kept);
										for(int k=0; k<kept->Length-30; k++) File::Delete(kept[k]);
									}
								}
							}
						}
					} 
				}
			}
		}
		catch(Exception^ ex) {
			MessageBox::Show(ex->Message, "Backup failed !!!");
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
