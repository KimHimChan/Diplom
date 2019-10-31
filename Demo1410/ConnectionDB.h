#pragma once

namespace Demo1410 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;

	/// <summary>
	/// ������ ��� ConnectionDB
	/// </summary>
	public ref class ConnectionDB : public System::Windows::Forms::Form
	{
	public:
		ConnectionDB(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
		String^ title_name;	//��� ������������� ���-�����

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~ConnectionDB()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(147, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������� ���� ��� �����������";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"������� ���� ���� ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConnectionDB::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"����:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(104, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 17);
			this->label3->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(375, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 4;
			this->button2->Text = L"������";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(481, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 5;
			this->button3->Text = L"��";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"���-�����|*.mdb|��� �����|*.*";
			this->openFileDialog1->Title = L"����� �����";
			// 
			// ConnectionDB
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 231);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ConnectionDB";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"����������� � ���� ������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 label3->Text = openFileDialog1->FileName;
					 try
					 {
						 String^ connectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + label3->Text;
						 
						 OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
						 OleDbDataAdapter^ dataAdapter = gcnew OleDbDataAdapter();
						 conn->Open();
						 dataAdapter->SelectCommand = gcnew OleDbCommand("SELECT * FROM Tema",conn);
						 dataAdapter->SelectCommand->Connection = conn;
						 dataAdapter->SelectCommand->ExecuteNonQuery();
						 conn->Close();

						 this->button3->Enabled = true;
						 MessageBox::Show("���� ������� ���������", "���������", MessageBoxButtons::OK, 
							 MessageBoxIcon::Information);
						 title_name = L"���-����: " + label3->Text;
					 }
					 catch(...)
					 {
						 MessageBox::Show("������ ���� �� �������� ������ ���� ������, ��� ��� ��������� ����������", "������", 
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
				 }
			 }
};
}
