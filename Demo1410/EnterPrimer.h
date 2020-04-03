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
	/// Сводка для EnterPrimer
	/// </summary>
	public ref class EnterPrimer : public System::Windows::Forms::Form
	{
	public:
		EnterPrimer(DataSet^ data_set, String^ base_name)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			dataSet = data_set;
			baseName = base_name;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~EnterPrimer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::BindingSource^  bindingSource2;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton8;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton9;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::DataGridView^  dataGridViewGr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::Label^  label13;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EnterPrimer::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingNavigator1 = (gcnew System::Windows::Forms::BindingNavigator(this->components));
			this->bindingNavigatorAddNewItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorCountItem = (gcnew System::Windows::Forms::ToolStripLabel());
			this->bindingNavigatorDeleteItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveFirstItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMovePreviousItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorPositionItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bindingNavigatorSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->bindingNavigatorMoveNextItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorMoveLastItem = (gcnew System::Windows::Forms::ToolStripButton());
			this->bindingNavigatorSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewGr = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingNavigator1))->BeginInit();
			this->bindingNavigator1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewGr))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(153, 673);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(811, 186);
			this->dataGridView1->TabIndex = 0;
			// 
			// bindingNavigator1
			// 
			this->bindingNavigator1->AddNewItem = this->bindingNavigatorAddNewItem;
			this->bindingNavigator1->CountItem = this->bindingNavigatorCountItem;
			this->bindingNavigator1->DeleteItem = this->bindingNavigatorDeleteItem;
			this->bindingNavigator1->Dock = System::Windows::Forms::DockStyle::None;
			this->bindingNavigator1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(13) {this->bindingNavigatorMoveFirstItem, 
				this->bindingNavigatorMovePreviousItem, this->bindingNavigatorSeparator, this->bindingNavigatorPositionItem, this->bindingNavigatorCountItem, 
				this->bindingNavigatorSeparator1, this->bindingNavigatorMoveNextItem, this->bindingNavigatorMoveLastItem, this->bindingNavigatorSeparator2, 
				this->bindingNavigatorAddNewItem, this->toolStripButton2, this->bindingNavigatorDeleteItem, this->toolStripButton1});
			this->bindingNavigator1->Location = System::Drawing::Point(511, 9);
			this->bindingNavigator1->MoveFirstItem = this->bindingNavigatorMoveFirstItem;
			this->bindingNavigator1->MoveLastItem = this->bindingNavigatorMoveLastItem;
			this->bindingNavigator1->MoveNextItem = this->bindingNavigatorMoveNextItem;
			this->bindingNavigator1->MovePreviousItem = this->bindingNavigatorMovePreviousItem;
			this->bindingNavigator1->Name = L"bindingNavigator1";
			this->bindingNavigator1->PositionItem = this->bindingNavigatorPositionItem;
			this->bindingNavigator1->Size = System::Drawing::Size(309, 25);
			this->bindingNavigator1->TabIndex = 1;
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
			this->bindingNavigatorAddNewItem->Click += gcnew System::EventHandler(this, &EnterPrimer::bindingNavigatorAddNewItem_Click);
			// 
			// bindingNavigatorCountItem
			// 
			this->bindingNavigatorCountItem->Name = L"bindingNavigatorCountItem";
			this->bindingNavigatorCountItem->Size = System::Drawing::Size(43, 22);
			this->bindingNavigatorCountItem->Text = L"для {0}";
			this->bindingNavigatorCountItem->ToolTipText = L"Общее число элементов";
			// 
			// bindingNavigatorDeleteItem
			// 
			this->bindingNavigatorDeleteItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->bindingNavigatorDeleteItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bindingNavigatorDeleteItem.Image")));
			this->bindingNavigatorDeleteItem->Name = L"bindingNavigatorDeleteItem";
			this->bindingNavigatorDeleteItem->RightToLeftAutoMirrorImage = true;
			this->bindingNavigatorDeleteItem->Size = System::Drawing::Size(23, 22);
			this->bindingNavigatorDeleteItem->Text = L"Удалить";
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
			this->bindingNavigatorPositionItem->Size = System::Drawing::Size(50, 23);
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
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Редактировать";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton2_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(55, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(380, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EnterPrimer::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(163, 53);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &EnterPrimer::comboBox2_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(629, 281);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(446, 867);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(552, 866);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(510, 72);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(475, 197);
			this->richTextBox1->TabIndex = 29;
			this->richTextBox1->Text = L"(Здесь определяется шаблон задачи)";
			this->richTextBox1->SelectionChanged += gcnew System::EventHandler(this, &EnterPrimer::richTextBox1_SelectionChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(659, 867);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(910, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Записать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EnterPrimer::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Тема:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Сложность, Трудоемкость:";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(343, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"К задачам >";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EnterPrimer::Size_Update);
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripButton3, 
				this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7, this->toolStripButton8, this->toolStripButton9});
			this->toolStrip1->Location = System::Drawing::Point(511, 44);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(475, 25);
			this->toolStrip1->TabIndex = 52;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->CheckOnClick = true;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Полужирый";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->CheckOnClick = true;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"Курсив";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->CheckOnClick = true;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"Подчеркивание";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->CheckOnClick = true;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"Индекс";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->CheckOnClick = true;
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"Степень";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(23, 22);
			this->toolStripButton8->Text = L"Бесконечность";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton8_Click);
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(23, 22);
			this->toolStripButton9->Text = L"Буквы греческого алфавита";
			this->toolStripButton9->Click += gcnew System::EventHandler(this, &EnterPrimer::toolStripButton9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(514, 284);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Эталонный ответ:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(517, 311);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(191, 17);
			this->checkBox1->TabIndex = 54;
			this->checkBox1->Text = L"добавить изображение к задаче";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &EnterPrimer::checkBox1_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(511, 343);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(365, 157);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(889, 477);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 23);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Открыть файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EnterPrimer::open_File);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(514, 520);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 57;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->dataGridViewGr);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Location = System::Drawing::Point(15, 19);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(180, 115);
			this->panel3->TabIndex = 58;
			this->panel3->Visible = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(337, 259);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Закрыть";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &EnterPrimer::button9_Click);
			// 
			// button8
			// 
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(199, 221);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Вставить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &EnterPrimer::button8_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(12, 218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 26);
			this->textBox6->TabIndex = 7;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &EnterPrimer::textBox6_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 204);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 13);
			this->label14->TabIndex = 6;
			this->label14->Text = L"Выбранные буквы:";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(337, 169);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Добавить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &EnterPrimer::button7_Click);
			// 
			// dataGridViewGr
			// 
			this->dataGridViewGr->AllowUserToAddRows = false;
			this->dataGridViewGr->AllowUserToDeleteRows = false;
			this->dataGridViewGr->AllowUserToResizeColumns = false;
			this->dataGridViewGr->AllowUserToResizeRows = false;
			this->dataGridViewGr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewGr->ColumnHeadersVisible = false;
			this->dataGridViewGr->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, 
				this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, 
				this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12});
			this->dataGridViewGr->Location = System::Drawing::Point(12, 22);
			this->dataGridViewGr->MultiSelect = false;
			this->dataGridViewGr->Name = L"dataGridViewGr";
			this->dataGridViewGr->ReadOnly = true;
			this->dataGridViewGr->RowHeadersVisible = false;
			this->dataGridViewGr->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridViewGr->Size = System::Drawing::Size(400, 141);
			this->dataGridViewGr->TabIndex = 4;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Column1";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 33;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Column2";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 33;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Column3";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 33;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Column4";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 33;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Column5";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 33;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Column6";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 33;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Column7";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 33;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Column8";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 33;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Column9";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 33;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Column10";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 33;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Column11";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 33;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"Column12";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(126, 4);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(200, 15);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Буквы греческого алфавита:";
			// 
			// EnterPrimer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 562);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->bindingNavigator1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"EnterPrimer";
			this->Text = L"EnterPrimer";
			this->Load += gcnew System::EventHandler(this, &EnterPrimer::EnterPrimer_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingNavigator1))->EndInit();
			this->bindingNavigator1->ResumeLayout(false);
			this->bindingNavigator1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewGr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		DataSet^ dataSet; //источник данных
		String^ baseName; //путь до базы
		String^ name; //наименование темы
		int min_sloj, max_sloj, min_trud, max_trud; //мин и макс сложность и трудоескость
		String^ id; //номер темы
		String^ sl;
		String^ tr; 
		String^ img; //путь к картинке
		int flag; //переход к темам/задачам
		int mode; //режим просмотра(0), добавления(1), редактирования(2)

		//загрузка формы
