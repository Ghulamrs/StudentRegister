#pragma once

namespace ClientEnd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Net::Sockets;
	using namespace System::Threading;
	using namespace System::Runtime::Serialization;
	using namespace System::Runtime::Serialization::Formatters::Binary;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
            hostname = Dns::GetHostName();
            array<IPAddress^>^ address = Dns::GetHostEntry(hostname)->AddressList;
            clientIp = address[0];
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  text;
	private: System::Windows::Forms::Label^  status;
	private: System::Windows::Forms::Button^  Disconnect;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGrid;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->text = (gcnew System::Windows::Forms::TextBox());
			this->status = (gcnew System::Windows::Forms::Label());
			this->Disconnect = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 6);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"&Connect";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(679, 212);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"&Send";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// text
			// 
			this->text->Font = (gcnew System::Drawing::Font(L"Courier New", 12.06283F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->text->Location = System::Drawing::Point(74, 215);
			this->text->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->text->Name = L"text";
			this->text->Size = System::Drawing::Size(571, 26);
			this->text->TabIndex = 2;
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->Location = System::Drawing::Point(205, 16);
			this->status->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(78, 13);
			this->status->TabIndex = 3;
			this->status->Text = L"Not connected";
			// 
			// Disconnect
			// 
			this->Disconnect->Enabled = false;
			this->Disconnect->Location = System::Drawing::Point(679, 12);
			this->Disconnect->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Disconnect->Name = L"Disconnect";
			this->Disconnect->Size = System::Drawing::Size(99, 31);
			this->Disconnect->TabIndex = 4;
			this->Disconnect->Text = L"&Disconnect";
			this->Disconnect->UseVisualStyleBackColor = true;
			this->Disconnect->Click += gcnew System::EventHandler(this, &Form1::Disconnect_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 220);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Command";
			// 
			// dataGrid
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Red;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Green;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGrid->Location = System::Drawing::Point(8, 47);
			this->dataGrid->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Alvi Nastaleeq", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Green;
			this->dataGrid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGrid->RowTemplate->Height = 33;
			this->dataGrid->Size = System::Drawing::Size(770, 161);
			this->dataGrid->TabIndex = 6;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 254);
			this->Controls->Add(this->dataGrid);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Disconnect);
			this->Controls->Add(this->status);
			this->Controls->Add(this->text);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
                client = gcnew TcpClient(Dns::GetHostName(), 2054);

				if(client->Connected) {
					status->Text = "Connected";
					stream = client->GetStream();
					reader = gcnew BinaryReader(stream);
					writer = gcnew BinaryWriter(stream);
					SendItedentity();

					Disconnect->Enabled = true;
					button2->Enabled = true;
					button1->Enabled = false;
				}
				else {
					status->Text = "Not Connected";
				}
			 }
	public:
		String^ hostname;
		IPAddress^ clientIp;
		TcpClient^ client;
		NetworkStream^ stream;
		BinaryReader^ reader;
		BinaryWriter^ writer;
		int numberOfBytesAlreadyRead;
		array<Byte>^ m_buffer;
		StreamWriter^ sw;
	private: System::Void Disconnect_Click(System::Object^  sender, System::EventArgs^  e) {
		if(client->Connected) {
			status->Text = "Dis-connected";
			stream->Close();
			
			button1->Enabled = true;
			button2->Enabled = false;
			Disconnect->Enabled = false;
		}
		else {
			status->Text = "Not Dis-connected";
		}
	}
public:

	int SendItedentity(void)
	{
		String^ msg = L"SRegister_remote_user";
		String^ psw = L"grakhtar767";
		
		if(client->Connected) {	
			writer->Write(msg);		 // special string
			writer->Write(hostname); // machine name
			writer->Write(Environment::UserDomainName);// username
			writer->Write(psw);		 // passkey
		}

		return 0;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!client->Connected) return;
		writer->Write(text->Text); // select * from طلبا where نام like 'غلام رسول'
		DataTable^ table;
		String^ nRecords = reader->ReadString();
		status->Text = nRecords;
		int buffer_size = int::Parse(nRecords);
		m_buffer = gcnew array<Byte>(buffer_size);
		numberOfBytesAlreadyRead = 0;
		if (stream->CanRead) {
			autoEvent = gcnew AutoResetEvent(false);
			stream->BeginRead(m_buffer, 0, 8192, gcnew AsyncCallback(this, &Form1::myReadCallBack), stream);
			autoEvent->WaitOne();
		}
		else {
			Console::WriteLine("Sorry.  You cannot read from this NetworkStream.");
		}

		table = Deserializer(m_buffer);
		dataGrid->DataSource = table;
	}

public:
	void myReadCallBack(IAsyncResult^ ar)
	{
		NetworkStream^ myNetworkStream = safe_cast<NetworkStream^>(ar->AsyncState);
		int numberOfBytesRead = myNetworkStream->EndRead(ar);

		if(numberOfBytesAlreadyRead > 0) Array::Copy(myReadBuffer, 0, m_buffer, numberOfBytesAlreadyRead, numberOfBytesRead);
		numberOfBytesAlreadyRead += numberOfBytesRead;
		while (numberOfBytesAlreadyRead < m_buffer->Length) {

			numberOfBytesRead = 8192;
			if (m_buffer->Length - numberOfBytesAlreadyRead < numberOfBytesRead) numberOfBytesRead = m_buffer->Length - numberOfBytesAlreadyRead;
			myReadBuffer = gcnew array<Byte>(numberOfBytesRead);

			myNetworkStream->BeginRead(myReadBuffer, 0, numberOfBytesRead, gcnew AsyncCallback(this, &Form1::myReadCallBack), myNetworkStream);
		}

		autoEvent->Set();
	}
public:
	AutoResetEvent^ autoEvent;
	array<Byte>^ myReadBuffer;

	DataTable^ Deserializer(array<Byte>^ serializedTableData)
	{
		DataTable^ table;
		try {
			MemoryStream^ stream = gcnew MemoryStream(serializedTableData);
			//BinaryFormatter^ formatter = gcnew BinaryFormatter();
			IFormatter ^formatter = gcnew Formatters::Binary::BinaryFormatter();
			table = (DataTable^)formatter->Deserialize(stream);
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Alert");
		}
		return table;
	}
};
}

