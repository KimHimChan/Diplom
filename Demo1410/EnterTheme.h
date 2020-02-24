#pragma once

namespace Demo1410 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::OleDb;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для EnterTheme
	/// </summary>
	public ref class EnterTheme : public System::Windows::Forms::Form
	{
	public:
		EnterTheme(DataSet^ data_set)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			dataSet = data_set;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EnterTheme()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::BindingNavigator^  bindingNavigator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorAddNewItem;
	private: System::Windows::Forms::ToolStripLabel^  bindingNavigatorCountItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorDeleteItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveFirstItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMovePreviousItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator;
	private: System::Windows::Forms::ToolStripTextBox^  bindingNavigatorPositionItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator1;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveNextItem;
	private: System::Windows::Forms::ToolStripButton^  bindingNavigatorMoveLastItem;
	private: System::Windows::Forms::ToolStripSeparator^  bindingNavigatorSeparator2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;













	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EnterTheme::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 399);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Наименование темы:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 396);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->MaxLength = 60;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(383, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &EnterTheme::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(678, 439);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnterTheme::Insert_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 422);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Минимальная сложность:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(282, 422);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Максильмальная сложность:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 444);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Минимальная трудоемкость:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(282, 444);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(161, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Максимальная трудоемкость:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(434, 419);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &EnterTheme::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(163, 442);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(90, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &EnterTheme::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(434, 442);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(90, 20);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &EnterTheme::textBox5_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(10, 10);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(743, 354);
			this->dataGridView1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(163, 419);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(90, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &EnterTheme::textBox2_TextChanged);
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = nullptr;
			this->bindingNavigator1->Dock = System::Windows::Forms::DockStyle::None;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {this->bindingNavigatorMoveFirstItem, 
				this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem, 
				this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2, 
				this->bindingNavigatorAddNewItem, this->toolStripButton1, this->bindingNavigatorDeleteItem, this->toolStripButton2});
			this->bindingNavigator1->Location = System::Drawing::Point(10, 366);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(297, 25);
			this->bindingNavigator1->TabIndex = 16;
			this->bindingNavigator1->Text = L"bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this->bindingNavigatorAddNewItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorAddNewItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorAddNewItem.Image")));
			this->bindingNavigatorAddNewItem->Name = L"bindingNavigatorAddNewItem";
			this->bindingNavigatorAddNewItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorAddNewItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorAddNewItem->Text = L"Добавить";
			this->bindingNavigatorAddNewItem->Click += gcnew System::EventHandler(this, &EnterTheme::bindingNavigatorAddNewItem_Click);
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(43, 22);
			this->bindingNavigatorCountItem->Text = L"для {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Общее число элементов";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this->bindingNavigatorMoveFirstItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveFirstItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMoveFirstItem.Image")));
			this->bindingNavigatorMoveFirstItem->Name = L"bindingNavigatorMoveFirstItem";
			this->bindingNavigatorMoveFirstItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveFirstItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveFirstItem->Text = L"Переместить в начало";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this->bindingNavigatorMovePreviousItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMovePreviousItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMovePreviousItem.Image")));
			this->bindingNavigatorMovePreviousItem->Name = L"bindingNavigatorMovePreviousItem";
			this->bindingNavigatorMovePreviousItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMovePreviousItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMovePreviousItem->Text = L"Переместить назад";
			// 
			// bindingNavigatorSeparator
			// 
			this->bindingNavigatorSeparator->Name = L"bindingNavigatorSeparator";
			this->bindingNavigatorSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorPositionItem
			// 
			this->bindingNavigatorPositionItem->AccessibleName = L"Положение";
			this->bindingNavigatorPositionItem->AutoSize = false;
			this->bindingNavigatorPositionItem->Name = L"bindingNavigatorPositionItem";
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(38, 23);
			this->bindingNavigatorPositionItem->Text = L"0";
			this->bindingNavigatorPositionItem->ToolTipText = L"Текущее положение";
			// 
			// bindingNavigatorSeparator1
			// 
			this->bindingNavigatorSeparator1->Name = L"bindingNavigatorSeparator1";
			this->bindingNavigatorSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this->bindingNavigatorMoveNextItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveNextItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMoveNextItem.Image")));
			this->bindingNavigatorMoveNextItem->Name = L"bindingNavigatorMoveNextItem";
			this->bindingNavigatorMoveNextItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveNextItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveNextItem->Text = L"Переместить вперед";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this->bindingNavigatorMoveLastItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorMoveLastItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorMoveLastItem.Image")));
			this->bindingNavigatorMoveLastItem->Name = L"bindingNavigatorMoveLastItem";
			this->bindingNavigatorMoveLastItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorMoveLastItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorMoveLastItem->Text = L"Переместить в конец";
			// 
			// bindingNavigatorSeparator2
			// 
			this->bindingNavigatorSeparator2->Name = L"bindingNavigatorSeparator2";
			this->bindingNavigatorSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Enabled = false;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Редактировать";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &EnterTheme::toolStripButton1_Click);
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Enabled = false;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorDeleteItem->Text = L"Удалить";
			this->bindingNavigatorDeleteItem->Click += gcnew System::EventHandler(this, &EnterTheme::bindingNavigatorDeleteItem_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Enabled = false;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Подтвердить изменения";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &EnterTheme::toolStripButton2_Click);
			// 
			// EnterTheme
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 475);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EnterTheme";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Работа с темами";
			this->Load += gcnew System::EventHandler(this, &EnterTheme::Load_Form);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		DataSet^ dataSet; //источник данных
		int flag; // флаг для просмотра(0), добавления(1), редактирования(2)
		int check; //проверка для ввода(0 - не нужна, 1 - нужна)

		//Загрузка формы
	private: System::Void Load_Form(System::Object^  sender, System::EventArgs^  e) {

				 bindingSource1->DataSource = dataSet;
				 bindingSource1->DataMember = "Tema";
				 //подключение к источнику данных
				 dataGridView1->DataSource = bindingSource1; 
				 bindingNavigator1->BindingSource = bindingSource1;
				 //привязка textBox-ов к столбцам таблицы
				 textBox1->DataBindings->Add((gcnew Binding(L"Text", bindingSource1, L"Names")));
				 textBox2->DataBindings->Add((gcnew Binding(L"Text", bindingSource1, L"Sloj_min")));
				 textBox3->DataBindings->Add((gcnew Binding(L"Text", bindingSource1, L"Sloj_max")));
				 textBox4->DataBindings->Add((gcnew Binding(L"Text", bindingSource1, L"Trud_min")));
				 textBox5->DataBindings->Add((gcnew Binding(L"Text", bindingSource1, L"Trud_max")));
				 //заголовки столбцов
				 dataGridView1->Columns["ID"]->Visible = false;
				 dataGridView1->RowHeadersVisible = false;
				 dataGridView1->AllowUserToAddRows = false;
				 dataGridView1->Columns["Names"]->HeaderCell->Value = "Название";
				 dataGridView1->Columns["Names"]->Width = 340;
				 dataGridView1->Columns["Sloj_min"]->HeaderCell->Value = "Мин. сложность";
				 dataGridView1->Columns["Sloj_max"]->HeaderCell->Value = "Макс. сложность";
				 dataGridView1->Columns["Trud_min"]->HeaderCell->Value = "Мин. трудоемкость";
				 dataGridView1->Columns["Trud_max"]->HeaderCell->Value = "Макс. трудоемкость";

				 flag = 0; //находимся в режиме просмотра
				 Proverka(); //определение доступности кнопок

				 int count_rec = bindingSource1->Count;
				 if (count_rec != 0) {
					 DataRowView^ row = (DataRowView^) bindingSource1->Current; // текущая строка
				 }
				 
			 }