private: System::Void EnterPrimer_Load(System::Object^  sender, System::EventArgs^  e) {
			 //первоначальные размеры формы
			 this->Width = 475;
			 this->Height = 380;

			 bindingSource1->DataSource = dataSet;
			 bindingSource1->DataMember = "Tema";
			 comboBox1->DataSource = bindingSource1;
			 comboBox1->DisplayMember = "Names";
			 //подключение к источнику данных
			 dataGridView1->DataSource = bindingSource2; 
			 
			 //привязка textBox-ов к столбцам таблицы
			 textBox1->DataBindings->Add((gcnew Binding(L"Text", bindingSource2, L"Type_otvet")));
			 textBox2->DataBindings->Add((gcnew Binding(L"Text", bindingSource2, L"ID_tema")));
			 textBox3->DataBindings->Add((gcnew Binding(L"Text", bindingSource2, L"Sloj")));
			 textBox4->DataBindings->Add((gcnew Binding(L"Text", bindingSource2, L"Trud")));
			 label4->DataBindings->Add((gcnew Binding(L"Text", bindingSource2, L"Img")));
			 richTextBox1->DataBindings->Add((gcnew Binding(L"Text", bindingSource2, L"Text")));

			 dataGridView1->RowHeadersVisible = false;
			 dataGridView1->AllowUserToAddRows = false;

			 mode = 0; //находимся в режиме просмотра

			 int count_rec = bindingSource2->Count;
			 if (count_rec != 0) {
				 DataRowView^ row = (DataRowView^) bindingSource2->Current; // текущая строка
			 }

			 //надо перевести из ричь боксо обратно в текст
			 
			 flag = 0; //перешли к темам
		 }

		 //выбор темы
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 bindingSource2->DataSource = dataSet;
			 bindingSource2->DataMember = "Zadacha";

			 bindingNavigator1->BindingSource = bindingSource2;

			 name = comboBox1->Text;
			 String^ connectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + baseName;
			 OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
			 conn->Open();
			 //id темы
			 OleDbCommand^ cmd_id = gcnew OleDbCommand("SELECT ID FROM Tema WHERE [Names] = '" + name + "'", conn);
			 id = cmd_id->ExecuteScalar()->ToString();
			 //выбор мин сложности
			 OleDbCommand^ cmd_min_sloj = gcnew OleDbCommand("SELECT Sloj_min FROM Tema WHERE [Names] = '" + name + "'", conn);
			 String^ min_sloj_str = cmd_min_sloj->ExecuteScalar()->ToString();
			 //выбор макс сложности
			 OleDbCommand^ cmd_max_sloj  = gcnew OleDbCommand("SELECT Sloj_max FROM Tema WHERE [Names] = '" + name + "'", conn);
			 String^ max_sloj_str = cmd_max_sloj->ExecuteScalar()->ToString();
			 //выбор мин трудоемкости
			 OleDbCommand^ cmd_min_trud = gcnew OleDbCommand("SELECT Trud_min FROM Tema WHERE [Names] = '" + name + "'", conn);
			 String^ min_trud_str = cmd_min_trud->ExecuteScalar()->ToString();
			 //выбор макс трудоемкости
			 OleDbCommand^ cmd_max_trud = gcnew OleDbCommand("SELECT Trud_max FROM Tema WHERE [Names] = '" + name + "'", conn);
			 String^ max_trud_str = cmd_max_trud->ExecuteScalar()->ToString();
			 conn->Close();

			 comboBox2->Items->Clear();
			 comboBox2->Text = "";

			 min_sloj = System::Convert::ToInt32(min_sloj_str);
			 max_sloj = System::Convert::ToInt32(max_sloj_str);
			 min_trud = System::Convert::ToInt32(min_trud_str); 
			 max_trud = System::Convert::ToInt32(max_trud_str);

			 for(int i = min_sloj; i <= max_sloj; i++){
				 for(int j = min_trud; j <= max_trud; j+=5) {
					 comboBox2->Items->Add(System::Convert::ToString(i) + "," + System::Convert::ToString(j));
				 }
			 }

			 bindingSource2->Filter = "ID_tema = '" + id + "'";
		 }

		 //выбор сложности и трудоемкости
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 sl = comboBox2->Text->Substring(0, comboBox2->Text->IndexOf(","));	//сложность
			 tr = comboBox2->Text->Substring(comboBox2->Text->IndexOf(",") + 1);	//трудоемкость

			 bindingSource2->Filter = "[ID_tema] = '" + id + "' AND [Sloj] = '" + sl + "' AND [Trud] = '" + tr + "'";
			 button2->Enabled = true;
		 }

		 //кнопка добавить на навигаторе
private: System::Void bindingNavigatorAddNewItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text = id;
			 textBox3->Text = sl;
			 textBox4->Text = tr;
			 richTextBox1->Focus(); //фокус передан полю ввода
		 }

		 //кнопка Подтвердить изменения
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //сохранение текста в Rtf формате
			 DataRowView^ row = (DataRowView^) bindingSource2->Current; // Текущая строка
			 row["Text"] = richTextBox1->Rtf; // Шаблон задачи

			 bindingSource2->EndEdit(); //выходим из режима редактирования
			 dataGridView1->Focus(); //фокус передан таблице
			 dataGridView1->Refresh(); //обновить таблицу
		 }
		 
		 //кнопка записать в базу
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Validate(); //проверяет значение элемента управления, потерявшего фокус
			 this->bindingSource2->EndEdit();
		 }

		 //изменение размеров окна
private: System::Void Size_Update(System::Object^  sender, System::EventArgs^  e) {
			 if (flag == 0) {
				 this->Width = 1040;
				 this->Height = 380;
				 button2->Text = "< К темам";
				 flag = 1;

			 }
			 else {
				 this->Width = 475;
				 this->Height = 380;
				 button2->Text = "К задачам >";
				 flag = 0;
			 }
		 }

		 //поставлена/не поставлена галка для выбора файла
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(checkBox1->Checked == true) {
				 this->Width = 1040;
				 this->Height = 600;
				 button1->Location = Point (910, 515);
				 label4->Text = "";
			 }
			 else {
				 this->Width = 1040;
				 this->Height = 380;
				 button1->Location = Point (910, 305);
			 }
		 }

		 //выбор картинки
