#pragma once

#include <windows.h>
#include "ConnectionDB.h"
#include "CreateDB.h"
#include "EnterTheme.h"
#include "EnterTask.h"

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


	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  workDB;
	private: System::Windows::Forms::ToolStripMenuItem^  enterTheme;


	private: System::Windows::Forms::ToolStripMenuItem^  editTask;












	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  TemaOleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;
	private: System::Data::DataColumn^  dataColumn3;
	private: System::Data::DataColumn^  dataColumn4;
	private: System::Data::DataColumn^  dataColumn5;
	private: System::Data::DataColumn^  dataColumn6;
	private: System::Data::DataTable^  dataTable2;
	private: System::Data::DataColumn^  dataColumn7;
	private: System::Data::DataColumn^  dataColumn8;
	private: System::Data::DataColumn^  dataColumn9;
	private: System::Data::DataColumn^  dataColumn10;
	private: System::Data::DataColumn^  dataColumn11;
	private: System::Data::DataColumn^  dataColumn12;
	private: System::Data::DataColumn^  dataColumn13;


























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
			this->workDB = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enterTheme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editTask = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->TemaOleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dataColumn3 = (gcnew System::Data::DataColumn());
			this->dataColumn4 = (gcnew System::Data::DataColumn());
			this->dataColumn5 = (gcnew System::Data::DataColumn());
			this->dataColumn6 = (gcnew System::Data::DataColumn());
			this->dataTable2 = (gcnew System::Data::DataTable());
			this->dataColumn7 = (gcnew System::Data::DataColumn());
			this->dataColumn8 = (gcnew System::Data::DataColumn());
			this->dataColumn9 = (gcnew System::Data::DataColumn());
			this->dataColumn10 = (gcnew System::Data::DataColumn());
			this->dataColumn11 = (gcnew System::Data::DataColumn());
			this->dataColumn12 = (gcnew System::Data::DataColumn());
			this->dataColumn13 = (gcnew System::Data::DataColumn());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->createConnectionDBToolStripMenuItem, 
				this->workDB});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(518, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// createConnectionDBToolStripMenuItem
			// 
			this->createConnectionDBToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->createDBToolStripMenuItem, 
				this->connectionDBToolStripMenuItem, this->toolStripSeparator1, this->exiteToolStripMenuItem});
			this->createConnectionDBToolStripMenuItem->Name = L"createConnectionDBToolStripMenuItem";
			this->createConnectionDBToolStripMenuItem->Size = System::Drawing::Size(172, 20);
			this->createConnectionDBToolStripMenuItem->Text = L"Создание/Подключение БД";
			// 
			// createDBToolStripMenuItem
			// 
			this->createDBToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"createDBToolStripMenuItem.Image")));
			this->createDBToolStripMenuItem->Name = L"createDBToolStripMenuItem";
			this->createDBToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->createDBToolStripMenuItem->Text = L"Создание БД";
			this->createDBToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::CreateBD_Click);
			// 
			// connectionDBToolStripMenuItem
			// 
			this->connectionDBToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"connectionDBToolStripMenuItem.Image")));
			this->connectionDBToolStripMenuItem->Name = L"connectionDBToolStripMenuItem";
			this->connectionDBToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->connectionDBToolStripMenuItem->Text = L"Подключение БД";
			this->connectionDBToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clickConnection);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(167, 6);
			// 
			// exiteToolStripMenuItem
			// 
			this->exiteToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exiteToolStripMenuItem.Image")));
			this->exiteToolStripMenuItem->Name = L"exiteToolStripMenuItem";
			this->exiteToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->exiteToolStripMenuItem->Text = L"Выход";
			this->exiteToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clickExit);
			// 
			// workDB
			// 
			this->workDB->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->enterTheme, this->editTask});
			this->workDB->Enabled = false;
			this->workDB->Name = L"workDB";
			this->workDB->Size = System::Drawing::Size(84, 20);
			this->workDB->Text = L"Работа с БД";
			// 
			// enterTheme
			// 
			this->enterTheme->Name = L"enterTheme";
			this->enterTheme->Size = System::Drawing::Size(176, 22);
			this->enterTheme->Text = L"Работа с темами";
			this->enterTheme->ToolTipText = L"Добавление, удаление, редактирование тем";
			this->enterTheme->Click += gcnew System::EventHandler(this, &Form1::EnterTheme_Click);
			// 
			// editTask
			// 
			this->editTask->Name = L"editTask";
			this->editTask->Size = System::Drawing::Size(176, 22);
			this->editTask->Text = L"Работа с задачами";
			this->editTask->ToolTipText = L"Добавление, удаление, редактирование задач";
			this->editTask->Click += gcnew System::EventHandler(this, &Form1::EnterTask_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->toolStripButton3, 
				this->toolStripButton1, this->toolStripSeparator2, this->toolStripButton2});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(518, 25);
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
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\TEMP\\Diplom\\Demo1410\\Debug\\FOND.m" 
				L"db";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT Tema.*\r\nFROM     Tema";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `Tema` (`Names`, `Sloj_min`, `Sloj_max`, `Trud_min`, `Trud_max`) VALU" 
				L"ES (\?, \?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"Names", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"Names")), (gcnew System::Data::OleDb::OleDbParameter(L"Sloj_min", System::Data::OleDb::OleDbType::UnsignedTinyInt, 
				0, L"Sloj_min")), (gcnew System::Data::OleDb::OleDbParameter(L"Sloj_max", System::Data::OleDb::OleDbType::UnsignedTinyInt, 
				0, L"Sloj_max")), (gcnew System::Data::OleDb::OleDbParameter(L"Trud_min", System::Data::OleDb::OleDbType::Single, 0, L"Trud_min")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Trud_max", System::Data::OleDb::OleDbType::Single, 0, L"Trud_max"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(16) {(gcnew System::Data::OleDb::OleDbParameter(L"Names", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"Names")), (gcnew System::Data::OleDb::OleDbParameter(L"Sloj_min", System::Data::OleDb::OleDbType::UnsignedTinyInt, 
				0, L"Sloj_min")), (gcnew System::Data::OleDb::OleDbParameter(L"Sloj_max", System::Data::OleDb::OleDbType::UnsignedTinyInt, 
				0, L"Sloj_max")), (gcnew System::Data::OleDb::OleDbParameter(L"Trud_min", System::Data::OleDb::OleDbType::Single, 0, L"Trud_min")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Trud_max", System::Data::OleDb::OleDbType::Single, 0, L"Trud_max")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Names", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Names", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Names", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Names", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Sloj_min", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Sloj_min", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Sloj_min", 
				System::Data::OleDb::OleDbType::UnsignedTinyInt, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Sloj_min", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Sloj_max", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Sloj_max", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Sloj_max", 
				System::Data::OleDb::OleDbType::UnsignedTinyInt, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Sloj_max", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Trud_min", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Trud_min", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Trud_min", 
				System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Trud_min", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Trud_max", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Trud_max", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Trud_max", 
				System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Trud_max", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(11) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_ID", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Names", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Names", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Names", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Names", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Sloj_min", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Sloj_min", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Sloj_min", 
				System::Data::OleDb::OleDbType::UnsignedTinyInt, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Sloj_min", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Sloj_max", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Sloj_max", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Sloj_max", 
				System::Data::OleDb::OleDbType::UnsignedTinyInt, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Sloj_max", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Trud_min", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Trud_min", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Trud_min", 
				System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Trud_min", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_Trud_max", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"Trud_max", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Trud_max", 
				System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Trud_max", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// TemaOleDbDataAdapter1
			// 
			this->TemaOleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->TemaOleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->TemaOleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"ID", 
				L"ID")), (gcnew System::Data::Common::DataColumnMapping(L"Names", L"Names")), (gcnew System::Data::Common::DataColumnMapping(L"Sloj_min", 
				L"Sloj_min")), (gcnew System::Data::Common::DataColumnMapping(L"Sloj_max", L"Sloj_max")), (gcnew System::Data::Common::DataColumnMapping(L"Trud_min", 
				L"Trud_min")), (gcnew System::Data::Common::DataColumnMapping(L"Trud_max", L"Trud_max"))};
			this->TemaOleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Tema", __mcTemp__1))});
			this->TemaOleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(2) {this->dataTable1, this->dataTable2});
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {this->dataColumn1, this->dataColumn2, 
				this->dataColumn3, this->dataColumn4, this->dataColumn5, this->dataColumn6});
			cli::array< System::String^ >^ __mcTemp__2 = gcnew cli::array< System::String^  >(1) {L"ID"};
			this->dataTable1->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__2, false))});
			this->dataTable1->TableName = L"Tema";
			// 
			// dataColumn1
			// 
			this->dataColumn1->AllowDBNull = false;
			this->dataColumn1->AutoIncrement = true;
			this->dataColumn1->ColumnName = L"ID";
			this->dataColumn1->DataType = System::Int16::typeid;
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Names";
			// 
			// dataColumn3
			// 
			this->dataColumn3->ColumnName = L"Sloj_min";
			this->dataColumn3->DataType = System::Byte::typeid;
			// 
			// dataColumn4
			// 
			this->dataColumn4->ColumnName = L"Sloj_max";
			this->dataColumn4->DataType = System::Byte::typeid;
			// 
			// dataColumn5
			// 
			this->dataColumn5->ColumnName = L"Trud_min";
			this->dataColumn5->DataType = System::Double::typeid;
			// 
			// dataColumn6
			// 
			this->dataColumn6->ColumnName = L"Trud_max";
			this->dataColumn6->DataType = System::Double::typeid;
			// 
			// dataTable2
			// 
			this->dataTable2->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(7) {this->dataColumn7, this->dataColumn8, 
				this->dataColumn9, this->dataColumn10, this->dataColumn11, this->dataColumn12, this->dataColumn13});
			this->dataTable2->TableName = L"Zadacha";
			// 
			// dataColumn7
			// 
			this->dataColumn7->ColumnName = L"ID";
			this->dataColumn7->DataType = System::Int16::typeid;
			// 
			// dataColumn8
			// 
			this->dataColumn8->ColumnName = L"ID_tema";
			this->dataColumn8->DataType = System::Int16::typeid;
			// 
			// dataColumn9
			// 
			this->dataColumn9->ColumnName = L"Text";
			// 
			// dataColumn10
			// 
			this->dataColumn10->ColumnName = L"Sloj";
			this->dataColumn10->DataType = System::Byte::typeid;
			// 
			// dataColumn11
			// 
			this->dataColumn11->ColumnName = L"Trud";
			this->dataColumn11->DataType = System::Double::typeid;
			// 
			// dataColumn12
			// 
			this->dataColumn12->ColumnName = L"Type_otvet";
			this->dataColumn12->DataType = System::Char::typeid;
			// 
			// dataColumn13
			// 
			this->dataColumn13->ColumnName = L"Img";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 334);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"База Данных (БД)";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataTable2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int kol_tem; //кол-во тем в базе

		//Подключение к БД
	private: System::Void clickConnection(System::Object^  sender, System::EventArgs^  e) {
				 ConnectionDB^ connectionDB = gcnew ConnectionDB();
				 if (connectionDB->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 this->Text = connectionDB->title_name;
					 //пунк меню "работа с бд" подключен
					 menuStrip1->Items["workDB"]->Enabled = true;
					 //проверка на наличие в базе тем
					 ThemeCheck();
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
				 //пунк меню "работа с бд" подключен
				 menuStrip1->Items["workDB"]->Enabled = true;
				 //проверка на наличие в базе тем
				 ThemeCheck();
			 }
		 }

		 //Проверка на наличие тем в базе
