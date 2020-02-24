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
	/// Сводка для CreateDB
	/// </summary>
	public ref class CreateDB : public System::Windows::Forms::Form
	{
	public:
		CreateDB(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		String^ title_name; //Имя подключенного МБД-файла

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
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
			this->groupBox1->Text = L"Имя новой БД и ее расположение:";
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
			this->label2->Text = L"Файл БД:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя БД:";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->Location = System::Drawing::Point(344, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Отмена";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(450, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ОК";
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
			this->Text = L"Создание Новой Базы Данных (БД)";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 folderBrowserDialog1->Description = "Выберите папку, куда будет сохранен файл";
				 //Не позволяет пользователю создавать новые файлы через FolderBrowserDialog
				 folderBrowserDialog1->ShowNewFolderButton = false;

				 if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 label3->Text = folderBrowserDialog1->SelectedPath + "\\" + textBox1->Text + ".mdb";
					 button3->Enabled = true;
				 }
			 }


			 //проверка вводимых символов в текстовое поле
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 //нельзя ! . ,
			 if(e->KeyChar == '!' || e->KeyChar == '.' || e->KeyChar == ',')
				 //если событие произошло - true
				 e->Handled = true;
		 }


		 //проверка на заполнение тестового поля
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text->Length != 0)
				 button1->Enabled = true; 
			 else
				 button1->Enabled = false;
		 }


		 //копирование базы в указанное мместо
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ str_path = label3->Text;
			 try
			 {
				 IO::File::Copy(Application::StartupPath + L"\\FOND.mdb", str_path, false);
				 MessageBox::Show("Файл успешно создан", "Сообщение", MessageBoxButtons::OK, 
							 MessageBoxIcon::Information);
				 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 title_name = L"МБД-файл: " + label3->Text;
				 this->Close();
			 }
			 catch(...)
			 {
				 if(IO::File::Exists(str_path) == true) {		// Файл в указанной папке уже есть
					 if (MessageBox::Show("Файл с таким именем в папке уже существует. Перезаписать?", "Ошибка", 
						 MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK)
					 {   // Удалить существующий файл
						 IO::File::Delete (str_path);
						 // Снова скопировать файл
						 IO::File::Copy (Application::StartupPath + L"\\FOND.mdb", str_path, false);
						 this->DialogResult = System::Windows::Forms::DialogResult::OK; // Вернуть OK
						 title_name = L"МБД-файл: " + label3->Text; //Имя подключенного МБД-файла
						 this->Close();
					}
				 }
				 else // Другая ошибка
					 MessageBox::Show("Невозможно создать БД в указанной папке", "Ошибка", 
						 MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
		 }
};
}