private: System::Void open_File(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->Filter = "Image Files(*.BMP;*.JPG;*.GIF)|*.BMP;*.JPG;*.GIF|All files (*.*)|*.*";
			 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				 String^ file_path = openFileDialog1->FileName; //путь до выбранного файлы
				 int index = file_path->LastIndexOf('\\');
				 String^ fileName = file_path->Substring(index + 1); //имя файла файла без пути 
				 try {
					 IO::File::Copy(file_path, Application::StartupPath + L"\\img\\" + fileName, false);
					 MessageBox::Show("Файл успешно добавлен", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
					 img = Application::StartupPath + L"\\img\\" + fileName;
					 pictureBox1->Image=Image::FromFile(img); //добавление картинки в pictureBox
					 label4->Text = img;
				 }
				 catch(...) {
					 if(IO::File::Exists(Application::StartupPath + L"\\img\\" + fileName) == true) { //Файл в указанной папке уже есть
						 if (MessageBox::Show("Файл с таким именем в папке уже существует. Перезаписать?", "Ошибка", 
							 MessageBoxButtons::OKCancel, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK) {
								 IO::File::Delete(Application::StartupPath + L"\\img\\" + fileName); //Удалить существующий файл
								 //Снова скопировать файл
								 IO::File::Copy(file_path, Application::StartupPath + L"\\img\\" + fileName, false);
								 MessageBox::Show("Файл успешно добавлен", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Information);
								 img = Application::StartupPath + L"\\img\\" + fileName;
								 pictureBox1->Image=Image::FromFile(img); //добавление картинки в pictureBox
								 label4->Text = img;
						 }
					 }
					 else //Другая ошибка
						 MessageBox::Show("Не удалось записать файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 }
			 }
		 }

		 //кнопка редактировать на навигаторе
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //
		 }

		 // ================== Обработка кнопок панели инструментов ================================


		 // Кнопка жирный
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_Style ( toolStripButton3, FontStyle::Bold );
		 }

		 // Кнопка курсив
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_Style ( toolStripButton4, FontStyle::Italic );
		 }

		 // Кнопка подчеркнутый
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_Style ( toolStripButton5, FontStyle::Underline );
		 }

		 // Кнопка индекс
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_CharOffset ( toolStripButton6, -5 );
		 }

		 // Кнопка степень
