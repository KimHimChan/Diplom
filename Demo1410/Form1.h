#pragma once

#include <windows.h>
#include "ConnectionDB.h"
#include "CreateDB.h"

namespace Demo1410 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  createConnectionDBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  createDBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  connectionDBToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  exiteToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;

	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Data::DataSet^  dataSet1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->createConnectionDBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createDBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->connectionDBToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exiteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->createConnectionDBToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(990, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// createConnectionDBToolStripMenuItem
			// 
			this->createConnectionDBToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->createDBToolStripMenuItem, 
				this->connectionDBToolStripMenuItem, this->toolStripSeparator1, this->exiteToolStripMenuItem});
			this->createConnectionDBToolStripMenuItem->Name = L"createConnectionDBToolStripMenuItem";
			this->createConnectionDBToolStripMenuItem->Size = System::Drawing::Size(214, 24);
			this->createConnectionDBToolStripMenuItem->Text = L"Создание/Подключение БД";
			// 
			// createDBToolStripMenuItem
			// 
			this->createDBToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"createDBToolStripMenuItem.Image")));
			this->createDBToolStripMenuItem->Name = L"createDBToolStripMenuItem";
			this->createDBToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->createDBToolStripMenuItem->Text = L"Создание БД";
			this->createDBToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::CreateBD_Click);
			// 
			// connectionDBToolStripMenuItem
			// 
			this->connectionDBToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"connectionDBToolStripMenuItem.Image")));
			this->connectionDBToolStripMenuItem->Name = L"connectionDBToolStripMenuItem";
			this->connectionDBToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->connectionDBToolStripMenuItem->Text = L"Подключение БД";
			this->connectionDBToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clickConnection);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(195, 6);
			// 
			// exiteToolStripMenuItem
			// 
			this->exiteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exiteToolStripMenuItem.Image")));
			this->exiteToolStripMenuItem->Name = L"exiteToolStripMenuItem";
			this->exiteToolStripMenuItem->Size = System::Drawing::Size(198, 24);
			this->exiteToolStripMenuItem->Text = L"Выход";
			this->exiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clickExit);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripButton3, 
				this->toolStripButton1, this->toolStripSeparator2, this->toolStripButton2});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(990, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->ToolTipText = L"Создать БД";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::CreateBD_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->ToolTipText = L"Подключить БД";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Form1::clickConnection);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->ToolTipText = L"Выход";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::clickExit);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(990, 636);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"База Данных (БД)";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Подключение к БД
	private: System::Void clickConnection(System::Object^  sender, System::EventArgs^  e) {
				 ConnectionDB^ connectionDB = gcnew ConnectionDB();
				 if (connectionDB->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 this->Text = connectionDB->title_name;
				 }
			 }

		//Выход из приложения
private: System::Void clickExit(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }

		 //Создание БД
private: System::Void CreateBD_Click(System::Object^  sender, System::EventArgs^  e) {
			 CreateDB^ createDB = gcnew CreateDB();
			 if (createDB->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				 this->Text = createDB->title_name;
			 }
		 }
};
}

