#pragma once

namespace SRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for help
	/// </summary>
	public ref class help : public System::Windows::Forms::Form
	{
	public:
		help(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
			this->BringToFront();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~help()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::TextBox^  textBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(help::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->ForeColor = System::Drawing::Color::Blue;
			this->textBox1->Name = L"textBox1";
			this->textBox1->TabStop = false;
			// 
			// help
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Inherit;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"help";
			this->Load += gcnew System::EventHandler(this, &help::help_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void help_Load(System::Object^  sender, System::EventArgs^  e) {
			String^ help0 = gcnew String(L"--- ضروری ہدایات ---");
			String^ help1 = gcnew String(L"1۔ پہلے سے موجود سلسلہ نمبر دوبارہ نہیں دیا جا سکتا بصورت دیگر آگے کا بٹن دبانے پر پروگرام اسے ٹھیک کرنے کو کہے گا۔");
			String^ help2 = gcnew String(L"2۔اگر تاریخوں میں وقفہ سالوں کے حساب سے غلط ہوا تو پروگرام اسے ٹھیک کرنے کو کہے گا۔");
			String^ help3 = gcnew String(L"3۔ Students.xml کے نام کی فائل پیچھے directory میں موجود ہے۔ اس فائل میں اور ناموں کا اضافہ کر کے استعمال کیا جا سکتا ہے۔ اسی فائل میں جس گا‌ؤں کا نام سکول گروپ  میں ہو گا وہی گا‌ؤں سکول کے نام کا حصہ بھی بنے گا۔");
			String^ help4 = gcnew String(L"4۔پیشہ، ذات/برادری اور گا‌ؤں‎‏کے اندر مطلوبہ آپشن نہ ہونے کی صورت میں اپنی مرضی کا نام شامل کرنے کے لئے ؟؟؟  کا آپشن منتخب کریں۔ ایک ڈائیلاگ باکس میں آپ کا مطلوبہ نام لیا جائے گا جو اس لسٹ کا حصہ بن جائے گا۔ ");
			textBox1->Text = help0+"\r\n"+help1+"\r\n"+help2+"\r\n"+help3+"\r\n"+help4;
		}
	};
}