private: System::Void Insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Validate(); //проверяет значение элемента управления, потерявшего фокус
			 this->bindingSource1->EndEdit();
		 }

		 //кнопка добавить на навигаторе
private: System::Void bindingNavigatorAddNewItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 BtnGridEnabledFalse(); //навигатор и грид не доступны
			 bindingNavigatorAddNewItem->Enabled = false; //кнопка Добавить доступна
			 toolStripButton1->Enabled = false; //кнопка Редактировать не доступна
			 bindingNavigatorDeleteItem->Enabled = true; //кнопка Удалить доступна
			 toolStripButton2->Enabled = false; //кнопка СохранитьИзменения не доступна
			 //поля ввода готовы к записи
			 textBox1->Enabled = true;
			 textBox2->Enabled = true; 
			 textBox3->Enabled = true; 
			 textBox4->Enabled = true; 
			 textBox5->Enabled = true; 
			 button1->Enabled = false; //кнопка ОК не активна
			 textBox1->Focus(); //фокус передан полю ввода
			 flag = 1; //включен режим добавления
			 //check = 0; //проверка не нужна
		 }

		 //кнопка редактировать на навигаторе
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 BtnGridEnabledFalse();
			 textBox1->SelectionStart = textBox1->Text->Length; //курсор встает в конец названия темы
			 toolStripButton2->Enabled = true; //кнопка СохранитьИзменения доступна
			 bindingNavigatorAddNewItem->Enabled = false; //кнопка Добавить не доступна
			 toolStripButton1->Enabled = false;	//кнопка Редактировать не доступна
			 bindingNavigatorDeleteItem->Enabled = true; //кнопка Удалить доступна
			 button1->Enabled = false; //кнопка Записать не доступна
			 flag = 2; //включен режим редактирования

			 textBox1->Enabled = true;
			 textBox2->Enabled = true;
			 textBox3->Enabled = true;
			 textBox4->Enabled = true;
			 textBox5->Enabled = true;
			 //check = 1; //проверка нужна
		 }

		 //кнопка удалить на навигаторе
private: System::Void bindingNavigatorDeleteItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 BtnGridEnabledTrue(); //грид и навигатор доступны
			 //поля для ввода перестали быть доступны
			 textBox1->Enabled = false;
			 textBox2->Enabled = false;
			 textBox3->Enabled = false;
			 textBox4->Enabled = false;
			 textBox5->Enabled = false;
			 bindingNavigatorAddNewItem->Enabled = true; //кнопка Добавить стала активной
			 toolStripButton2->Enabled = false; //кнопка Подтвердить стала недоступна
			 
			 if(flag == 1) { //если в режиме добавления
				 bindingSource1->RemoveCurrent(); //удаляем элемент
				 toolStripButton2->Enabled = false; //кнопка Подтвердить не активна
				 //dataGridView1->Focus();
				 
				 int count_rec = bindingSource1->Count;
				 if(count_rec > 0) dataGridView1->Rows[count_rec - 1]->Selected = true; //выделение последненй записи
			 }
			 else {
				 if(flag == 2) { //если в режиме редактирования
					 bindingSource1->CancelEdit();
					 toolStripButton2->Enabled = false; //кнопка Подтвердить не активна
				 }
				 else {
					 if(flag == 0) { //если в режиме просмотра
						 int numItem = System::Convert::ToInt32(bindingNavigator1->PositionItem->Text);
						 String^ message = L"Вы действительно хотите удалить эту тему?";
						 if(MessageBox::Show(message, "Удаление темы",MessageBoxButtons::OKCancel, MessageBoxIcon::Question,
							  MessageBoxDefaultButton::Button2) == System::Windows::Forms::DialogResult::OK) {
								  bindingSource1->RemoveCurrent(); //удаление темы
						 }
					 }
					 int count_rec = bindingSource1->Count;
					 if(count_rec > 0) dataGridView1->Rows[count_rec - 1]->Selected = true; //выделение последненй записи
				 }
			 }
			 flag = 0; //переходим в режим просмотра
			 button1->Enabled = true; //кнопка ОК активна
			 Proverka(); //определение активности кнопок
			 dataGridView1->Focus(); //фокус передан таблице
		 }

		 //кнопка подтвердить на навигаторе
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 BtnGridEnabledTrue(); //грид и навигатор доступны
			 //поля для ввода перестали быть доступны
			 textBox1->Enabled = false;
			 textBox2->Enabled = false;
			 textBox3->Enabled = false;
			 textBox4->Enabled = false;
			 textBox5->Enabled = false;
			 button1->Enabled = true; //кнопкка ОК доступна
			 bindingNavigatorAddNewItem->Enabled = true; //кнопка Добавить стала активной
			 toolStripButton1->Enabled = true; //кнопка Редактировать стала активной
			 toolStripButton2->Enabled = false; //кнопка Подтвердить стала недоступна
			 if (flag == 1 || flag == 2) flag = 0; //если находимся не в режиме просмотра, то переключаемся в режим просмотра
			 bindingSource1->EndEdit(); //выходим из режима редактирования
			 dataGridView1->Focus(); //фокус передан таблице
		 }

		 //проверка для названия
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 TxtBoxTextChanged();
		 }

		 //проверка для поля мин. сложность
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 TxtBoxTextChanged();
		 }

		 //проверка для поля макс. сложность
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 TxtBoxTextChanged();
		 }

		 //проверка для поля мин. трудоемкость
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 TxtBoxTextChanged();
		 }

		 //проверка для поля макс. рудоемкость
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 TxtBoxTextChanged();
		 }

		 //проверка на непустоту полей
