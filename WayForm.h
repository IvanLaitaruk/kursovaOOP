#pragma once
#include <iostream>
#include "AllTrains.h"

namespace kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WayForm
	/// </summary>
	public ref class WayForm : public System::Windows::Forms::Form
	{
	public:
		WayForm(std::vector<worksheet::Station>* way)
		{
			InitializeComponent();
            this->way = way;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WayForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ sortLabel;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ dismissButton;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ claimButton;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ addButton;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::ComboBox^ monthEcomboBox;
    private: System::Windows::Forms::ComboBox^ dayMEcomboBox;
    private: System::Windows::Forms::ComboBox^ minEComboBox;
    private: System::Windows::Forms::ComboBox^ hourEComboBox;
    private: System::Windows::Forms::ComboBox^ monthSComboBox;
    private: System::Windows::Forms::ComboBox^ dayMScomboBox;
    private: System::Windows::Forms::ComboBox^ minSComboBox;
    private: System::Windows::Forms::ComboBox^ hourSComboBox;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ StTextBox;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ListBox^ wayListBox;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WayForm::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->sortLabel = (gcnew System::Windows::Forms::Label());
            this->dismissButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->claimButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->addButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->monthEcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->dayMEcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->minEComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->hourEComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->monthSComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->dayMScomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->minSComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->hourSComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->StTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->wayListBox = (gcnew System::Windows::Forms::ListBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, -1);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(52, 45);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 3;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox3->Location = System::Drawing::Point(49, -1);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(551, 45);
            this->pictureBox3->TabIndex = 5;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox2->Location = System::Drawing::Point(0, 41);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(52, 298);
            this->pictureBox2->TabIndex = 4;
            this->pictureBox2->TabStop = false;
            // 
            // sortLabel
            // 
            this->sortLabel->AutoSize = true;
            this->sortLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->sortLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->sortLabel->ForeColor = System::Drawing::SystemColors::Control;
            this->sortLabel->Location = System::Drawing::Point(59, 5);
            this->sortLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->sortLabel->Name = L"sortLabel";
            this->sortLabel->Size = System::Drawing::Size(162, 35);
            this->sortLabel->TabIndex = 23;
            this->sortLabel->Text = L"Way stations";
            // 
            // dismissButton
            // 
            this->dismissButton->BackColor = System::Drawing::Color::Transparent;
            this->dismissButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->dismissButton->BorderColor = System::Drawing::SystemColors::ActiveCaption;
            this->dismissButton->DefaultColor = System::Drawing::SystemColors::ActiveCaption;
            this->dismissButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
            this->dismissButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->dismissButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->dismissButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->dismissButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->dismissButton->Location = System::Drawing::Point(493, 304);
            this->dismissButton->Name = L"dismissButton";
            this->dismissButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
                static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->dismissButton->RoundingArc = 30;
            this->dismissButton->Size = System::Drawing::Size(101, 30);
            this->dismissButton->TabIndex = 52;
            this->dismissButton->Text = L"Dismiss";
            // 
            // claimButton
            // 
            this->claimButton->BackColor = System::Drawing::Color::Transparent;
            this->claimButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->claimButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->claimButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->claimButton->DialogResult = System::Windows::Forms::DialogResult::OK;
            this->claimButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->claimButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->claimButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->claimButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->claimButton->Location = System::Drawing::Point(279, 304);
            this->claimButton->Name = L"claimButton";
            this->claimButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->claimButton->RoundingArc = 30;
            this->claimButton->Size = System::Drawing::Size(101, 30);
            this->claimButton->TabIndex = 51;
            this->claimButton->Text = L"Claim";
            // 
            // addButton
            // 
            this->addButton->BackColor = System::Drawing::Color::Transparent;
            this->addButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->addButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->addButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->addButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->addButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->addButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->addButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->addButton->Location = System::Drawing::Point(386, 304);
            this->addButton->Name = L"addButton";
            this->addButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->addButton->RoundingArc = 30;
            this->addButton->Size = System::Drawing::Size(101, 30);
            this->addButton->TabIndex = 53;
            this->addButton->Text = L"Add";
            this->addButton->Click += gcnew System::EventHandler(this, &WayForm::addButton_Click);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label15->Location = System::Drawing::Point(534, 235);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(44, 18);
            this->label15->TabIndex = 75;
            this->label15->Text = L"month";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label14->Location = System::Drawing::Point(408, 235);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(81, 18);
            this->label14->TabIndex = 74;
            this->label14->Text = L"day of month";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label13->Location = System::Drawing::Point(258, 235);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(44, 18);
            this->label13->TabIndex = 73;
            this->label13->Text = L"month";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label12->Location = System::Drawing::Point(133, 235);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(81, 18);
            this->label12->TabIndex = 72;
            this->label12->Text = L"day of month";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label11->Location = System::Drawing::Point(534, 180);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(46, 18);
            this->label11->TabIndex = 71;
            this->label11->Text = L"minute";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label10->Location = System::Drawing::Point(258, 180);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(46, 18);
            this->label10->TabIndex = 70;
            this->label10->Text = L"minute";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label9->Location = System::Drawing::Point(432, 180);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(34, 18);
            this->label9->TabIndex = 69;
            this->label9->Text = L"hour";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label8->Location = System::Drawing::Point(155, 180);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(34, 18);
            this->label8->TabIndex = 68;
            this->label8->Text = L"hour";
            // 
            // monthEcomboBox
            // 
            this->monthEcomboBox->AccessibleDescription = L"";
            this->monthEcomboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->monthEcomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->monthEcomboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->monthEcomboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->monthEcomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->monthEcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"0", L"1", L"2", L"3", L"4", L"5", L"6",
                    L"7", L"8", L"9", L"10", L"11"
            });
            this->monthEcomboBox->Location = System::Drawing::Point(527, 254);
            this->monthEcomboBox->Margin = System::Windows::Forms::Padding(4);
            this->monthEcomboBox->Name = L"monthEcomboBox";
            this->monthEcomboBox->Size = System::Drawing::Size(60, 30);
            this->monthEcomboBox->TabIndex = 67;
            // 
            // dayMEcomboBox
            // 
            this->dayMEcomboBox->AccessibleDescription = L"";
            this->dayMEcomboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->dayMEcomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->dayMEcomboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->dayMEcomboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->dayMEcomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->dayMEcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
                L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
                    L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
                    L"27", L"28", L"29", L"30", L"31"
            });
            this->dayMEcomboBox->Location = System::Drawing::Point(419, 254);
            this->dayMEcomboBox->Margin = System::Windows::Forms::Padding(4);
            this->dayMEcomboBox->Name = L"dayMEcomboBox";
            this->dayMEcomboBox->Size = System::Drawing::Size(60, 30);
            this->dayMEcomboBox->TabIndex = 66;
            // 
            // minEComboBox
            // 
            this->minEComboBox->AccessibleDescription = L"";
            this->minEComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->minEComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->minEComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->minEComboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->minEComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->minEComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
                L"00", L"01", L"02", L"03", L"04", L"05", L"06",
                    L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
                    L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
                    L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
            });
            this->minEComboBox->Location = System::Drawing::Point(527, 201);
            this->minEComboBox->Margin = System::Windows::Forms::Padding(4);
            this->minEComboBox->Name = L"minEComboBox";
            this->minEComboBox->Size = System::Drawing::Size(60, 30);
            this->minEComboBox->TabIndex = 65;
            // 
            // hourEComboBox
            // 
            this->hourEComboBox->AccessibleDescription = L"";
            this->hourEComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->hourEComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->hourEComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->hourEComboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->hourEComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->hourEComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
                L"00", L"01", L"02", L"03", L"04", L"05", L"06",
                    L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
            });
            this->hourEComboBox->Location = System::Drawing::Point(420, 201);
            this->hourEComboBox->Margin = System::Windows::Forms::Padding(4);
            this->hourEComboBox->Name = L"hourEComboBox";
            this->hourEComboBox->Size = System::Drawing::Size(60, 30);
            this->hourEComboBox->TabIndex = 64;
            // 
            // monthSComboBox
            // 
            this->monthSComboBox->AccessibleDescription = L"";
            this->monthSComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->monthSComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->monthSComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->monthSComboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->monthSComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->monthSComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
                L"0", L"1", L"2", L"3", L"4", L"5", L"6",
                    L"7", L"8", L"9", L"10", L"11"
            });
            this->monthSComboBox->Location = System::Drawing::Point(251, 254);
            this->monthSComboBox->Margin = System::Windows::Forms::Padding(4);
            this->monthSComboBox->Name = L"monthSComboBox";
            this->monthSComboBox->Size = System::Drawing::Size(60, 30);
            this->monthSComboBox->TabIndex = 63;
            // 
            // dayMScomboBox
            // 
            this->dayMScomboBox->AccessibleDescription = L"";
            this->dayMScomboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->dayMScomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->dayMScomboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->dayMScomboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->dayMScomboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->dayMScomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(31) {
                L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
                    L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
                    L"27", L"28", L"29", L"30", L"31"
            });
            this->dayMScomboBox->Location = System::Drawing::Point(143, 254);
            this->dayMScomboBox->Margin = System::Windows::Forms::Padding(4);
            this->dayMScomboBox->Name = L"dayMScomboBox";
            this->dayMScomboBox->Size = System::Drawing::Size(60, 30);
            this->dayMScomboBox->TabIndex = 62;
            // 
            // minSComboBox
            // 
            this->minSComboBox->AccessibleDescription = L"";
            this->minSComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->minSComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->minSComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->minSComboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->minSComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->minSComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
                L"00", L"01", L"02", L"03", L"04", L"05", L"06",
                    L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24",
                    L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42",
                    L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
            });
            this->minSComboBox->Location = System::Drawing::Point(251, 201);
            this->minSComboBox->Margin = System::Windows::Forms::Padding(4);
            this->minSComboBox->Name = L"minSComboBox";
            this->minSComboBox->Size = System::Drawing::Size(60, 30);
            this->minSComboBox->TabIndex = 61;
            // 
            // hourSComboBox
            // 
            this->hourSComboBox->AccessibleDescription = L"";
            this->hourSComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->hourSComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->hourSComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->hourSComboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->hourSComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->hourSComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(24) {
                L"00", L"01", L"02", L"03", L"04", L"05", L"06",
                    L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23"
            });
            this->hourSComboBox->Location = System::Drawing::Point(143, 201);
            this->hourSComboBox->Margin = System::Windows::Forms::Padding(4);
            this->hourSComboBox->Name = L"hourSComboBox";
            this->hourSComboBox->Size = System::Drawing::Size(60, 30);
            this->hourSComboBox->TabIndex = 60;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::SystemColors::Control;
            this->label7->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label7->Location = System::Drawing::Point(347, 204);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(65, 27);
            this->label7->TabIndex = 59;
            this->label7->Text = L"Time:";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::SystemColors::Control;
            this->label6->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label6->Location = System::Drawing::Point(70, 204);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(65, 27);
            this->label6->TabIndex = 58;
            this->label6->Text = L"Time:";
            // 
            // StTextBox
            // 
            this->StTextBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->StTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->StTextBox->Location = System::Drawing::Point(143, 115);
            this->StTextBox->Name = L"StTextBox";
            this->StTextBox->Size = System::Drawing::Size(168, 35);
            this->StTextBox->TabIndex = 57;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::Control;
            this->label4->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label4->Location = System::Drawing::Point(60, 118);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(80, 27);
            this->label4->TabIndex = 56;
            this->label4->Text = L"Station:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::Control;
            this->label3->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label3->Location = System::Drawing::Point(480, 153);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(47, 27);
            this->label3->TabIndex = 55;
            this->label3->Text = L"End";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::Control;
            this->label2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label2->Location = System::Drawing::Point(200, 153);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(54, 27);
            this->label2->TabIndex = 54;
            this->label2->Text = L"Start";
            // 
            // wayListBox
            // 
            this->wayListBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->wayListBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->wayListBox->FormattingEnabled = true;
            this->wayListBox->ItemHeight = 27;
            this->wayListBox->Location = System::Drawing::Point(65, 60);
            this->wayListBox->Name = L"wayListBox";
            this->wayListBox->Size = System::Drawing::Size(515, 31);
            this->wayListBox->TabIndex = 77;
            // 
            // WayForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(600, 339);
            this->ControlBox = false;
            this->Controls->Add(this->wayListBox);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->monthEcomboBox);
            this->Controls->Add(this->dayMEcomboBox);
            this->Controls->Add(this->minEComboBox);
            this->Controls->Add(this->hourEComboBox);
            this->Controls->Add(this->monthSComboBox);
            this->Controls->Add(this->dayMScomboBox);
            this->Controls->Add(this->minSComboBox);
            this->Controls->Add(this->hourSComboBox);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->StTextBox);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->addButton);
            this->Controls->Add(this->dismissButton);
            this->Controls->Add(this->claimButton);
            this->Controls->Add(this->sortLabel);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"WayForm";
            this->ShowIcon = false;
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"WayForm";
            this->Load += gcnew System::EventHandler(this, &WayForm::WayForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
        int i = 0;
        std::vector<worksheet::Station>* way;
#pragma endregion
    private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
        if (i < 3)
        {
            using namespace System::Runtime::InteropServices;
            worksheet::Station st;
            st.place = (char*)Marshal::StringToHGlobalAnsi(StTextBox->Text).ToPointer();
            st.t_departure.tm_hour = Convert::ToInt64(hourSComboBox->Text);
            st.t_departure.tm_min = Convert::ToInt64(minSComboBox->Text);
            st.t_departure.tm_mon = Convert::ToInt64(monthSComboBox->Text);
            st.t_departure.tm_mday = Convert::ToInt64(dayMScomboBox->Text);
            st.t_arrival.tm_hour = Convert::ToInt64(hourEComboBox->Text);
            st.t_arrival.tm_min = Convert::ToInt64(minEComboBox->Text);
            st.t_arrival.tm_mon = Convert::ToInt64(monthEcomboBox->Text);
            st.t_arrival.tm_mday = Convert::ToInt64(dayMEcomboBox->Text);
            this->way->push_back(st);
            wayListBox->Items->Add(gcnew String(worksheet::formatStringStation(st).c_str()));
            i++;
        }
        else
        {
            //messagebox
        }
    }
private: System::Void WayForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
