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
	/// Сводка для EnterTask
	/// </summary>
	public ref class EnterTask : public System::Windows::Forms::Form
	{
	public:
		EnterTask(DataSet^ data_set, String^ base_name)
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
		~EnterTask()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EnterTask::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewGr))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Тема:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(63, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(435, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &EnterTask::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Сложность, Трудоемкость:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(172, 43);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(326, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &EnterTask::comboBox2_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(23, 111);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(475, 210);
			this->richTextBox1->TabIndex = 29;
			this->richTextBox1->Text = L"(Здесь определяется шаблон задачи)";
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7});
			this->toolStrip1->Location = System::Drawing::Point(23, 83);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(475, 25);
			this->toolStrip1->TabIndex = 30;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->CheckOnClick = true;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"Полужирый";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->CheckOnClick = true;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Курсив";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->CheckOnClick = true;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Подчеркивание";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton3_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->CheckOnClick = true;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"Индекс";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->CheckOnClick = true;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"Степень";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"Бесконечность";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton6_Click);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"Буквы греческого алфавита";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &EnterTask::toolStripButton7_Click);
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
			this->panel3->Location = System::Drawing::Point(520, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(175, 125);
			this->panel3->TabIndex = 31;
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
			this->button9->Click += gcnew System::EventHandler(this, &EnterTask::button9_Click);
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
			this->button8->Click += gcnew System::EventHandler(this, &EnterTask::button8_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(12, 218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 26);
			this->textBox6->TabIndex = 7;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &EnterTask::textBox6_TextChanged);
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
			this->button7->Click += gcnew System::EventHandler(this, &EnterTask::button7_Click);
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
			// EnterTask
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 402);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EnterTask";
			this->Text = L"Работа с задачами";
			this->Load += gcnew System::EventHandler(this, &EnterTask::EnterTask_Load);
			this->Shown += gcnew System::EventHandler(this, &EnterTask::EnterTask_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
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

private: System::Void EnterTask_Load(System::Object^  sender, System::EventArgs^  e) {
			 //поле со списком для Темы
			 bindingSource1->DataSource = dataSet;
			 bindingSource1->DataMember = "Tema";
			 comboBox1->DataSource = bindingSource1;
			 comboBox1->DisplayMember = "Names";

		 }

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 name = comboBox1->Text;
			 String^ connectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + baseName;
			 OleDbConnection^ conn = gcnew OleDbConnection(connectionString);
			 conn->Open();
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
			 //comboBox2->Items->Add(System::Convert::ToInt32(min_sloj) + ",");

			 min_sloj = System::Convert::ToInt32(min_sloj_str);
			 max_sloj = System::Convert::ToInt32(max_sloj_str);
			 min_trud = System::Convert::ToInt32(min_trud_str); 
			 max_trud = System::Convert::ToInt32(max_trud_str);

			 for(int i = min_sloj; i <= max_sloj; i++){
				 for(int j = min_trud; j <= max_trud; j+=5) {
					 comboBox2->Items->Add(System::Convert::ToString(i) + "," + System::Convert::ToString(j));
				 }
			 }

			 
		 }

private: System::Void EnterTask_Shown(System::Object^  sender, System::EventArgs^  e) {
			 comboBox1->Text = "";
		 }

		// ================== Обработка кнопок панели инструментов ================================
// Кнопка жирный
private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_Style ( toolStripButton1, FontStyle::Bold );
		 }
// Кнопка курсив
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_Style ( toolStripButton2, FontStyle::Italic );
		 }
// Кнопка подчеркнутый
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_Style ( toolStripButton3, FontStyle::Underline );
		 }
// Кнопка индекс
private: System::Void toolStripButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_CharOffset ( toolStripButton4, -5 );
		 }
// Кнопка степень
private: System::Void toolStripButton5_Click(System::Object^  sender, System::EventArgs^  e) {
			 Izmen_CharOffset ( toolStripButton5, 5 );
		 }
// Кнопка бесконечность
private: System::Void toolStripButton6_Click(System::Object^  sender, System::EventArgs^  e) {
			 richTextBox1->SelectedText = L"\u221e"; // бесконечность
		 }
// Кнопка греческих букв
private: System::Void toolStripButton7_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Выключить все
			 richTextBox1->Enabled = false;
			 toolStrip1->Enabled = false;

			 panel3->Location = System::Drawing::Point(79, 100);
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
// Изменение текущего выбора
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
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 //выделить весь текст в большом текстовом поле
			 richTextBox1->SelectionStart = 0;
			 richTextBox1->SelectionLength = richTextBox1->Text->Length;
			 richTextBox1->Focus();
		 }
};
}
