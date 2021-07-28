#pragma once

namespace CppCLRWinformsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	void start();


	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			start();
		}

	protected:

		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnCalculate;
	protected:

	private: System::Windows::Forms::TextBox^ outputBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::Label^ label18;


	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

	void InitializeComponent(void)
		{
		this->btnCalculate = (gcnew System::Windows::Forms::Button());
		this->outputBox = (gcnew System::Windows::Forms::TextBox());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->textBox1 = (gcnew System::Windows::Forms::TextBox());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->textBox2 = (gcnew System::Windows::Forms::TextBox());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->textBox3 = (gcnew System::Windows::Forms::TextBox());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->textBox4 = (gcnew System::Windows::Forms::TextBox());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->textBox5 = (gcnew System::Windows::Forms::TextBox());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->textBox6 = (gcnew System::Windows::Forms::TextBox());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->textBox7 = (gcnew System::Windows::Forms::TextBox());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->textBox8 = (gcnew System::Windows::Forms::TextBox());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->textBox9 = (gcnew System::Windows::Forms::TextBox());
		this->label12 = (gcnew System::Windows::Forms::Label());
		this->textBox10 = (gcnew System::Windows::Forms::TextBox());
		this->label13 = (gcnew System::Windows::Forms::Label());
		this->textBox11 = (gcnew System::Windows::Forms::TextBox());
		this->textBox12 = (gcnew System::Windows::Forms::TextBox());
		this->textBox13 = (gcnew System::Windows::Forms::TextBox());
		this->textBox14 = (gcnew System::Windows::Forms::TextBox());
		this->textBox15 = (gcnew System::Windows::Forms::TextBox());
		this->textBox16 = (gcnew System::Windows::Forms::TextBox());
		this->textBox17 = (gcnew System::Windows::Forms::TextBox());
		this->textBox18 = (gcnew System::Windows::Forms::TextBox());
		this->textBox19 = (gcnew System::Windows::Forms::TextBox());
		this->textBox20 = (gcnew System::Windows::Forms::TextBox());
		this->textBox21 = (gcnew System::Windows::Forms::TextBox());
		this->textBox22 = (gcnew System::Windows::Forms::TextBox());
		this->textBox23 = (gcnew System::Windows::Forms::TextBox());
		this->label14 = (gcnew System::Windows::Forms::Label());
		this->label15 = (gcnew System::Windows::Forms::Label());
		this->textBox24 = (gcnew System::Windows::Forms::TextBox());
		this->textBox25 = (gcnew System::Windows::Forms::TextBox());
		this->textBox26 = (gcnew System::Windows::Forms::TextBox());
		this->textBox27 = (gcnew System::Windows::Forms::TextBox());
		this->textBox28 = (gcnew System::Windows::Forms::TextBox());
		this->textBox29 = (gcnew System::Windows::Forms::TextBox());
		this->textBox30 = (gcnew System::Windows::Forms::TextBox());
		this->textBox31 = (gcnew System::Windows::Forms::TextBox());
		this->textBox32 = (gcnew System::Windows::Forms::TextBox());
		this->textBox33 = (gcnew System::Windows::Forms::TextBox());
		this->textBox34 = (gcnew System::Windows::Forms::TextBox());
		this->textBox35 = (gcnew System::Windows::Forms::TextBox());
		this->label16 = (gcnew System::Windows::Forms::Label());
		this->label17 = (gcnew System::Windows::Forms::Label());
		this->textBox36 = (gcnew System::Windows::Forms::TextBox());
		this->textBox37 = (gcnew System::Windows::Forms::TextBox());
		this->label18 = (gcnew System::Windows::Forms::Label());
		this->SuspendLayout();
		// 
		// btnCalculate
		// 
		this->btnCalculate->BackColor = System::Drawing::SystemColors::Control;
		this->btnCalculate->Location = System::Drawing::Point(17, 406);
		this->btnCalculate->Name = L"btnCalculate";
		this->btnCalculate->Size = System::Drawing::Size(112, 41);
		this->btnCalculate->TabIndex = 0;
		this->btnCalculate->Text = L"Calculate";
		this->btnCalculate->UseVisualStyleBackColor = false;
		this->btnCalculate->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
		// 
		// outputBox
		// 
		this->outputBox->Location = System::Drawing::Point(205, 34);
		this->outputBox->Name = L"outputBox";
		this->outputBox->Size = System::Drawing::Size(100, 20);
		this->outputBox->TabIndex = 1;
		this->outputBox->Text = L"0%";
		this->outputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->outputBox->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		this->label1->Location = System::Drawing::Point(12, 464);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(526, 25);
		this->label1->TabIndex = 2;
		this->label1->Text = L"The Human Species will reach mass extinction in 300 years";
		this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
		// 
		// label2
		// 
		this->label2->AutoSize = true;
		this->label2->Location = System::Drawing::Point(46, 37);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(32, 13);
		this->label2->TabIndex = 3;
		this->label2->Text = L"USA:";
		this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
		// 
		// label3
		// 
		this->label3->AutoSize = true;
		this->label3->Location = System::Drawing::Point(41, 59);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(37, 13);
		this->label3->TabIndex = 5;
		this->label3->Text = L"China:";
		this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
		// 
		// textBox1
		// 
		this->textBox1->Location = System::Drawing::Point(205, 56);
		this->textBox1->Name = L"textBox1";
		this->textBox1->Size = System::Drawing::Size(100, 20);
		this->textBox1->TabIndex = 4;
		this->textBox1->Text = L"0%";
		this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
		// textBox2
		// 
		this->textBox2->Location = System::Drawing::Point(205, 78);
		this->textBox2->Name = L"textBox2";
		this->textBox2->Size = System::Drawing::Size(100, 20);
		this->textBox2->TabIndex = 6;
		this->textBox2->Text = L"0%";
		this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
		// textBox3
		// 
		this->textBox3->Location = System::Drawing::Point(205, 145);
		this->textBox3->Name = L"textBox3";
		this->textBox3->Size = System::Drawing::Size(100, 20);
		this->textBox3->TabIndex = 12;
		this->textBox3->Text = L"0%";
		this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
		// textBox4
		// 
		this->textBox4->Location = System::Drawing::Point(205, 123);
		this->textBox4->Name = L"textBox4";
		this->textBox4->Size = System::Drawing::Size(100, 20);
		this->textBox4->TabIndex = 10;
		this->textBox4->Text = L"0%";
		this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
		// textBox5
		// 
		this->textBox5->Location = System::Drawing::Point(205, 101);
		this->textBox5->Name = L"textBox5";
		this->textBox5->Size = System::Drawing::Size(100, 20);
		this->textBox5->TabIndex = 8;
		this->textBox5->Text = L"0%";
		this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label8
		// 
		this->label8->AutoSize = true;
		this->label8->Location = System::Drawing::Point(35, 281);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(43, 13);
		this->label8->TabIndex = 25;
		this->label8->Text = L"France:";
		// 
		// textBox6
		// 
		this->textBox6->Location = System::Drawing::Point(205, 278);
		this->textBox6->Name = L"textBox6";
		this->textBox6->Size = System::Drawing::Size(100, 20);
		this->textBox6->TabIndex = 24;
		this->textBox6->Text = L"0%";
		this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label9
		// 
		this->label9->AutoSize = true;
		this->label9->Location = System::Drawing::Point(22, 259);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(56, 13);
		this->label9->TabIndex = 23;
		this->label9->Text = L"Indonesia:";
		// 
		// textBox7
		// 
		this->textBox7->Location = System::Drawing::Point(205, 256);
		this->textBox7->Name = L"textBox7";
		this->textBox7->Size = System::Drawing::Size(100, 20);
		this->textBox7->TabIndex = 22;
		this->textBox7->Text = L"0%";
		this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label10
		// 
		this->label10->AutoSize = true;
		this->label10->Location = System::Drawing::Point(8, 237);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(70, 13);
		this->label10->TabIndex = 21;
		this->label10->Text = L"Saudi Arabia:";
		// 
		// textBox8
		// 
		this->textBox8->Location = System::Drawing::Point(205, 234);
		this->textBox8->Name = L"textBox8";
		this->textBox8->Size = System::Drawing::Size(100, 20);
		this->textBox8->TabIndex = 20;
		this->textBox8->Text = L"0%";
		this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label11
		// 
		this->label11->AutoSize = true;
		this->label11->Location = System::Drawing::Point(27, 214);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(51, 13);
		this->label11->TabIndex = 19;
		this->label11->Text = L"S. Korea:";
		// 
		// textBox9
		// 
		this->textBox9->Location = System::Drawing::Point(205, 211);
		this->textBox9->Name = L"textBox9";
		this->textBox9->Size = System::Drawing::Size(100, 20);
		this->textBox9->TabIndex = 18;
		this->textBox9->Text = L"0%";
		this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Location = System::Drawing::Point(50, 192);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(28, 13);
		this->label12->TabIndex = 17;
		this->label12->Text = L"Iran:";
		// 
		// textBox10
		// 
		this->textBox10->Location = System::Drawing::Point(205, 189);
		this->textBox10->Name = L"textBox10";
		this->textBox10->Size = System::Drawing::Size(100, 20);
		this->textBox10->TabIndex = 16;
		this->textBox10->Text = L"0%";
		this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label13
		// 
		this->label13->AutoSize = true;
		this->label13->Location = System::Drawing::Point(53, 170);
		this->label13->Name = L"label13";
		this->label13->Size = System::Drawing::Size(25, 13);
		this->label13->TabIndex = 15;
		this->label13->Text = L"UK:";
		// 
		// textBox11
		// 
		this->textBox11->Location = System::Drawing::Point(205, 167);
		this->textBox11->Name = L"textBox11";
		this->textBox11->Size = System::Drawing::Size(100, 20);
		this->textBox11->TabIndex = 14;
		this->textBox11->Text = L"0%";
		this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox12
		// 
		this->textBox12->Location = System::Drawing::Point(311, 278);
		this->textBox12->Name = L"textBox12";
		this->textBox12->Size = System::Drawing::Size(135, 20);
		this->textBox12->TabIndex = 37;
		this->textBox12->Text = L"0%";
		this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox13
		// 
		this->textBox13->Location = System::Drawing::Point(311, 256);
		this->textBox13->Name = L"textBox13";
		this->textBox13->Size = System::Drawing::Size(135, 20);
		this->textBox13->TabIndex = 36;
		this->textBox13->Text = L"0%";
		this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox14
		// 
		this->textBox14->Location = System::Drawing::Point(311, 234);
		this->textBox14->Name = L"textBox14";
		this->textBox14->Size = System::Drawing::Size(135, 20);
		this->textBox14->TabIndex = 35;
		this->textBox14->Text = L"0%";
		this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox15
		// 
		this->textBox15->Location = System::Drawing::Point(311, 211);
		this->textBox15->Name = L"textBox15";
		this->textBox15->Size = System::Drawing::Size(135, 20);
		this->textBox15->TabIndex = 34;
		this->textBox15->Text = L"0%";
		this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox16
		// 
		this->textBox16->Location = System::Drawing::Point(311, 189);
		this->textBox16->Name = L"textBox16";
		this->textBox16->Size = System::Drawing::Size(135, 20);
		this->textBox16->TabIndex = 33;
		this->textBox16->Text = L"0%";
		this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox17
		// 
		this->textBox17->Location = System::Drawing::Point(311, 167);
		this->textBox17->Name = L"textBox17";
		this->textBox17->Size = System::Drawing::Size(135, 20);
		this->textBox17->TabIndex = 32;
		this->textBox17->Text = L"0%";
		this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox18
		// 
		this->textBox18->Location = System::Drawing::Point(311, 145);
		this->textBox18->Name = L"textBox18";
		this->textBox18->Size = System::Drawing::Size(135, 20);
		this->textBox18->TabIndex = 31;
		this->textBox18->Text = L"0%";
		this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox19
		// 
		this->textBox19->Location = System::Drawing::Point(311, 123);
		this->textBox19->Name = L"textBox19";
		this->textBox19->Size = System::Drawing::Size(135, 20);
		this->textBox19->TabIndex = 30;
		this->textBox19->Text = L"0%";
		this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox20
		// 
		this->textBox20->Location = System::Drawing::Point(311, 101);
		this->textBox20->Name = L"textBox20";
		this->textBox20->Size = System::Drawing::Size(135, 20);
		this->textBox20->TabIndex = 29;
		this->textBox20->Text = L"0%";
		this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox21
		// 
		this->textBox21->Location = System::Drawing::Point(311, 78);
		this->textBox21->Name = L"textBox21";
		this->textBox21->Size = System::Drawing::Size(135, 20);
		this->textBox21->TabIndex = 28;
		this->textBox21->Text = L"0%";
		this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox22
		// 
		this->textBox22->Location = System::Drawing::Point(311, 56);
		this->textBox22->Name = L"textBox22";
		this->textBox22->Size = System::Drawing::Size(135, 20);
		this->textBox22->TabIndex = 27;
		this->textBox22->Text = L"0%";
		this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox23
		// 
		this->textBox23->Location = System::Drawing::Point(311, 34);
		this->textBox23->Name = L"textBox23";
		this->textBox23->Size = System::Drawing::Size(135, 20);
		this->textBox23->TabIndex = 26;
		this->textBox23->Text = L"0%";
		this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label14
		// 
		this->label14->AutoSize = true;
		this->label14->Location = System::Drawing::Point(202, 9);
		this->label14->Name = L"label14";
		this->label14->Size = System::Drawing::Size(106, 13);
		this->label14->TabIndex = 38;
		this->label14->Text = L"Emission % Increase:";
		this->label14->Click += gcnew System::EventHandler(this, &Form1::label14_Click);
		// 
		// label15
		// 
		this->label15->AutoSize = true;
		this->label15->Location = System::Drawing::Point(308, 9);
		this->label15->Name = L"label15";
		this->label15->Size = System::Drawing::Size(151, 13);
		this->label15->TabIndex = 39;
		this->label15->Text = L"Annual Population % Increase:";
		// 
		// textBox24
		// 
		this->textBox24->Location = System::Drawing::Point(84, 278);
		this->textBox24->Name = L"textBox24";
		this->textBox24->ReadOnly = true;
		this->textBox24->Size = System::Drawing::Size(115, 20);
		this->textBox24->TabIndex = 51;
		this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox25
		// 
		this->textBox25->Location = System::Drawing::Point(84, 256);
		this->textBox25->Name = L"textBox25";
		this->textBox25->ReadOnly = true;
		this->textBox25->Size = System::Drawing::Size(115, 20);
		this->textBox25->TabIndex = 50;
		this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox26
		// 
		this->textBox26->Location = System::Drawing::Point(84, 234);
		this->textBox26->Name = L"textBox26";
		this->textBox26->ReadOnly = true;
		this->textBox26->Size = System::Drawing::Size(115, 20);
		this->textBox26->TabIndex = 49;
		this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox27
		// 
		this->textBox27->Location = System::Drawing::Point(84, 211);
		this->textBox27->Name = L"textBox27";
		this->textBox27->ReadOnly = true;
		this->textBox27->Size = System::Drawing::Size(115, 20);
		this->textBox27->TabIndex = 48;
		this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox28
		// 
		this->textBox28->Location = System::Drawing::Point(84, 189);
		this->textBox28->Name = L"textBox28";
		this->textBox28->ReadOnly = true;
		this->textBox28->Size = System::Drawing::Size(115, 20);
		this->textBox28->TabIndex = 47;
		this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox29
		// 
		this->textBox29->Location = System::Drawing::Point(84, 167);
		this->textBox29->Name = L"textBox29";
		this->textBox29->ReadOnly = true;
		this->textBox29->Size = System::Drawing::Size(115, 20);
		this->textBox29->TabIndex = 46;
		this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox30
		// 
		this->textBox30->Location = System::Drawing::Point(84, 145);
		this->textBox30->Name = L"textBox30";
		this->textBox30->ReadOnly = true;
		this->textBox30->Size = System::Drawing::Size(115, 20);
		this->textBox30->TabIndex = 45;
		this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox31
		// 
		this->textBox31->Location = System::Drawing::Point(84, 123);
		this->textBox31->Name = L"textBox31";
		this->textBox31->ReadOnly = true;
		this->textBox31->Size = System::Drawing::Size(115, 20);
		this->textBox31->TabIndex = 44;
		this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox32
		// 
		this->textBox32->Location = System::Drawing::Point(84, 101);
		this->textBox32->Name = L"textBox32";
		this->textBox32->ReadOnly = true;
		this->textBox32->Size = System::Drawing::Size(115, 20);
		this->textBox32->TabIndex = 43;
		this->textBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox33
		// 
		this->textBox33->Location = System::Drawing::Point(84, 78);
		this->textBox33->Name = L"textBox33";
		this->textBox33->ReadOnly = true;
		this->textBox33->Size = System::Drawing::Size(115, 20);
		this->textBox33->TabIndex = 42;
		this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// textBox34
		// 
		this->textBox34->Location = System::Drawing::Point(84, 56);
		this->textBox34->Name = L"textBox34";
		this->textBox34->ReadOnly = true;
		this->textBox34->Size = System::Drawing::Size(115, 20);
		this->textBox34->TabIndex = 41;
		this->textBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		this->textBox34->TextChanged += gcnew System::EventHandler(this, &Form1::textBox34_TextChanged);
		// 
		// textBox35
		// 
		this->textBox35->Location = System::Drawing::Point(84, 34);
		this->textBox35->Name = L"textBox35";
		this->textBox35->ReadOnly = true;
		this->textBox35->Size = System::Drawing::Size(115, 20);
		this->textBox35->TabIndex = 40;
		this->textBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
		// 
		// label16
		// 
		this->label16->AutoSize = true;
		this->label16->Location = System::Drawing::Point(81, 9);
		this->label16->Name = L"label16";
		this->label16->Size = System::Drawing::Size(115, 13);
		this->label16->TabIndex = 52;
		this->label16->Text = L"Yearly CO2 Emmisions:";
		this->label16->Click += gcnew System::EventHandler(this, &Form1::label16_Click);
		// 
		// label17
		// 
		this->label17->AutoSize = true;
		this->label17->Location = System::Drawing::Point(12, 343);
		this->label17->Name = L"label17";
		this->label17->Size = System::Drawing::Size(149, 13);
		this->label17->TabIndex = 53;
		this->label17->Text = L"Change All Emission Increase:";
		// 
		// textBox36
		// 
		this->textBox36->Location = System::Drawing::Point(167, 340);
		this->textBox36->Name = L"textBox36";
		this->textBox36->Size = System::Drawing::Size(100, 20);
		this->textBox36->TabIndex = 54;
		// 
		// textBox37
		// 
		this->textBox37->Location = System::Drawing::Point(167, 365);
		this->textBox37->Name = L"textBox37";
		this->textBox37->Size = System::Drawing::Size(100, 20);
		this->textBox37->TabIndex = 56;
		// 
		// label18
		// 
		this->label18->AutoSize = true;
		this->label18->Location = System::Drawing::Point(12, 368);
		this->label18->Name = L"label18";
		this->label18->Size = System::Drawing::Size(158, 13);
		this->label18->TabIndex = 55;
		this->label18->Text = L"Change All Population Increase:";
		// 
		// Form1
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(784, 498);
		this->Controls->Add(this->textBox37);
		this->Controls->Add(this->label18);
		this->Controls->Add(this->textBox36);
		this->Controls->Add(this->label17);
		this->Controls->Add(this->label16);
		this->Controls->Add(this->textBox24);
		this->Controls->Add(this->textBox25);
		this->Controls->Add(this->textBox26);
		this->Controls->Add(this->textBox27);
		this->Controls->Add(this->textBox28);
		this->Controls->Add(this->textBox29);
		this->Controls->Add(this->textBox30);
		this->Controls->Add(this->textBox31);
		this->Controls->Add(this->textBox32);
		this->Controls->Add(this->textBox33);
		this->Controls->Add(this->textBox34);
		this->Controls->Add(this->textBox35);
		this->Controls->Add(this->label15);
		this->Controls->Add(this->label14);
		this->Controls->Add(this->textBox12);
		this->Controls->Add(this->textBox13);
		this->Controls->Add(this->textBox14);
		this->Controls->Add(this->textBox15);
		this->Controls->Add(this->textBox16);
		this->Controls->Add(this->textBox17);
		this->Controls->Add(this->textBox18);
		this->Controls->Add(this->textBox19);
		this->Controls->Add(this->textBox20);
		this->Controls->Add(this->textBox21);
		this->Controls->Add(this->textBox22);
		this->Controls->Add(this->textBox23);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->textBox6);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->textBox7);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->textBox8);
		this->Controls->Add(this->label11);
		this->Controls->Add(this->textBox9);
		this->Controls->Add(this->label12);
		this->Controls->Add(this->textBox10);
		this->Controls->Add(this->label13);
		this->Controls->Add(this->textBox11);
		this->Controls->Add(this->label5);
		this->Controls->Add(this->textBox3);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->textBox4);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->textBox5);
		this->Controls->Add(this->label4);
		this->Controls->Add(this->textBox2);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->textBox1);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->outputBox);
		this->Controls->Add(this->btnCalculate);
		this->Name = L"Form1";
		this->Text = L"Mass Extinction Calculator";
		this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
		this->ResumeLayout(false);
		this->PerformLayout();

	}

#pragma endregion

	void start() {
		
	}


	void Test1(Button^ button1) {
		button1->Text = "Yo";
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Test1(this->button1);
	}



private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox34_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
}