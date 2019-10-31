#pragma once
#include <vector>
#include "Marks.h"

namespace Students_module {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"���", L"�������", L"��������", L"�����", L"���� ��������",
					L"�����"
			});
			this->comboBox1->Location = System::Drawing::Point(24, 65);
			this->comboBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(238, 33);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"���";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(312, 67);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"����";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(208, 110);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::Search_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 17);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"���� ������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(366, 17);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"��������";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 154);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->MaximumSize = System::Drawing::Size(574, 225);
			this->MinimumSize = System::Drawing::Size(574, 225);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Search_Click(System::Object^  sender, System::EventArgs^  e);
			 public: void select(std::vector <Marks>);
	};
}
