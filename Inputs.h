#pragma once
#include "Outputs.h"

namespace Group36GUIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Inputs
	/// </summary>
	public ref class Inputs : public System::Windows::Forms::Form
	{
	public:
		Inputs(void)
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
		~Inputs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	protected:







































	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inputs::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(30, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1116, 507);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(836, 195);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 190);
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(779, 242);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 29);
			this->label12->TabIndex = 58;
			this->label12->Text = L"h";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(779, 170);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 29);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Km";
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(927, 451);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 32);
			this->button4->TabIndex = 56;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Inputs::button4_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(489, 328);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 32);
			this->label6->TabIndex = 55;
			this->label6->Text = L"Thank You!";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(625, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 29);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Time        ";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(625, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 29);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Distance";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(178, 242);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(197, 29);
			this->label8->TabIndex = 52;
			this->label8->Text = L"Travelling Time";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(178, 170);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(238, 29);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Travelling Distance";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(496, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 38);
			this->label10->TabIndex = 50;
			this->label10->Text = L"Outputs";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(958, 430);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 32);
			this->button2->TabIndex = 49;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Inputs::button2_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(32, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 32);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Inputs::button1_Click_1);
			// 
			// radioButton5
			// 
			this->radioButton5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(516, 382);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(104, 29);
			this->radioButton5->TabIndex = 47;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"On foot";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(516, 347);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(68, 29);
			this->radioButton4->TabIndex = 46;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Car";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(516, 312);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(75, 29);
			this->radioButton3->TabIndex = 45;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Bike";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(516, 277);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 29);
			this->radioButton2->TabIndex = 44;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Bus";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(516, 242);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(83, 29);
			this->radioButton1->TabIndex = 43;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Train";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(422, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(261, 25);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Select a travelling method";
			// 
			// comboBox2
			// 
			this->comboBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"Ampara", L"Anuradhapura", L"Badulla", L"Batticaloa",
					L"Colombo", L"Galle", L"Gampaha", L"Hambantota", L"Jaffna", L"Kalutara", L"Kandy", L"Kegalle", L"Kilinochchi", L"Kurunegala",
					L"Mannar", L"Matale", L"Matara", L"Monaragala", L"Mullativu", L"Nuwara Eliya", L"Polonnaruwa", L"Puttalam", L"Ratnapura", L"Trincomalee",
					L"Vavuniya"
			});
			this->comboBox2->Location = System::Drawing::Point(836, 125);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(224, 24);
			this->comboBox2->TabIndex = 41;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"Ampara", L"Anuradhapura", L"Badulla", L"Batticaloa",
					L"Colombo", L"Galle", L"Gampaha", L"Hambantota", L"Jaffna", L"Kalutara", L"Kandy", L"Kegalle", L"Kilinochchi", L"Kurunegala",
					L"Mannar", L"Matale", L"Matara", L"Monaragala", L"Mullativu", L"Nuwara Eliya", L"Polonnaruwa", L"Puttalam", L"Ratnapura", L"Trincomalee",
					L"Vavuniya"
			});
			this->comboBox1->Location = System::Drawing::Point(278, 125);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(224, 24);
			this->comboBox1->TabIndex = 40;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(587, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 25);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Choose End Location";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(27, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 25);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Choose Start Location";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(504, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 38);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Inputs";
			// 
			// Inputs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1182, 553);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Inputs";
			this->Text = L"Inputs";
			this->Load += gcnew System::EventHandler(this, &Inputs::Inputs_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double speed;
		int distance, output1, output2;
	
private: System::Void Inputs_Load(System::Object^ sender, System::EventArgs^ e) {
	panel1->BackColor = System::Drawing::Color::FromArgb(100, 0, 0, 0);

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	radioButton1->Visible = true;
	radioButton2->Visible = true;
	radioButton3->Visible = true;
	radioButton4->Visible = true;
	radioButton5->Visible = true;
	button1->Visible = true;
	button2->Visible = true;
	button4->Visible = false;
	comboBox1->Visible = true;
	comboBox2->Visible = true;
	pictureBox1->Visible = false;
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Text = "";
	comboBox2->Text = "";
	radioButton1->Checked = "";
	radioButton2->Checked = "";
	radioButton3->Checked = "";
	radioButton4->Checked = "";
	radioButton5->Checked = "";
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ from = this->comboBox1->Text;
	String^ to = this->comboBox2->Text;
	if (from->Length == 0) {
		MessageBox::Show("Please choose a start location",
			"Error", MessageBoxButtons::OK);
	}
	else if (to->Length == 0) {
		MessageBox::Show("Please choose a end location",
			"Error", MessageBoxButtons::OK);
	}
	else if (to->Length == 0 && from->Length == 0) {
		MessageBox::Show("Please choose start & end locations",
			"Error", MessageBoxButtons::OK);
	}
	else if (radioButton1->Checked == 0 && radioButton2->Checked == 0 && radioButton3->Checked == 0 && radioButton4->Checked == 0 && radioButton5->Checked == 0) {
		MessageBox::Show("Please select a travelling method",
			"Error", MessageBoxButtons::OK);
	}
	else {
		if (radioButton1->Checked == 1) {
			speed = 80.0;
		}
		else if (radioButton2->Checked == 1) {
			speed = 60.0;
		}
		else if (radioButton3->Checked == 1) {
			speed = 70.0;
		}
		else if (radioButton4->Checked == 1) {
			speed = 80.0;
		}
		else if (radioButton5->Checked == 1) {
			speed = 5.0;
		}

		int index1 = comboBox1->SelectedIndex;
		int index2 = comboBox2->SelectedIndex;
		int distances[25][25] = {
		{0,302,211,95,292,288,299,122,567,285,267,287,567,287,420,225,387,199,524,227,144,217,347,163,373},
		{302,0,263,364,348,364,344,382,660,361,262,334,660,89,154,161,522,390,367,391,95,112,287,220,359},
		{211,263,0,171,215,330,248,289,518,325,241,212,518,241,434,273,476,271,331,220,127,183,251,82,301},
		{95,364,171,0,327,352,324,217,664,349,325,316,664,316,377,252,455,387,488,268,130,203,327,143,306},
		{292,348,215,327,0,116,49,232,532,39,115,72,532,71,453,313,719,490,747,210,259,137,339,202,481},
		{288,364,330,352,116,0,145,288,636,58,211,34,636,174,741,494,194,330,890,370,249,173,325,212,534},
		{299,344,248,324,49,145,0,341,544,22,158,65,544,127,558,87,155,291,634,145,266,132,107,355,583},
		{122,382,289,217,232,288,341,0,716,266,358,248,716,330,796,572,225,391,935,401,245,177,320,228,550},
		{567,660,518,664,532,636,584,728,0,504,428,502,220,425,418,433,981,762,258,481,372,290,435,369,119},
		{285,361,325,349,39,58,67,243,504,0,168,34,504,127,621,269,458,296,799,279,236,161,328,209,508},
		{267,262,241,325,115,211,105,370,428,168,0,72,428,112,258,78,652,437,316,90,130,186,266,117,278},
		{287,334,212,316,72,109,92,315,502,34,72,0,502,71,286,135,543,383,355,122,109,125,253,127,292},
		{585,715,573,729,557,661,629,773,220,558,487,558,0,425,242,387,905,686,137,263,347,265,415,351,74},
		{237,104,145,252,79,187,107,255,425,127,112,71,425,0,377,199,590,428,289,153,69,87,242,138,304},
		{530,639,504,603,489,603,558,672,389,471,423,471,389,145,0,351,924,705,284,447,207,124,383,328,119},
		{253,184,164,291,122,218,87,327,404,144,44,62,404,62,351,0,737,522,353,131,106,163,250,132,294},
		{303,413,345,387,130,116,155,242,704,116,277,116,704,288,868,634,0,239,973,453,272,206,329,215,580},
		{197,280,144,252,268,252,291,207,603,190,252,190,603,228,474,272,239,0,552,292,173,236,231,157,399},
		{569,710,567,724,562,666,634,778,137,562,502,562,137,558,230,414,964,745,0,263,331,259,456,391,74},
		{297,322,240,345,172,268,145,409,457,234,87,123,457,123,212,236,621,406,263,0,128,184,245,130,339},
		{288,10,136,315,258,324,266,303,620,309,186,228,620,106,174,188,571,447,395,228,0,130,207,170,366},
		{306,118,220,333,124,154,132,247,417,77,141,58,417,58,271,254,630,408,320,333,130,0,317,203,264},
		{282,326,131,314,94,168,107,272,521,63,94,34,521,94,367,190,560,420,409,173,154,170,0,238,459},
		{278,384,387,278,328,424,355,451,256,355,304,322,256,205,349,377,726,507,345,325,164,188,238,0,394},
		{576,704,558,699,543,647,583,727,141,569,443,569,141,569,119,467,943,724,74,339,346,264,459,394,0}
		};
		int distance = distances[index1][index2];
		int output1 = distance;
		double output2 = distance / speed;
		output2.ToString("F2");


		label1->Visible = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		radioButton3->Visible = false;
		radioButton4->Visible = false;
		radioButton5->Visible = false;
		button1->Visible = false;
		button2->Visible = false;
		button4->Visible = true;
		comboBox1->Visible = false;
		comboBox2->Visible = false;
		pictureBox1->Visible = true;
		label7->Text = System::Convert::ToString(output1);
		label5->Text = System::Convert::ToString(output2);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
