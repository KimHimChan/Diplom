#pragma once

namespace Demo1410 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;
	using namespace System::Globalization;

	/// <summary>
	/// ������ ��� CreateDB
	/// </summary>
	public ref class CreateDB : public System::Windows::Forms::Form
	{
	public:
		CreateDB(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		String^ title_name; //��� ������������� ���-�����

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~CreateDB()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(535, 140);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��� ����� �� � �� ������������:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(422, 41);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(33, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreateDB::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(323, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CreateDB::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CreateDB::textBox1_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"���� ��:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"��� ��:";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(344, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"������";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(450, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"��";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CreateDB::button3_Click);
			// 
			// CreateDB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(562, 238);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CreateDB";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"�������� ����� ���� ������ (��)";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog1->Description = "�������� �����, ���� ����� �������� ����";
				 //�� ��������� ������������ ��������� ����� ����� ����� FolderBrowserDialog
				 folderBrowserDialog1->ShowNewFolderButton = false;

				 if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 label3->Text = folderBrowserDialog1->SelectedPath + "\\" + textBox1->Text + ".mdb";
					 button3->Enabled = true;
				 }
			 }


			 //�������� �������� �������� � ��������� ����
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 //������ ! . ,
			 if(e->KeyChar == '!' || e->KeyChar == '.' || e->KeyChar == ',')
				 //���� ������� ��������� - true
				 e->Handled = true;
		 }


		 //�������� �� ���������� ��������� ����
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text->Length != 0)
				 button1->Enabled = true; 
			 else
				 button1->Enabled = false;
		 }


		 //����������� ���� � ��������� ������
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ str_path = label3->Text;
			 try
			 {
				 IO::File::Copy(Application::StartupPath + L"\\FOND.mdb", str_path, false);
				 MessageBox::Show("���� ������� ������", "���������", MessageBoxButtons::OK, 
							 MessageBoxIcon::Information);
				 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 title_name = L"���-����: " + label3->Text;
				 this->Close();
			 }
			 catch(...)
			 {
				 if(IO::File::Exists(str_path) == true) {		// ���� � ��������� ����� ��� ����
					 if (MessageBox::Show("���� � ����� ������ � ����� ��� ����������. ������������?", "������", 
						 MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK)
					 {   // ������� ������������ ����
						 IO::File::Delete (str_path);
						 // ����� ����������� ����
						 IO::File::Copy (Application::StartupPath + L"\\FOND.mdb", str_path, false);
						 this->DialogResult = System::Windows::Forms::DialogResult::OK; // ������� OK
						 title_name = L"���-����: " + label3->Text; //��� ������������� ���-�����
						 this->Close();
					}
				 }
				 else // ������ ������
					 MessageBox::Show("���������� ������� �� � ��������� �����", "������", 
						 MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
};
}