private: System::Void toolStripButton7_Click(System::Object^  sender, System::EventArgs^  e) {
			  Izmen_CharOffset ( toolStripButton7, 5 );
		 }

		 // Кнопка бесконечность
private: System::Void toolStripButton8_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->SelectedText = L"\u221e"; // бесконечность
		 }

		 // Кнопка греческих букв
private: System::Void toolStripButton9_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Выключить все
			 richTextBox1->Enabled = false;
			 toolStrip1->Enabled = false;

			 panel3->Location = System::Drawing::Point(15, 20);
			 panel3->Size = System::Drawing::Size(426, 290);
			 panel3->Visible = true;

			 dataGridViewGr->Rows->Clear();
			 array <String^>^ myMass = { L"\u0391", L"\u0392", L"\u0393", L"\u0394", L"\u0395", L"\u0396",
					 L"\u0397", L"\u0398", L"\u0399", L"\u039a", L"\u039b", L"\u039c", L"\u039d", L"\u039e", 
					 L"\u039f", L"\u03a0", L"\u03a1", L"\u03a3", L"\u03a4", L"\u03a5", L"\u03a6", L"\u03a7", 
					 L"\u03a8", L"\u03a9", L"\u03b1", L"\u03b2", L"\u03b3", L"\u03b4", L"\u03b5", L"\u03b6", 
					 L"\u03b7", L"\u03b8", L"\u03b9", L"\u03ba", L"\u03bb", L"\u03bc", L"\u03bd", L"\u03be", 
					 L"\u03bf", L"\u03c0", L"\u03c1", L"\u03c3", L"\u03c4", L"\u03c5", L"\u03c6", L"\u03c7", 
					 L"\u03c8", L"\u03c9" };

			array <String^>^ myTool = { L"альфа", L"бета", L"гамма", L"дельта", L"эпсилон", 
					  L"дзета", L"эта", L"тэта", L"йота", L"каппа", L"лямбда", L"мю", L"ню", L"кси", 
					  L"омикрон", L"пи", L"ро", L"сигма", L"тау", L"ипсилон", L"фи", 
					  L"хи", L"пси", L"омега" };

			for ( int i = 0; i < 4; i++ )
				 {
					 dataGridViewGr->Rows->Add();
					 dataGridViewGr->Rows[i]->Height = 35;
				 }
			for ( int i = 0; i < 12; i++ )
				 {
					 dataGridViewGr->Columns[i]->DefaultCellStyle->Font = gcnew System::Drawing::Font("Palatino Linotype"/*"Consolas"*/, 15);
				 }
			for ( int i = 0; i < 4; i++ )
					 for (int j = 0; j < 12; j++ )
					 {
						 dataGridViewGr->Rows[i]->Cells[j]->Value = myMass[ i * 12 + j ];
						 dataGridViewGr->Rows[i]->Cells[j]->ToolTipText = myTool[ (i % 2) * 12 + j ];
					 }
		 }

		 // Кнопка добавить панели греческих букв
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ S = dataGridViewGr->CurrentCell->Value->ToString();
			 textBox6->Text = textBox6->Text + S;
		 }

		 // Кнопка вставить панели греческих букв
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->SelectedText = textBox6->Text;
			 textBox6->Text = "";
		 }

		 // Доступна ли кнопка вставить
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if ( textBox6->Text->Length > 0 ) button8->Enabled = true;
			 else button8->Enabled = false;
		 }

		 // Кнопка закрыть панели греческих букв
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Включить все
			 richTextBox1->Enabled = true;
			 toolStrip1->Enabled = true;

			 panel3->Visible = false;
			 richTextBox1->Focus();
		 }

		 // Изменение стиля
