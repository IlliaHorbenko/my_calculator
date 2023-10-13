#pragma once

double OperandM2 = 0, OperandM1 = 0, Operand = 0, Wynik = 0; // Zmienne przechowuj¹ce wprowadzone liczby w krokach n-2 i n-1 do obliczenia aktualnego wyniku
int Licznik = 0; // Zmienna przechowuj¹ca iloœæ wprowadzonych liczb
int OperatorM1 = 0, Operator = 0; // Zmienne przechowuj¹ca poprzedni operator i bie¿¹cy operator (1: ÷, 2: *, 3: -, 4: +, 255: =)
bool textBox2_Wynik_Zaktualizowany = 0; // Flaga wykorzystywana do zastêpowania zawartoœci wyœwietlacza wprowadzan¹ liczb¹
bool Dzielenie_Przez_Zero = 0; // Flaga ustawiana po próbie dzielenia przez zero (do braku inkrementacji "Licznik" i zerowania zmiennych)

namespace Kalkulator2018001 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::TextBox^  textBox3;





	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(311, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(419, 55);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(310, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(419, 55);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(311, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 50);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoEllipsis = true;
			this->button2->BackColor = System::Drawing::SystemColors::Window;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(417, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoEllipsis = true;
			this->button3->BackColor = System::Drawing::SystemColors::Window;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(523, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 50);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoEllipsis = true;
			this->button4->BackColor = System::Drawing::SystemColors::Window;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(523, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 50);
			this->button4->TabIndex = 7;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->AutoEllipsis = true;
			this->button5->BackColor = System::Drawing::SystemColors::Window;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(417, 248);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 50);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->AutoEllipsis = true;
			this->button6->BackColor = System::Drawing::SystemColors::Window;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(311, 248);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 50);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->AutoEllipsis = true;
			this->button7->BackColor = System::Drawing::SystemColors::Window;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(523, 192);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 50);
			this->button7->TabIndex = 10;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoEllipsis = true;
			this->button8->BackColor = System::Drawing::SystemColors::Window;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(417, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 50);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->AutoEllipsis = true;
			this->button9->BackColor = System::Drawing::SystemColors::Window;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(311, 192);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 50);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button10
			// 
			this->button10->AutoEllipsis = true;
			this->button10->BackColor = System::Drawing::SystemColors::Window;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(311, 360);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(206, 60);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// button11
			// 
			this->button11->AutoSize = true;
			this->button11->BackColor = System::Drawing::SystemColors::Window;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(309, 136);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 50);
			this->button11->TabIndex = 12;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button12
			// 
			this->button12->AutoEllipsis = true;
			this->button12->BackColor = System::Drawing::SystemColors::Window;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(417, 136);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 50);
			this->button12->TabIndex = 13;
			this->button12->Text = L"CE";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button13
			// 
			this->button13->AutoEllipsis = true;
			this->button13->BackColor = System::Drawing::SystemColors::Window;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(523, 360);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 60);
			this->button13->TabIndex = 14;
			this->button13->Text = L",";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// button14
			// 
			this->button14->AutoEllipsis = true;
			this->button14->BackColor = System::Drawing::SystemColors::Window;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(523, 136);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 50);
			this->button14->TabIndex = 15;
			this->button14->Text = L"÷";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// button15
			// 
			this->button15->AutoEllipsis = true;
			this->button15->BackColor = System::Drawing::SystemColors::Window;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(629, 136);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 50);
			this->button15->TabIndex = 16;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// button16
			// 
			this->button16->AutoEllipsis = true;
			this->button16->BackColor = System::Drawing::SystemColors::Window;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(629, 192);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 50);
			this->button16->TabIndex = 17;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// button17
			// 
			this->button17->AutoEllipsis = true;
			this->button17->BackColor = System::Drawing::SystemColors::Window;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(629, 248);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 50);
			this->button17->TabIndex = 18;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::button17_Click);
			// 
			// button18
			// 
			this->button18->AutoEllipsis = true;
			this->button18->BackColor = System::Drawing::SystemColors::Window;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(629, 304);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(101, 116);
			this->button18->TabIndex = 19;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(12, 12);
			this->textBox3->MaxLength = 131072;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(291, 408);
			this->textBox3->TabIndex = 20;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 430);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void Wypisz(String^ Przycisk) {
			if (textBox2_Wynik_Zaktualizowany) {
				textBox2->Text = "0";
				textBox2_Wynik_Zaktualizowany = 0;
			}
			if (textBox2->Text == "0") {
				textBox2->Text = Przycisk;
			}
			else {
				textBox2->AppendText(Przycisk);
			}
			button18->Select();
		}

		private: System::Void Oblicz() {

			if (Licznik > 0) {
				OperandM2 = OperandM1;
				OperandM1 = Operand;

				switch (OperatorM1)
				{
				case 1:
					if (OperandM1 != 0) {
						Wynik = OperandM2 / OperandM1;
						textBox2->Text = Wynik.ToString();
						OperandM1 = Wynik;
						OperatorM1 = Operator;
					}
					else {
						textBox2->Text = "Nie mo¿na dzieliæ przez 0!";
						Dzielenie_Przez_Zero = 1;
					}
					break;

				case 2:
					Wynik = OperandM2 * OperandM1;
					textBox2->Text = Wynik.ToString();
					OperandM1 = Wynik;
					OperatorM1 = Operator;
					break;

				case 3:
					Wynik = OperandM2 - OperandM1;
					textBox2->Text = Wynik.ToString();
					OperandM1 = Wynik;
					OperatorM1 = Operator;
					break;

				case 4:
					Wynik = OperandM2 + OperandM1;
					textBox2->Text = Wynik.ToString();
					OperandM1 = Wynik;
					OperatorM1 = Operator;
					break;

				case 255:
					break;

				default:
					textBox2->Text = "Nieprawid³owy typ operacji!";
					break;

				}
			}
			else {
				OperandM1 = Operand;
				OperatorM1 = Operator;
			}

			textBox2_Wynik_Zaktualizowany = 1;

			if (!Dzielenie_Przez_Zero) {
				Licznik++;
			}
			else {
				textBox1->Clear();
				OperandM2 = 0, OperandM1 = 0, Operand = 0, Wynik = 0;
				Licznik = 0;
				OperatorM1 = 0, Operator = 0;
				Dzielenie_Przez_Zero = 0;
			}

		}

		private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			this->KeyPreview = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Kalkulator2018001::MainForm::OnKeyDown);

			textBox2->Text = "0";
			button18->Select();
		}

		private: System::Void OnKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyCode == System::Windows::Forms::Keys::D1 || e->KeyCode == System::Windows::Forms::Keys::NumPad1) {
				MainForm::button1->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D2 || e->KeyCode == System::Windows::Forms::Keys::NumPad2) {
				MainForm::button2->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D3 || e->KeyCode == System::Windows::Forms::Keys::NumPad3) {
				MainForm::button3->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D4 || e->KeyCode == System::Windows::Forms::Keys::NumPad4) {
				MainForm::button6->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D5 || e->KeyCode == System::Windows::Forms::Keys::NumPad5) {
				MainForm::button5->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D6 || e->KeyCode == System::Windows::Forms::Keys::NumPad6) {
				MainForm::button4->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D7 || e->KeyCode == System::Windows::Forms::Keys::NumPad7) {
				MainForm::button9->PerformClick();
			}
			else if ((e->Shift && e->KeyCode == System::Windows::Forms::Keys::D8) || e->KeyCode == System::Windows::Forms::Keys::Multiply) {
				MainForm::button15->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D8 || e->KeyCode == System::Windows::Forms::Keys::NumPad8) {
				MainForm::button8->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D9 || e->KeyCode == System::Windows::Forms::Keys::NumPad9) {
				MainForm::button7->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::D0 || e->KeyCode == System::Windows::Forms::Keys::NumPad0) {
				MainForm::button10->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::Oemcomma || e->KeyCode == System::Windows::Forms::Keys::Decimal) {
				MainForm::button13->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::Escape) {
				MainForm::button11->PerformClick();
			}
			else if (e->Shift && e->KeyCode == System::Windows::Forms::Keys::OemQuestion) {
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::OemQuestion || e->KeyCode == System::Windows::Forms::Keys::Divide) {
				MainForm::button14->PerformClick();
			}
			else if (e->Shift && e->KeyCode == System::Windows::Forms::Keys::OemMinus) {
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::OemMinus || e->KeyCode == System::Windows::Forms::Keys::Subtract) {
				MainForm::button16->PerformClick();
			}
			else if ((e->Shift && e->KeyCode == System::Windows::Forms::Keys::Oemplus) || e->KeyCode == System::Windows::Forms::Keys::Add) {
				MainForm::button17->PerformClick();
			}
			else if (e->KeyCode == System::Windows::Forms::Keys::Oemplus || e->KeyCode == System::Windows::Forms::Keys::Enter) {
				MainForm::button18->PerformClick();
			}

		}

		// Przycisk "1"
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("1");
		}
		// Przycisk "2"
		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("2");
		}
		// Przycisk "3"
		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("3");
		}
		// Przycisk "4"
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("4");
		}
		// Przycisk "5"
		private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("5");
		}
		// Przycisk "6"
		private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("6");
		}
		// Przycisk "7"
		private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("7");
		}
		// Przycisk "8"
		private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("8");
		}
		// Przycisk "9"
		private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			Wypisz("9");
		}
		// Przycisk "0"
		private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox2_Wynik_Zaktualizowany) {
				textBox2->Text = "0";
				textBox2_Wynik_Zaktualizowany = 0;
			}
			if (textBox2->Text != "0") {
				textBox2->AppendText("0");
			}
			button18->Select();
		}
		// Przycisk ","
		private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			if (textBox2_Wynik_Zaktualizowany) {
				textBox2->Text = "0";
				textBox2_Wynik_Zaktualizowany = 0;
			}
			if (!textBox2->Text->Contains(",")) {
				textBox2->AppendText(",");
			}
			button18->Select();
		}
		 // Przycisk "C"
		private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->Clear();
			textBox2->Text = "0";
			OperandM2 = 0, OperandM1 = 0;
			textBox2_Wynik_Zaktualizowany = 0;
			button18->Select();
		}
		// Przycisk "CE"
		private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox2->Text = "0";
			button18->Select();
		}
		// Przycisk "÷"
		private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " ÷ ");
			Operand = Convert::ToDouble(textBox2->Text);
			Operator = 1;
			Oblicz();
			button18->Select();
		}
		// Przycisk "*"
		private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " * ");
			Operand = Convert::ToDouble(textBox2->Text);
			Operator = 2;
			Oblicz();
			button18->Select();
		}
		// Przycisk "-"
		private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " - ");
			Operand = Convert::ToDouble(textBox2->Text);
			Operator = 3;
			Oblicz();
			button18->Select();
		}
		// Przycisk "+"
		private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox1->AppendText(textBox2->Text + " + ");
			Operand = Convert::ToDouble(textBox2->Text);
			Operator = 4;
			Oblicz();
			button18->Select();
		}
		// Przycisk "="
		private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			Operand = Convert::ToDouble(textBox2->Text);
			Operator = 255;
			Oblicz();
			textBox3->AppendText(textBox1->Text + Operand.ToString() + " = " + textBox2->Text + "\r\n");
			textBox1->Clear();
			OperandM2 = 0, OperandM1 = 0, Operand = 0, Wynik = 0;
			Licznik = 0;
			OperatorM1 = 0, Operator = 0;
			textBox2_Wynik_Zaktualizowany = 1;
		}
		// Przycisk "Wyczyœæ historiê"
		private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox3->Clear();
			button18->Select();
		}
		// Przycisk "Wczytaj historiê"
		private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			try
			{
				StreamReader^ reader = gcnew StreamReader("HistoriaOperacjiKalkulatora.txt");
				textBox3->Clear();
				do
				{
					textBox3->AppendText(reader->ReadLine() + "\r\n");
				} while (reader->Peek() != -1);
				reader->Close();
			}
			catch (FileNotFoundException ^ex)
			{
				MessageBox::Show("Nie znaleziono pliku historii, nie mo¿na wczytaæ operacji!","B³¹d");
			}

			catch (System::Exception ^e)
			{
				MessageBox::Show(e->ToString());
			}
			button18->Select();
		}
		 // Przycisk "Zapisz historiê"
		private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			StreamWriter^ pwriter = gcnew StreamWriter("HistoriaOperacjiKalkulatora.txt");
			pwriter->WriteLine(textBox3->Text);
			pwriter->Close();
			button18->Select();
		}

};
}
