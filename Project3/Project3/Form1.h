#pragma once
#include <string>
#include "HashTable.h"
#include "RBTree.h"

using namespace std;

namespace CppCLRWinformsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	void loadValues(double emission, double emissionMultiplier, double popMultiplier);

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

		}
#pragma region Windows Form Designer generated code
	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCalculate;
	private: System::Windows::Forms::NumericUpDown^ usa2;
	private: System::Windows::Forms::Label^ extinctionLabel;
	protected:



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ china2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ india2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ germany2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ japan2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ russia2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ canada2;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ indonesia2;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ saudi2;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ skorea2;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ iran2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ mexico2;

	private: System::Windows::Forms::NumericUpDown^ canada3;



	private: System::Windows::Forms::NumericUpDown^ indonesia3;

	private: System::Windows::Forms::NumericUpDown^ saudi3;

	private: System::Windows::Forms::NumericUpDown^ skorea3;

	private: System::Windows::Forms::NumericUpDown^ iran3;
	private: System::Windows::Forms::NumericUpDown^ mexico3;



	private: System::Windows::Forms::NumericUpDown^ germany3;

	private: System::Windows::Forms::NumericUpDown^ japan3;

	private: System::Windows::Forms::NumericUpDown^ russia3;

	private: System::Windows::Forms::NumericUpDown^ india3;

	private: System::Windows::Forms::NumericUpDown^ china3;

	private: System::Windows::Forms::NumericUpDown^ usa3;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ canada1;


	private: System::Windows::Forms::TextBox^ indonesia1;

	private: System::Windows::Forms::TextBox^ saudi1;

	private: System::Windows::Forms::TextBox^ skorea1;

	private: System::Windows::Forms::TextBox^ iran1;
	private: System::Windows::Forms::TextBox^ mexico1;



	private: System::Windows::Forms::TextBox^ germany1;

	private: System::Windows::Forms::TextBox^ japan1;

	private: System::Windows::Forms::TextBox^ russia1;

	private: System::Windows::Forms::TextBox^ india1;

	private: System::Windows::Forms::TextBox^ china1;

	private: System::Windows::Forms::TextBox^ usa1;


	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::NumericUpDown^ allemission;
	private: System::Windows::Forms::NumericUpDown^ allpopulation;


	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label1;


	protected:

	private:

		System::ComponentModel::Container^ components;



		void InitializeComponent(void)
		{
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->usa2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->extinctionLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->china2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->india2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->germany2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->japan2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->russia2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->canada2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->indonesia2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->saudi2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->skorea2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->iran2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->mexico2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->canada3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->indonesia3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->saudi3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->skorea3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->iran3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->mexico3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->germany3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->japan3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->russia3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->india3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->china3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->usa3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->canada1 = (gcnew System::Windows::Forms::TextBox());
			this->indonesia1 = (gcnew System::Windows::Forms::TextBox());
			this->saudi1 = (gcnew System::Windows::Forms::TextBox());
			this->skorea1 = (gcnew System::Windows::Forms::TextBox());
			this->iran1 = (gcnew System::Windows::Forms::TextBox());
			this->mexico1 = (gcnew System::Windows::Forms::TextBox());
			this->germany1 = (gcnew System::Windows::Forms::TextBox());
			this->japan1 = (gcnew System::Windows::Forms::TextBox());
			this->russia1 = (gcnew System::Windows::Forms::TextBox());
			this->india1 = (gcnew System::Windows::Forms::TextBox());
			this->china1 = (gcnew System::Windows::Forms::TextBox());
			this->usa1 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->allemission = (gcnew System::Windows::Forms::NumericUpDown());
			this->allpopulation = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usa2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->china2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->india2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->germany2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->japan2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->russia2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canada2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->indonesia2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saudi2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skorea2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iran2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mexico2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canada3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->indonesia3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saudi3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skorea3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iran3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mexico3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->germany3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->japan3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->russia3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->india3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->china3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usa3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allemission))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allpopulation))->BeginInit();
			this->SuspendLayout();
			// 
			// btnCalculate
			// 
			this->btnCalculate->BackColor = System::Drawing::SystemColors::Control;
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalculate->Location = System::Drawing::Point(177, 381);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(148, 62);
			this->btnCalculate->TabIndex = 0;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = false;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// usa2
			// 
			this->usa2->Location = System::Drawing::Point(205, 55);
			this->usa2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->usa2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->usa2->Name = L"usa2";
			this->usa2->Size = System::Drawing::Size(100, 20);
			this->usa2->TabIndex = 1;
			this->usa2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// extinctionLabel
			// 
			this->extinctionLabel->AutoSize = true;
			this->extinctionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->extinctionLabel->Location = System::Drawing::Point(12, 464);
			this->extinctionLabel->Name = L"extinctionLabel";
			this->extinctionLabel->Size = System::Drawing::Size(559, 25);
			this->extinctionLabel->TabIndex = 2;
			this->extinctionLabel->Text = L"The Human Species will reach mass extinction in the year 2222";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"USA:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"China:";
			// 
			// china2
			// 
			this->china2->Location = System::Drawing::Point(205, 31);
			this->china2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->china2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->china2->Name = L"china2";
			this->china2->Size = System::Drawing::Size(100, 20);
			this->china2->TabIndex = 4;
			this->china2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(45, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"India:";
			// 
			// india2
			// 
			this->india2->Location = System::Drawing::Point(205, 78);
			this->india2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->india2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->india2->Name = L"india2";
			this->india2->Size = System::Drawing::Size(100, 20);
			this->india2->TabIndex = 6;
			this->india2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Germany:";
			// 
			// germany2
			// 
			this->germany2->Location = System::Drawing::Point(205, 145);
			this->germany2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->germany2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->germany2->Name = L"germany2";
			this->germany2->Size = System::Drawing::Size(100, 20);
			this->germany2->TabIndex = 12;
			this->germany2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Japan:";
			// 
			// japan2
			// 
			this->japan2->Location = System::Drawing::Point(205, 123);
			this->japan2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->japan2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->japan2->Name = L"japan2";
			this->japan2->Size = System::Drawing::Size(100, 20);
			this->japan2->TabIndex = 10;
			this->japan2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Russia:";
			// 
			// russia2
			// 
			this->russia2->Location = System::Drawing::Point(205, 101);
			this->russia2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->russia2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->russia2->Name = L"russia2";
			this->russia2->Size = System::Drawing::Size(100, 20);
			this->russia2->TabIndex = 8;
			this->russia2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 262);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Canada:";
			// 
			// canada2
			// 
			this->canada2->Location = System::Drawing::Point(205, 259);
			this->canada2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->canada2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->canada2->Name = L"canada2";
			this->canada2->Size = System::Drawing::Size(100, 20);
			this->canada2->TabIndex = 24;
			this->canada2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 239);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Indonesia:";
			// 
			// indonesia2
			// 
			this->indonesia2->Location = System::Drawing::Point(205, 236);
			this->indonesia2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->indonesia2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->indonesia2->Name = L"indonesia2";
			this->indonesia2->Size = System::Drawing::Size(100, 20);
			this->indonesia2->TabIndex = 22;
			this->indonesia2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 217);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Saudi Arabia:";
			// 
			// saudi2
			// 
			this->saudi2->Location = System::Drawing::Point(205, 214);
			this->saudi2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->saudi2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->saudi2->Name = L"saudi2";
			this->saudi2->Size = System::Drawing::Size(100, 20);
			this->saudi2->TabIndex = 20;
			this->saudi2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 194);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"S. Korea:";
			// 
			// skorea2
			// 
			this->skorea2->Location = System::Drawing::Point(205, 191);
			this->skorea2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->skorea2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->skorea2->Name = L"skorea2";
			this->skorea2->Size = System::Drawing::Size(100, 20);
			this->skorea2->TabIndex = 18;
			this->skorea2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(50, 171);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Iran:";
			// 
			// iran2
			// 
			this->iran2->Location = System::Drawing::Point(205, 168);
			this->iran2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->iran2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->iran2->Name = L"iran2";
			this->iran2->Size = System::Drawing::Size(100, 20);
			this->iran2->TabIndex = 16;
			this->iran2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(37, 284);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Mexico";
			// 
			// mexico2
			// 
			this->mexico2->Location = System::Drawing::Point(205, 281);
			this->mexico2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->mexico2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->mexico2->Name = L"mexico2";
			this->mexico2->Size = System::Drawing::Size(100, 20);
			this->mexico2->TabIndex = 14;
			this->mexico2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// canada3
			// 
			this->canada3->Location = System::Drawing::Point(317, 259);
			this->canada3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->canada3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->canada3->Name = L"canada3";
			this->canada3->Size = System::Drawing::Size(140, 20);
			this->canada3->TabIndex = 37;
			this->canada3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// indonesia3
			// 
			this->indonesia3->Location = System::Drawing::Point(317, 236);
			this->indonesia3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->indonesia3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->indonesia3->Name = L"indonesia3";
			this->indonesia3->Size = System::Drawing::Size(140, 20);
			this->indonesia3->TabIndex = 36;
			this->indonesia3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// saudi3
			// 
			this->saudi3->Location = System::Drawing::Point(317, 214);
			this->saudi3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->saudi3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->saudi3->Name = L"saudi3";
			this->saudi3->Size = System::Drawing::Size(140, 20);
			this->saudi3->TabIndex = 35;
			this->saudi3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// skorea3
			// 
			this->skorea3->Location = System::Drawing::Point(317, 191);
			this->skorea3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->skorea3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->skorea3->Name = L"skorea3";
			this->skorea3->Size = System::Drawing::Size(140, 20);
			this->skorea3->TabIndex = 34;
			this->skorea3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// iran3
			// 
			this->iran3->Location = System::Drawing::Point(317, 168);
			this->iran3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->iran3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->iran3->Name = L"iran3";
			this->iran3->Size = System::Drawing::Size(140, 20);
			this->iran3->TabIndex = 33;
			this->iran3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mexico3
			// 
			this->mexico3->Location = System::Drawing::Point(317, 281);
			this->mexico3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->mexico3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->mexico3->Name = L"mexico3";
			this->mexico3->Size = System::Drawing::Size(140, 20);
			this->mexico3->TabIndex = 32;
			this->mexico3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// germany3
			// 
			this->germany3->Location = System::Drawing::Point(317, 145);
			this->germany3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->germany3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->germany3->Name = L"germany3";
			this->germany3->Size = System::Drawing::Size(140, 20);
			this->germany3->TabIndex = 31;
			this->germany3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// japan3
			// 
			this->japan3->Location = System::Drawing::Point(317, 123);
			this->japan3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->japan3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->japan3->Name = L"japan3";
			this->japan3->Size = System::Drawing::Size(140, 20);
			this->japan3->TabIndex = 30;
			this->japan3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// russia3
			// 
			this->russia3->Location = System::Drawing::Point(317, 101);
			this->russia3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->russia3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->russia3->Name = L"russia3";
			this->russia3->Size = System::Drawing::Size(140, 20);
			this->russia3->TabIndex = 29;
			this->russia3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// india3
			// 
			this->india3->Location = System::Drawing::Point(317, 78);
			this->india3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->india3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->india3->Name = L"india3";
			this->india3->Size = System::Drawing::Size(140, 20);
			this->india3->TabIndex = 28;
			this->india3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// china3
			// 
			this->china3->Location = System::Drawing::Point(317, 31);
			this->china3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->china3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->china3->Name = L"china3";
			this->china3->Size = System::Drawing::Size(140, 20);
			this->china3->TabIndex = 27;
			this->china3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// usa3
			// 
			this->usa3->Location = System::Drawing::Point(317, 55);
			this->usa3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->usa3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->usa3->Name = L"usa3";
			this->usa3->Size = System::Drawing::Size(140, 20);
			this->usa3->TabIndex = 26;
			this->usa3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(202, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(106, 13);
			this->label14->TabIndex = 38;
			this->label14->Text = L"Emission % Increase:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(314, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(151, 13);
			this->label15->TabIndex = 39;
			this->label15->Text = L"Annual Population % Increase:";
			// 
			// canada1
			// 
			this->canada1->Location = System::Drawing::Point(84, 259);
			this->canada1->Name = L"canada1";
			this->canada1->ReadOnly = true;
			this->canada1->Size = System::Drawing::Size(105, 20);
			this->canada1->TabIndex = 51;
			this->canada1->Text = L"0.56GT";
			this->canada1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// indonesia1
			// 
			this->indonesia1->Location = System::Drawing::Point(84, 236);
			this->indonesia1->Name = L"indonesia1";
			this->indonesia1->ReadOnly = true;
			this->indonesia1->Size = System::Drawing::Size(105, 20);
			this->indonesia1->TabIndex = 50;
			this->indonesia1->Text = L"0.61GT";
			this->indonesia1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// saudi1
			// 
			this->saudi1->Location = System::Drawing::Point(84, 214);
			this->saudi1->Name = L"saudi1";
			this->saudi1->ReadOnly = true;
			this->saudi1->Size = System::Drawing::Size(105, 20);
			this->saudi1->TabIndex = 49;
			this->saudi1->Text = L"0.62GT";
			this->saudi1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// skorea1
			// 
			this->skorea1->Location = System::Drawing::Point(84, 191);
			this->skorea1->Name = L"skorea1";
			this->skorea1->ReadOnly = true;
			this->skorea1->Size = System::Drawing::Size(105, 20);
			this->skorea1->TabIndex = 48;
			this->skorea1->Text = L"0.65GT";
			this->skorea1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// iran1
			// 
			this->iran1->Location = System::Drawing::Point(84, 168);
			this->iran1->Name = L"iran1";
			this->iran1->ReadOnly = true;
			this->iran1->Size = System::Drawing::Size(105, 20);
			this->iran1->TabIndex = 47;
			this->iran1->Text = L"0.72GT";
			this->iran1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mexico1
			// 
			this->mexico1->Location = System::Drawing::Point(84, 281);
			this->mexico1->Name = L"mexico1";
			this->mexico1->ReadOnly = true;
			this->mexico1->Size = System::Drawing::Size(105, 20);
			this->mexico1->TabIndex = 46;
			this->mexico1->Text = L"0.47GT";
			this->mexico1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// germany1
			// 
			this->germany1->Location = System::Drawing::Point(84, 145);
			this->germany1->Name = L"germany1";
			this->germany1->ReadOnly = true;
			this->germany1->Size = System::Drawing::Size(105, 20);
			this->germany1->TabIndex = 45;
			this->germany1->Text = L"0.75GT";
			this->germany1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// japan1
			// 
			this->japan1->Location = System::Drawing::Point(84, 123);
			this->japan1->Name = L"japan1";
			this->japan1->ReadOnly = true;
			this->japan1->Size = System::Drawing::Size(105, 20);
			this->japan1->TabIndex = 44;
			this->japan1->Text = L"1.16GT";
			this->japan1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// russia1
			// 
			this->russia1->Location = System::Drawing::Point(84, 101);
			this->russia1->Name = L"russia1";
			this->russia1->ReadOnly = true;
			this->russia1->Size = System::Drawing::Size(105, 20);
			this->russia1->TabIndex = 43;
			this->russia1->Text = L"1.71GT";
			this->russia1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// india1
			// 
			this->india1->Location = System::Drawing::Point(84, 78);
			this->india1->Name = L"india1";
			this->india1->ReadOnly = true;
			this->india1->Size = System::Drawing::Size(105, 20);
			this->india1->TabIndex = 42;
			this->india1->Text = L"2.65GT";
			this->india1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// china1
			// 
			this->china1->Location = System::Drawing::Point(84, 31);
			this->china1->Name = L"china1";
			this->china1->ReadOnly = true;
			this->china1->Size = System::Drawing::Size(105, 20);
			this->china1->TabIndex = 41;
			this->china1->Text = L"10.06GT";
			this->china1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// usa1
			// 
			this->usa1->Location = System::Drawing::Point(84, 55);
			this->usa1->Name = L"usa1";
			this->usa1->ReadOnly = true;
			this->usa1->Size = System::Drawing::Size(105, 20);
			this->usa1->TabIndex = 40;
			this->usa1->Text = L"5.41GT";
			this->usa1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(81, 9);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 13);
			this->label16->TabIndex = 52;
			this->label16->Text = L"Yearly CO2 Emmisions:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(22, 318);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(149, 13);
			this->label17->TabIndex = 53;
			this->label17->Text = L"Change All Emission Increase:";
			// 
			// allemission
			// 
			this->allemission->Location = System::Drawing::Point(177, 316);
			this->allemission->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->allemission->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->allemission->Name = L"allemission";
			this->allemission->Size = System::Drawing::Size(100, 20);
			this->allemission->TabIndex = 54;
			this->allemission->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->allemission->TextChanged += gcnew System::EventHandler(this, &Form1::allemission_TextChanged);
			// 
			// allpopulation
			// 
			this->allpopulation->Location = System::Drawing::Point(177, 342);
			this->allpopulation->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->allpopulation->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->allpopulation->Name = L"allpopulation";
			this->allpopulation->Size = System::Drawing::Size(100, 20);
			this->allpopulation->TabIndex = 56;
			this->allpopulation->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->allpopulation->ValueChanged += gcnew System::EventHandler(this, &Form1::allpopulation_ValueChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(13, 344);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(158, 13);
			this->label18->TabIndex = 55;
			this->label18->Text = L"Change All Population Increase:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(297, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 57;
			this->label1->Text = L"Total CO2 Worldwide: 33";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(799, 498);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->allpopulation);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->allemission);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->canada1);
			this->Controls->Add(this->indonesia1);
			this->Controls->Add(this->saudi1);
			this->Controls->Add(this->skorea1);
			this->Controls->Add(this->iran1);
			this->Controls->Add(this->mexico1);
			this->Controls->Add(this->germany1);
			this->Controls->Add(this->japan1);
			this->Controls->Add(this->russia1);
			this->Controls->Add(this->india1);
			this->Controls->Add(this->china1);
			this->Controls->Add(this->usa1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->canada3);
			this->Controls->Add(this->indonesia3);
			this->Controls->Add(this->saudi3);
			this->Controls->Add(this->skorea3);
			this->Controls->Add(this->iran3);
			this->Controls->Add(this->mexico3);
			this->Controls->Add(this->germany3);
			this->Controls->Add(this->japan3);
			this->Controls->Add(this->russia3);
			this->Controls->Add(this->india3);
			this->Controls->Add(this->china3);
			this->Controls->Add(this->usa3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->canada2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->indonesia2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->saudi2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->skorea2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->iran2);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->mexico2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->germany2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->japan2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->russia2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->india2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->china2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->extinctionLabel);
			this->Controls->Add(this->usa2);
			this->Controls->Add(this->btnCalculate);
			this->Name = L"Form1";
			this->Text = L"Mass Extinction Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usa2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->china2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->india2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->germany2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->japan2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->russia2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canada2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->indonesia2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saudi2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skorea2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iran2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mexico2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->canada3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->indonesia3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->saudi3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->skorea3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iran3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mexico3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->germany3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->japan3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->russia3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->india3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->china3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usa3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allemission))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allpopulation))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion





	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		loadValues(System::Convert::ToDouble(this->china1->Text->Substring(0, this->china1->Text->Length - 2)), System::Convert::ToDouble(this->china2->Value), System::Convert::ToDouble(this->china3->Value));

		loadValues(System::Convert::ToDouble(this->usa1->Text->Substring(0, this->usa1->Text->Length - 2)), System::Convert::ToDouble(this->usa2->Value), System::Convert::ToDouble(this->usa3->Value));

		loadValues(System::Convert::ToDouble(this->india1->Text->Substring(0, this->india1->Text->Length - 2)), System::Convert::ToDouble(this->india2->Value), System::Convert::ToDouble(this->india3->Value));

		loadValues(System::Convert::ToDouble(this->russia1->Text->Substring(0, this->russia1->Text->Length - 2)), System::Convert::ToDouble(this->russia2->Value), System::Convert::ToDouble(this->russia3->Value));

		loadValues(System::Convert::ToDouble(this->japan1->Text->Substring(0, this->japan1->Text->Length - 2)), System::Convert::ToDouble(this->japan2->Value), System::Convert::ToDouble(this->japan3->Value));

		loadValues(System::Convert::ToDouble(this->germany1->Text->Substring(0, this->germany1->Text->Length - 2)), System::Convert::ToDouble(this->germany2->Value), System::Convert::ToDouble(this->germany3->Value));

		loadValues(System::Convert::ToDouble(this->iran1->Text->Substring(0, this->iran1->Text->Length - 2)), System::Convert::ToDouble(this->iran2->Value), System::Convert::ToDouble(this->iran3->Value));

		loadValues(System::Convert::ToDouble(this->skorea1->Text->Substring(0, this->skorea1->Text->Length - 2)), System::Convert::ToDouble(this->skorea2->Value), System::Convert::ToDouble(this->skorea3->Value));

		loadValues(System::Convert::ToDouble(this->saudi1->Text->Substring(0, this->saudi1->Text->Length - 2)), System::Convert::ToDouble(this->saudi2->Value), System::Convert::ToDouble(this->saudi3->Value));

		loadValues(System::Convert::ToDouble(this->indonesia1->Text->Substring(0, this->indonesia1->Text->Length - 2)), System::Convert::ToDouble(this->indonesia2->Value), System::Convert::ToDouble(this->indonesia3->Value));

		loadValues(System::Convert::ToDouble(this->canada1->Text->Substring(0, this->canada1->Text->Length - 2)), System::Convert::ToDouble(this->canada2->Value), System::Convert::ToDouble(this->canada3->Value));

		loadValues(System::Convert::ToDouble(this->mexico1->Text->Substring(0, this->mexico1->Text->Length - 2)), System::Convert::ToDouble(this->mexico2->Value), System::Convert::ToDouble(this->mexico3->Value));

	}

	private: System::Void allemission_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->usa2->Value = this->allemission->Value;
		this->russia2->Value = this->allemission->Value;
		this->saudi2->Value = this->allemission->Value;
		this->canada2->Value = this->allemission->Value;
		this->skorea2->Value = this->allemission->Value;
		this->china2->Value = this->allemission->Value;
		this->iran2->Value = this->allemission->Value;
		this->india2->Value = this->allemission->Value;
		this->indonesia2->Value = this->allemission->Value;
		this->mexico2->Value = this->allemission->Value;
		this->germany2->Value = this->allemission->Value;
		this->japan2->Value = this->allemission->Value;
	}

	private: System::Void allpopulation_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		this->usa3->Value = this->allpopulation->Value;
		this->russia3->Value = this->allpopulation->Value;
		this->saudi3->Value = this->allpopulation->Value;
		this->canada3->Value = this->allpopulation->Value;
		this->skorea3->Value = this->allpopulation->Value;
		this->china3->Value = this->allpopulation->Value;
		this->iran3->Value = this->allpopulation->Value;
		this->india3->Value = this->allpopulation->Value;
		this->indonesia3->Value = this->allpopulation->Value;
		this->mexico3->Value = this->allpopulation->Value;
		this->germany3->Value = this->allpopulation->Value;
		this->japan3->Value = this->allpopulation->Value;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	};

	double totalEmission = 0;

	void loadValues(double emission, double emissionMultiplier, double popMultiplier) {
		totalEmission += emission * (1 + (emissionMultiplier / 100.0)) * (1 + (popMultiplier / 100.0);
	}

	void Calcualte() {
		double c0 = 407; //co2 monthly average concentration in 2018

		double tempIncrease = 1.66 * log(1 + ((totalEmission * 4/9) / c0))/log(2.71828);
	}
};