private: System::Void TxtBoxTextChanged() {
			 if (flag ==1 || flag == 2) {	//если режим добавления или редактирования
				 if (textBox1->Text->Length != 0 && textBox2->Text->Length != 0 && textBox3->Text->Length != 0 
					 && textBox4->Text->Length != 0 && textBox5->Text->Length != 0) {
						 //проверка для мин. и макс.
					  if(System::Convert::ToInt32(textBox2->Text) <= System::Convert::ToInt32(textBox3->Text) && 
						  System::Convert::ToInt32(textBox4->Text) <= System::Convert::ToInt32(textBox5->Text))
						  toolStripButton2->Enabled = true; // кнопка сохранить изменения доступна
				 } 
				 else {
					 toolStripButton2->Enabled = false; // кнопка сохранить изменения не доступна
				 }
			 }
		 }

		 //доступность кнопок навигатора
private: System::Void Proverka() {
			 int count_rec = bindingSource1->Count;
			 //если нет записей
			 if (count_rec == 0) {
				 bindingNavigatorAddNewItem->Enabled = true; //кнопка Добавить доступна
				 toolStripButton1->Enabled = false;
				 bindingNavigatorDeleteItem->Enabled = false;
				 LoadBtn();
			 }
			 //если записи есть
			 else {
				 DataRowView^ row = (DataRowView^) bindingSource1->Current; // текущая строка
				 toolStripButton1->Enabled = true;	//кнопка Редактировать доступна
				 bindingNavigatorDeleteItem->Enabled = true; //кнопка Удалить доступна
				 toolStripButton2->Enabled = false; //кнопка СохранитьИзменения не доступна
				 LoadBtn();
			 }
		 }

		 //при загрузке формы кнопки неактивны
private: System::Void LoadBtn() {
			 dataGridView1->ReadOnly = true;
			 textBox1->Enabled = false;
			 textBox2->Enabled = false;
			 textBox3->Enabled = false;
			 textBox4->Enabled = false;
			 textBox5->Enabled = false;
		 }
		 
		 //навигатор + грид не доступен
private: System::Void BtnGridEnabledFalse() {
			 dataGridView1->Enabled = false;
			 bindingNavigatorMoveFirstItem->Enabled = false;
			 bindingNavigatorMovePreviousItem->Enabled = false;
			 bindingNavigatorPositionItem->Enabled = false;
			 bindingNavigatorMoveNextItem->Enabled = false;
			 bindingNavigatorMoveLastItem->Enabled = false;
		 }

		 //навигатор + грид доступен
private: System::Void BtnGridEnabledTrue() {
			 dataGridView1->Enabled = true;
			 bindingNavigatorMoveFirstItem->Enabled = true;
			 bindingNavigatorMovePreviousItem->Enabled = true;
			 bindingNavigatorPositionItem->Enabled = true;
			 bindingNavigatorMoveNextItem->Enabled = true;
			 bindingNavigatorMoveLastItem->Enabled = true;
		 }

};
}
