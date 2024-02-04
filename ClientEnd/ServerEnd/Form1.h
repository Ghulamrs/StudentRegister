#pragma once

namespace ServerEnd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Net::Sockets;

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
            String^ hostname = Dns::GetHostName();
            array<IPAddress^>^ address = Dns::GetHostEntry(hostname)->AddressList;
            server = address[0];		
//			label1->CheckForIllegalCrossThreadCalls = false;
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"&Listen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Location = System::Drawing::Point(8, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Message";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(842, 616);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 
		delegate void ShowString(String^ string);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			try
            {
				listenerThread = gcnew Thread(gcnew ParameterizedThreadStart(this, &Form1::listenerThreadFunction));
                listenerThread->Start();
				button1->Enabled = false;
            }
            catch (Exception^ er)
            {
                MessageBox::Show(er->Message);
            }
		}
	public: 
		void messageReceived(String^ string)
		{
			label1->Text = string;
		}

		void listenerThreadFunction(Object^ object)
		{
			//Form1^ form = static_cast<Form1^>(object);
			try {
                listener = gcnew TcpListener(server, 2054);
                listener->Start();
  
				while (true) {
					TcpClient^ client = listener->AcceptTcpClient();
					NetworkStream^ stream = client->GetStream();
					MessageBox::Show("A client connected!", "Alert");

					showString = gcnew ShowString(this, &Form1::messageReceived);
					serverThread = gcnew Thread(gcnew ParameterizedThreadStart(this, &Form1::serverThreadFunction));
					serverThread->Start(stream);
				}
			}
            catch (Exception^ er)
            {
                MessageBox::Show(er->Message);
            }
		}

		void serverThreadFunction(Object^ object)
		{		
			NetworkStream^ stream = static_cast<NetworkStream^>(object);

			try {
				BinaryReader^ reader = gcnew BinaryReader(stream);
				while (true) {
					if (stream->DataAvailable) {
						String^ msg = reader->ReadString();
						label1->Invoke(showString, msg);
					}
				}
			}
            catch (Exception^ er)
            {
                MessageBox::Show(er->Message);
            }
		}

	public:
		IPAddress^ server;
		TcpListener^ listener;
//		NetworkStream^ streamList;

//		Threads and Dele
		Thread^ listenerThread;
		Thread^ serverThread;
		ShowString^ showString;
	};
}