private: System::Void Izmen_Style (ToolStripButton^ Bt, System::Drawing::FontStyle fStyle) {
			 String^ Tmp = richTextBox1->Text;
			 if (Bt->Checked)
                {
					if ( Tmp->Length > 0 )
					{
						if ( (richTextBox1->SelectedText)->Length == 0)
						{
							int _pos = richTextBox1->SelectionStart;
							int _ps = _pos;
							if ( _pos < Tmp->Length )
							{
								while ( _pos >= 0 && Tmp[_pos] != ' ' ) _pos--;
								richTextBox1->SelectionStart = _pos + 1;
								int _pos1 = Tmp->IndexOf (" ", _ps);
								if ( _pos1 == -1 ) _pos1 = Tmp->Length;
								richTextBox1->SelectionLength = _pos1 - (_pos + 1);
								richTextBox1->SelectionFont = gcnew System::Drawing::Font("Consolas", 10, 
									richTextBox1->SelectionFont->Style | fStyle);
								richTextBox1->SelectionStart = _ps;
								richTextBox1->SelectionLength = 0;
							}
							else
							{
								richTextBox1->SelectionFont = gcnew System::Drawing::Font("Consolas", 10, 
									richTextBox1->SelectionFont->Style | fStyle);
							}
							return;
						}
					}
					richTextBox1->SelectionFont = gcnew System::Drawing::Font("Consolas", 10, 
							richTextBox1->SelectionFont->Style | fStyle);
			    }
			 else
			 {
					if ( Tmp->Length > 0 )
					{
						if ( (richTextBox1->SelectedText)->Length == 0)
						{
							int _pos = richTextBox1->SelectionStart;
							int _ps = _pos;
							if ( _pos < Tmp->Length )
							{
								while ( _pos >= 0 && Tmp[_pos] != ' ' ) _pos--;
								richTextBox1->SelectionStart = _pos + 1;
								int _pos1 = Tmp->IndexOf (" ", _ps);
								if ( _pos1 == -1 ) _pos1 = Tmp->Length;
								richTextBox1->SelectionLength = _pos1 - (_pos + 1);
								richTextBox1->SelectionFont = gcnew System::Drawing::Font("Consolas", 10, 
									richTextBox1->SelectionFont->Style & (~fStyle) );
								richTextBox1->SelectionStart = _ps;
								richTextBox1->SelectionLength = 0;
							}
							else
							{
								richTextBox1->SelectionFont = gcnew System::Drawing::Font("Consolas", 10, 
									richTextBox1->SelectionFont->Style & (~fStyle) );
							}
							return;
						}
					}
                    richTextBox1->SelectionFont = gcnew System::Drawing::Font("Consolas", 10, 
						richTextBox1->SelectionFont->Style & (~fStyle) );
			 }
		 }


