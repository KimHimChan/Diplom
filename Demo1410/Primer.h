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
	using namespace System::Globalization;

	/// <summary>
	/// ������ ��� Primer
	/// </summary>
	public ref class Primer : public System::Windows::Forms::Form
	{
	public:
		Primer(void)//DataSet^ data_set, String^ base_name)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			//dataSet = data_set;
			//baseName = base_name;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Primer()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 





























	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{

		}
#pragma endregion
};
}
