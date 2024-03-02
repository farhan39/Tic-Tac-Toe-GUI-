#pragma once

//project by 21L-5247

namespace TicTacToeby21L5247 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ lblPlayerO;



	private: System::Windows::Forms::Label^ lblPlayerX;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn7;


	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;


	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;


	private: System::Windows::Forms::Button^ btnNEWGAME;

	private: System::Windows::Forms::Button^ btnRESET;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnNEWGAME = (gcnew System::Windows::Forms::Button());
			this->btnRESET = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->btn9);
			this->panel1->Controls->Add(this->btn8);
			this->panel1->Controls->Add(this->btn6);
			this->panel1->Controls->Add(this->btn5);
			this->panel1->Controls->Add(this->btn7);
			this->panel1->Controls->Add(this->btn3);
			this->panel1->Controls->Add(this->btn4);
			this->panel1->Controls->Add(this->btn2);
			this->panel1->Controls->Add(this->btn1);
			this->panel1->Location = System::Drawing::Point(12, 95);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(291, 297);
			this->panel1->TabIndex = 0;
			// 
			// btn9
			// 
			this->btn9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn9->AutoEllipsis = true;
			this->btn9->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn9->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn9->Location = System::Drawing::Point(181, 187);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(86, 88);
			this->btn9->TabIndex = 0;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn8->AutoEllipsis = true;
			this->btn8->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn8->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn8->Location = System::Drawing::Point(97, 187);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(86, 88);
			this->btn8->TabIndex = 0;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn6
			// 
			this->btn6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn6->AutoEllipsis = true;
			this->btn6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn6->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn6->Location = System::Drawing::Point(181, 104);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(86, 88);
			this->btn6->TabIndex = 0;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn5->AutoEllipsis = true;
			this->btn5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn5->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn5->Location = System::Drawing::Point(97, 104);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(86, 88);
			this->btn5->TabIndex = 0;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn7
			// 
			this->btn7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn7->AutoEllipsis = true;
			this->btn7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn7->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn7->Location = System::Drawing::Point(15, 187);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(86, 88);
			this->btn7->TabIndex = 0;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn3
			// 
			this->btn3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn3->AutoEllipsis = true;
			this->btn3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn3->Location = System::Drawing::Point(181, 19);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(86, 88);
			this->btn3->TabIndex = 0;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn4->AutoEllipsis = true;
			this->btn4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn4->Location = System::Drawing::Point(15, 104);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(86, 88);
			this->btn4->TabIndex = 0;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn2
			// 
			this->btn2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn2->AutoEllipsis = true;
			this->btn2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn2->Location = System::Drawing::Point(97, 19);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(86, 88);
			this->btn2->TabIndex = 0;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btn1->AutoEllipsis = true;
			this->btn1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Agency FB", 22, System::Drawing::FontStyle::Bold));
			this->btn1->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->btn1->Location = System::Drawing::Point(15, 19);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(86, 88);
			this->btn1->TabIndex = 0;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblPlayerO->BackColor = System::Drawing::Color::Cyan;
			this->lblPlayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->ForeColor = System::Drawing::Color::Black;
			this->lblPlayerO->Location = System::Drawing::Point(161, 105);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(29, 39);
			this->lblPlayerO->TabIndex = 0;
			this->lblPlayerO->Text = L"0";
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Location = System::Drawing::Point(313, 105);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(246, 297);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->lblPlayerO);
			this->panel4->Controls->Add(this->lblPlayerX);
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(240, 166);
			this->panel4->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(75, -3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 39);
			this->label3->TabIndex = 2;
			this->label3->Text = L"WINS :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(15, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 39);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Player O";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(15, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Player X";
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblPlayerX->BackColor = System::Drawing::Color::Cyan;
			this->lblPlayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->ForeColor = System::Drawing::Color::Black;
			this->lblPlayerX->Location = System::Drawing::Point(161, 46);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(29, 39);
			this->lblPlayerX->TabIndex = 0;
			this->lblPlayerX->Text = L"0";
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->Controls->Add(this->btnNEWGAME);
			this->panel5->Controls->Add(this->btnRESET);
			this->panel5->Location = System::Drawing::Point(3, 150);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(240, 144);
			this->panel5->TabIndex = 0;
			// 
			// btnNEWGAME
			// 
			this->btnNEWGAME->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnNEWGAME->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnNEWGAME->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNEWGAME->ForeColor = System::Drawing::Color::Yellow;
			this->btnNEWGAME->Location = System::Drawing::Point(10, 80);
			this->btnNEWGAME->Name = L"btnNEWGAME";
			this->btnNEWGAME->Size = System::Drawing::Size(219, 59);
			this->btnNEWGAME->TabIndex = 0;
			this->btnNEWGAME->Text = L"NEW GAME";
			this->btnNEWGAME->UseVisualStyleBackColor = false;
			this->btnNEWGAME->Click += gcnew System::EventHandler(this, &MyForm::btnNEWGAME_Click);
			// 
			// btnRESET
			// 
			this->btnRESET->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRESET->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnRESET->Font = (gcnew System::Drawing::Font(L"Agency FB", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRESET->ForeColor = System::Drawing::Color::Yellow;
			this->btnRESET->Location = System::Drawing::Point(10, 18);
			this->btnRESET->Name = L"btnRESET";
			this->btnRESET->Size = System::Drawing::Size(219, 64);
			this->btnRESET->TabIndex = 0;
			this->btnRESET->Text = L"RESET";
			this->btnRESET->UseVisualStyleBackColor = false;
			this->btnRESET->Click += gcnew System::EventHandler(this, &MyForm::btnRESET_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->Font = (gcnew System::Drawing::Font(L"Agency FB", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(172, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 50);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Tic Tac Toe";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(547, 77);
			this->panel2->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(583, 430);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Yellow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(605, 486);
			this->MinimumSize = System::Drawing::Size(605, 486);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tic Tac Toe by 21L-5247";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		Boolean checker;
		int count = 0;
		int plusone=0;
#pragma endregion
		void Enable_False()
		{
			btn1->Enabled = false;
			btn2->Enabled = false;
			btn3->Enabled = false;
			btn4->Enabled = false;
			btn5->Enabled = false;
			btn6->Enabled = false;
			btn7->Enabled = false;
			btn8->Enabled = false;
			btn9->Enabled = false;

		}

		void score()
		{
			count++;

			//Configuration for player X starts...

			if (btn1->Text == "X" && btn2->Text == "X" && btn3->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				

			}


			else if (btn1->Text == "X" && btn4->Text == "X" && btn7->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}


			else if (btn1->Text == "X" && btn5->Text == "X" && btn9->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				
			}

			else if (btn4->Text == "X" && btn5->Text == "X" && btn6->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				
			}

			else if (btn7->Text == "X" && btn8->Text == "X" && btn9->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				
			}

			else if (btn3->Text == "X" && btn5->Text == "X" && btn7->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				
			}
			
			else if (btn2->Text == "X" && btn5->Text == "X" && btn8->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				
			}

			else if (btn3->Text == "X" && btn6->Text == "X" && btn9->Text == "X")
			{
				
				MessageBox::Show("Player X wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
				
			}
			

			//---------------------------------------------------------------------------------------------------
			//---------------------------------------------------------------------------------------------------

			//Configuration for player 0 starts...

			else if (btn1->Text == "O" && btn2->Text == "O" && btn3->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					

			}

			else if (btn1->Text == "O" && btn4->Text == "O" && btn7->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					

			}

			else if (btn1->Text == "O" && btn5->Text == "O" && btn9->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					

			}

			else if (btn4->Text == "O" && btn5->Text == "O" && btn6->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					
			}

			else if (btn7->Text == "O" && btn8->Text == "O" && btn9->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					
			}

			else if (btn3->Text == "O" && btn5->Text == "O" && btn7->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					
			}

			else if (btn2->Text == "O" && btn5->Text == "O" && btn8->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					
			}

			else if (btn3->Text == "O" && btn6->Text == "O" && btn9->Text == "O")
			{
				
				MessageBox::Show("Player O wins!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
					
			}
				
			else if (count == 9)
			{
				MessageBox::Show("Game draws !", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

		}

private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	

	if (checker == false)
	{
		btn1->Text = "X";
		checker = true;
		
	}
	else
	{
		btn1->Text = "O";
		checker = false;
		
	}
	
	score();
	btn1->Enabled = false;
	

	
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn2->Text = "X";
		checker = true;
		
	}
	else
	{
		btn2->Text = "O";
		checker = false;
		
	}
	
	score();
	btn2->Enabled = false;
	
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn3->Text = "X";
		checker = true;
		
	}
	else
	{
		btn3->Text = "O";
		checker = false;
		
	}
	score();
	btn3->Enabled = false;
	

}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn4->Text = "X";
		checker = true;
	
	}
	else
	{
		btn4->Text = "O";
		checker = false;
		
	}
	score();
	btn4->Enabled = false;
	

}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn5->Text = "X";
		checker = true;
		
	}
	else
	{
		btn5->Text = "O";
		checker = false;
	
	}
	score();
	btn5->Enabled = false;
	

}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn6->Text = "X";
		checker = true;
		
	}
	else
	{
		btn6->Text = "O";
		checker = false;
	
	}
	score();
	btn6->Enabled = false;
	
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn7->Text = "X";
		checker = true;
		
	}
	else
	{
		btn7->Text = "O";
		checker = false;

	}
	score();
	btn7->Enabled = false;
	
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn8->Text = "X";
		checker = true;
		
	}
	else
	{
		btn8->Text = "O";
		checker = false;
	
	}
	score();
	btn8->Enabled = false;
	

}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (checker == false)
	{
		btn9->Text = "X";
		checker = true;
	
	}
	else
	{
		btn9->Text = "O";
		checker = false;
		
	}
	btn9->Enabled = false;
	score();

}

private: System::Void btnRESET_Click(System::Object^ sender, System::EventArgs^ e) {

	btn1->Enabled = true;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;

	btn1->Text = "";
	btn2->Text = "";
	btn3->Text = "";
	btn4->Text = "";
	btn5->Text = "";
	btn6->Text = "";
	btn7->Text = "";
	btn8->Text = "";
	btn9->Text = "";
	btnNEWGAME->Enabled = true;
	count = 0;
}
private: System::Void btnNEWGAME_Click(System::Object^ sender, System::EventArgs^ e) {

	btn1->Enabled = true;
	btn2->Enabled = true;
	btn3->Enabled = true;
	btn4->Enabled = true;
	btn5->Enabled = true;
	btn6->Enabled = true;
	btn7->Enabled = true;
	btn8->Enabled = true;
	btn9->Enabled = true;

	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";


	btn1->Text = "";
	btn2->Text = "";
	btn3->Text = "";
	btn4->Text = "";
	btn5->Text = "";
	btn6->Text = "";
	btn7->Text = "";
	btn8->Text = "";
	btn9->Text = "";
	btnNEWGAME->Enabled = true;
	count = 0;
}
};
}