private: System::Void Izmen_CharOffset (ToolStripButton^ Bt, int CharOffset) {
			 String^ Tmp = richTextBox1->Text;
			 if (Bt->Checked)
                {
					if ( Tmp->Length > 0 )
					{
						if ( (richTextBox1->SelectedText)->Length == 0)
						{
							int _pos = richTextBox1->SelectionStart;
							int _ps = _pos;
							if ( _pos < Tmp->Length )
							{
								while ( _pos >= 0 && Tmp[_pos] != ' ' ) _pos--;
								richTextBox1->SelectionStart = _pos + 1;
								int _pos1 = Tmp->IndexOf (" ", _ps);
								if ( _pos1 == -1 ) _pos1 = Tmp->Length;
								richTextBox1->SelectionLength = _pos1 - (_pos + 1);
								richTextBox1->SelectionCharOffset = CharOffset;
								richTextBox1->SelectionStart = _ps;
								richTextBox1->SelectionLength = 0;
							}
							else
							{
								richTextBox1->SelectionCharOffset = CharOffset;
							}
							return;
						}
					}
					richTextBox1->SelectionCharOffset = CharOffset;
			    }
			 else
			 {
					if ( Tmp->Length > 0 )
					{
						if ( (richTextBox1->SelectedText)->Length == 0)
						{
							int _pos = richTextBox1->SelectionStart;
							int _ps = _pos;
							if ( _pos < Tmp->Length )
							{
								while ( _pos >= 0 && Tmp[_pos] != ' ' ) _pos--;
								richTextBox1->SelectionStart = _pos + 1;
								int _pos1 = Tmp->IndexOf (" ", _ps);
								if ( _pos1 == -1 ) _pos1 = Tmp->Length;
								richTextBox1->SelectionLength = _pos1 - (_pos + 1);
								richTextBox1->SelectionCharOffset = 0;
								richTextBox1->SelectionStart = _ps;
								richTextBox1->SelectionLength = 0;
							}
							else
							{
								richTextBox1->SelectionCharOffset = 0;
							}
							return;
						}
					}
                    richTextBox1->SelectionCharOffset = 0;
			 }
		 }


private: System::Void richTextBox1_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
			 System::Drawing::Font^ fnt = gcnew System::Drawing::Font ("Consolas", 10, richTextBox1->SelectionFont->Style);
			 String^ Z = fnt->Style.ToString();
			 int CharOffset = richTextBox1->SelectionCharOffset;
			 if ( CharOffset == -5 )
			 {
				 toolStripButton4->Checked = true;
			 }
			 else
			 {
				 toolStripButton4->Checked = false;
			 }
			 if ( CharOffset == 5 )
			 {
				 toolStripButton5->Checked = true;
			 }
			 else
			 {
				 toolStripButton5->Checked = false;
			 }

			 
			 if ( Z->IndexOf("Bold") != -1 )
			 {
				 toolStripButton1->Checked = true;
			 }
			 else
			 {
				 toolStripButton1->Checked = false;
			 }
			 if ( Z->IndexOf("Italic") != -1 )
			 {
				 toolStripButton2->Checked = true;
			 }
			 else
			 {
				 toolStripButton2->Checked = false;
			 }
			 if ( Z->IndexOf("Underline") != -1 )
			 {
				 toolStripButton3->Checked = true;
			 }
			 else
			 {
				 toolStripButton3->Checked = false;
			 }
		 }
};
}