private: System::Void ThemeCheck() {
			 String^ titleStr = this->Text;
			 //"чистый" путь до базы
			 String^ baseName = titleStr->Substring(this->Text->IndexOf(":") + 2);

			 String^ connectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + baseName;
			 OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
			 conn->Open();
			 OleDbCommand^ cmd = gcnew OleDbCommand("SELECT COUNT(*) FROM Tema", conn);
			 String^ strn = cmd->ExecuteScalar()->ToString();
			 conn->Close();
			 
			 kol_tem = System::Convert::ToInt32(strn);
			 if (kol_tem < 1) {
				 this->editTask->Enabled = false;
			 }	
			 else {
				 this->editTask->Enabled = true;
			 }

			 this->oleDbConnection1->ConnectionString = connectionString;
			 oleDbConnection1->Open();
			 TemaOleDbDataAdapter1->Fill(dataSet1);
			 oleDbConnection1->Close();
		 }
			 

			 

		 //Создание, редактирование, удаление тем
private: System::Void EnterTheme_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ titleStr = this->Text;
			 String^ baseName = titleStr->Substring(this->Text->IndexOf(":") + 2);

			 EnterTheme^ enterTheme = gcnew EnterTheme(dataSet1);
			 if (enterTheme->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				 String^ connectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + baseName;
				 this->oleDbConnection1->ConnectionString = connectionString;
				 oleDbConnection1->Open();
				 TemaOleDbDataAdapter1->Update(dataSet1);
				 oleDbConnection1->Close();
				 dataSet1->Clear();	//очистка данных
				 ThemeCheck(); //начальное чтение из базы
			 }
		 }
private: System::Void EnterTask_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ titleStr = this->Text;
			 String^ baseName = titleStr->Substring(this->Text->IndexOf(":") + 2);

			 EnterTask^ enterTask = gcnew EnterTask(dataSet1, baseName);
			 if(enterTask->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				 MessageBox::Show("kaka", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 }
		 }
};
}

