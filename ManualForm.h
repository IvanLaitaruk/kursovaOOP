#pragma once
#include "WayForm.h"
#include "ErrorForm.h"

namespace kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManualForm
	/// </summary>
	public ref class ManualForm : public System::Windows::Forms::Form
	{
	public:
		ManualForm(worksheet::AllTrains* alltrains)
		{
            this->alltrains = alltrains;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManualForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ sortLabel;
	private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ IDtextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

    private: System::Windows::Forms::TextBox^ startStTextBox;
    private: System::Windows::Forms::TextBox^ endStTextBox;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::ComboBox^ hourSComboBox;
    private: System::Windows::Forms::ComboBox^ minSComboBox;
    private: System::Windows::Forms::ComboBox^ dayMScomboBox;
    private: System::Windows::Forms::ComboBox^ monthSComboBox;
    private: System::Windows::Forms::ComboBox^ hourEComboBox;
    private: System::Windows::Forms::ComboBox^ minEComboBox;
    private: System::Windows::Forms::ComboBox^ dayMEcomboBox;
    private: System::Windows::Forms::ComboBox^ monthEcomboBox;












    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: Zeroit::Framework::Metro::ZeroitMetroButton^ claimButton;
    private: Zeroit::Framework::Metro::ZeroitMetroButton^ dismissButton;


    private: Zeroit::Framework::Metro::ZeroitMetroButton^ zeroitMetroButton2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::ListBox^ trainsListBox;

    private: Zeroit::Framework::Metro::ZeroitMetroButton^ addButton;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ distanceTextBox;
    private: System::Windows::Forms::Label^ label17;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManualForm::typeid));
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->sortLabel = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->IDtextBox = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->startStTextBox = (gcnew System::Windows::Forms::TextBox());
            this->endStTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->hourSComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->minSComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->dayMScomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->monthSComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->hourEComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->minEComboBox = (gcnew System::Windows::Forms::ComboBox());
            this->dayMEcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->monthEcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->claimButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->dismissButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->zeroitMetroButton2 = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->trainsListBox = (gcnew System::Windows::Forms::ListBox());
            this->addButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->distanceTextBox = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(0, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(76, 68);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox1->TabIndex = 0;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox2->Location = System::Drawing::Point(0, 64);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(75, 377);
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox3->Location = System::Drawing::Point(72, 0);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(758, 68);
            this->pictureBox3->TabIndex = 2;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(774, 12);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(44, 46);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox4->TabIndex = 3;
            this->pictureBox4->TabStop = false;
            // 
            // sortLabel
            // 
            this->sortLabel->AutoSize = true;
            this->sortLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->sortLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->sortLabel->ForeColor = System::Drawing::SystemColors::Control;
            this->sortLabel->Location = System::Drawing::Point(83, 18);
            this->sortLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->sortLabel->Name = L"sortLabel";
            this->sortLabel->Size = System::Drawing::Size(282, 35);
            this->sortLabel->TabIndex = 22;
            this->sortLabel->Text = L"Creating a list manually";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::SystemColors::Control;
            this->label1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label1->Location = System::Drawing::Point(133, 90);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(40, 27);
            this->label1->TabIndex = 23;
            this->label1->Text = L"ID:";
            // 
            // IDtextBox
            // 
            this->IDtextBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->IDtextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->IDtextBox->Location = System::Drawing::Point(103, 120);
            this->IDtextBox->Name = L"IDtextBox";
            this->IDtextBox->Size = System::Drawing::Size(100, 35);
            this->IDtextBox->TabIndex = 24;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::Control;
            this->label2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label2->Location = System::Drawing::Point(229, 167);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(54, 27);
            this->label2->TabIndex = 25;
            this->label2->Text = L"Start";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::Control;
            this->label3->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label3->Location = System::Drawing::Point(686, 162);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(47, 27);
            this->label3->TabIndex = 26;
            this->label3->Text = L"End";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::Control;
            this->label4->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label4->Location = System::Drawing::Point(84, 200);
            this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(80, 27);
            this->label4->TabIndex = 27;
            this->label4->Text = L"Station:";
            // 
            // startStTextBox
            // 
            this->startStTextBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->startStTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->startStTextBox->Location = System::Drawing::Point(171, 197);
            this->startStTextBox->Name = L"startStTextBox";
            this->startStTextBox->Size = System::Drawing::Size(168, 35);
            this->startStTextBox->TabIndex = 29;
            // 
            // endStTextBox
            // 
            this->endStTextBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->endStTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->endStTextBox->Location = System::Drawing::Point(623, 192);
            this->endStTextBox->Name = L"endStTextBox";
            this->endStTextBox->Size = System::Drawing::Size(168, 35);
            this->endStTextBox->TabIndex = 30;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::SystemColors::Control;
            this->label6->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label6->Location = System::Drawing::Point(98, 259);
            this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(65, 27);
            this->label6->TabIndex = 31;
            this->label6->Text = L"Time:";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::SystemColors::Control;
            this->label7->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label7->Location = System::Drawing::Point(551, 254);
            this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(65, 27);
            this->label7->TabIndex = 32;
            this->label7->Text = L"Time:";
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
            this->hourSComboBox->Location = System::Drawing::Point(171, 256);
            this->hourSComboBox->Margin = System::Windows::Forms::Padding(4);
            this->hourSComboBox->Name = L"hourSComboBox";
            this->hourSComboBox->Size = System::Drawing::Size(60, 30);
            this->hourSComboBox->TabIndex = 33;
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
            this->minSComboBox->Location = System::Drawing::Point(279, 256);
            this->minSComboBox->Margin = System::Windows::Forms::Padding(4);
            this->minSComboBox->Name = L"minSComboBox";
            this->minSComboBox->Size = System::Drawing::Size(60, 30);
            this->minSComboBox->TabIndex = 34;
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
            this->dayMScomboBox->Location = System::Drawing::Point(171, 309);
            this->dayMScomboBox->Margin = System::Windows::Forms::Padding(4);
            this->dayMScomboBox->Name = L"dayMScomboBox";
            this->dayMScomboBox->Size = System::Drawing::Size(60, 30);
            this->dayMScomboBox->TabIndex = 35;
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
            this->monthSComboBox->Location = System::Drawing::Point(279, 309);
            this->monthSComboBox->Margin = System::Windows::Forms::Padding(4);
            this->monthSComboBox->Name = L"monthSComboBox";
            this->monthSComboBox->Size = System::Drawing::Size(60, 30);
            this->monthSComboBox->TabIndex = 36;
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
            this->hourEComboBox->Location = System::Drawing::Point(624, 251);
            this->hourEComboBox->Margin = System::Windows::Forms::Padding(4);
            this->hourEComboBox->Name = L"hourEComboBox";
            this->hourEComboBox->Size = System::Drawing::Size(60, 30);
            this->hourEComboBox->TabIndex = 37;
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
            this->minEComboBox->Location = System::Drawing::Point(731, 251);
            this->minEComboBox->Margin = System::Windows::Forms::Padding(4);
            this->minEComboBox->Name = L"minEComboBox";
            this->minEComboBox->Size = System::Drawing::Size(60, 30);
            this->minEComboBox->TabIndex = 38;
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
            this->dayMEcomboBox->Location = System::Drawing::Point(623, 304);
            this->dayMEcomboBox->Margin = System::Windows::Forms::Padding(4);
            this->dayMEcomboBox->Name = L"dayMEcomboBox";
            this->dayMEcomboBox->Size = System::Drawing::Size(60, 30);
            this->dayMEcomboBox->TabIndex = 39;
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
            this->monthEcomboBox->Location = System::Drawing::Point(731, 304);
            this->monthEcomboBox->Margin = System::Windows::Forms::Padding(4);
            this->monthEcomboBox->Name = L"monthEcomboBox";
            this->monthEcomboBox->Size = System::Drawing::Size(60, 30);
            this->monthEcomboBox->TabIndex = 40;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label8->Location = System::Drawing::Point(183, 235);
            this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(34, 18);
            this->label8->TabIndex = 41;
            this->label8->Text = L"hour";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label9->Location = System::Drawing::Point(636, 230);
            this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(34, 18);
            this->label9->TabIndex = 42;
            this->label9->Text = L"hour";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label10->Location = System::Drawing::Point(286, 235);
            this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(46, 18);
            this->label10->TabIndex = 43;
            this->label10->Text = L"minute";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label11->Location = System::Drawing::Point(738, 230);
            this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(46, 18);
            this->label11->TabIndex = 44;
            this->label11->Text = L"minute";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label12->Location = System::Drawing::Point(161, 290);
            this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(81, 18);
            this->label12->TabIndex = 45;
            this->label12->Text = L"day of month";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label13->Location = System::Drawing::Point(286, 290);
            this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(44, 18);
            this->label13->TabIndex = 46;
            this->label13->Text = L"month";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label14->Location = System::Drawing::Point(612, 285);
            this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(81, 18);
            this->label14->TabIndex = 47;
            this->label14->Text = L"day of month";
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
                static_cast<System::Int32>(static_cast<System::Byte>(198)));
            this->label15->Location = System::Drawing::Point(738, 285);
            this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(44, 18);
            this->label15->TabIndex = 48;
            this->label15->Text = L"month";
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
            this->claimButton->Location = System::Drawing::Point(508, 411);
            this->claimButton->Name = L"claimButton";
            this->claimButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->claimButton->RoundingArc = 25;
            this->claimButton->Size = System::Drawing::Size(101, 25);
            this->claimButton->TabIndex = 49;
            this->claimButton->Text = L"Claim";
            this->claimButton->Click += gcnew System::EventHandler(this, &ManualForm::claimButton_Click);
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
            this->dismissButton->Location = System::Drawing::Point(722, 411);
            this->dismissButton->Name = L"dismissButton";
            this->dismissButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
                static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->dismissButton->RoundingArc = 25;
            this->dismissButton->Size = System::Drawing::Size(101, 25);
            this->dismissButton->TabIndex = 50;
            this->dismissButton->Text = L"Dismiss";
            this->dismissButton->Click += gcnew System::EventHandler(this, &ManualForm::dismissButton_Click);
            // 
            // zeroitMetroButton2
            // 
            this->zeroitMetroButton2->BackColor = System::Drawing::Color::Transparent;
            this->zeroitMetroButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->zeroitMetroButton2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
                static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->zeroitMetroButton2->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
                static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->zeroitMetroButton2->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
                static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
            this->zeroitMetroButton2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->zeroitMetroButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->zeroitMetroButton2->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->zeroitMetroButton2->Location = System::Drawing::Point(623, 115);
            this->zeroitMetroButton2->Name = L"zeroitMetroButton2";
            this->zeroitMetroButton2->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
                static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->zeroitMetroButton2->RoundingArc = 35;
            this->zeroitMetroButton2->Size = System::Drawing::Size(168, 35);
            this->zeroitMetroButton2->TabIndex = 51;
            this->zeroitMetroButton2->Text = L"Add way stations";
            this->zeroitMetroButton2->Click += gcnew System::EventHandler(this, &ManualForm::zeroitMetroButton2_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::SystemColors::Control;
            this->label5->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label5->Location = System::Drawing::Point(536, 195);
            this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(80, 27);
            this->label5->TabIndex = 28;
            this->label5->Text = L"Station:";
            // 
            // trainsListBox
            // 
            this->trainsListBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->trainsListBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->trainsListBox->FormattingEnabled = true;
            this->trainsListBox->ItemHeight = 27;
            this->trainsListBox->Location = System::Drawing::Point(115, 357);
            this->trainsListBox->Name = L"trainsListBox";
            this->trainsListBox->Size = System::Drawing::Size(703, 31);
            this->trainsListBox->TabIndex = 78;
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
            this->addButton->Location = System::Drawing::Point(615, 411);
            this->addButton->Name = L"addButton";
            this->addButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
                static_cast<System::Int32>(static_cast<System::Byte>(174)));
            this->addButton->RoundingArc = 25;
            this->addButton->Size = System::Drawing::Size(101, 25);
            this->addButton->TabIndex = 79;
            this->addButton->Text = L"Add";
            this->addButton->Click += gcnew System::EventHandler(this, &ManualForm::addButton_Click);
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::SystemColors::Control;
            this->label16->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label16->Location = System::Drawing::Point(235, 90);
            this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(89, 27);
            this->label16->TabIndex = 80;
            this->label16->Text = L"Distance";
            // 
            // distanceTextBox
            // 
            this->distanceTextBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->distanceTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->distanceTextBox->Location = System::Drawing::Point(230, 120);
            this->distanceTextBox->Name = L"distanceTextBox";
            this->distanceTextBox->Size = System::Drawing::Size(100, 35);
            this->distanceTextBox->TabIndex = 81;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::SystemColors::Control;
            this->label17->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
                static_cast<System::Int32>(static_cast<System::Byte>(160)));
            this->label17->Location = System::Drawing::Point(337, 128);
            this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(41, 27);
            this->label17->TabIndex = 82;
            this->label17->Text = L"km";
            // 
            // ManualForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(830, 441);
            this->ControlBox = false;
            this->Controls->Add(this->label17);
            this->Controls->Add(this->distanceTextBox);
            this->Controls->Add(this->label16);
            this->Controls->Add(this->addButton);
            this->Controls->Add(this->trainsListBox);
            this->Controls->Add(this->zeroitMetroButton2);
            this->Controls->Add(this->dismissButton);
            this->Controls->Add(this->claimButton);
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
            this->Controls->Add(this->endStTextBox);
            this->Controls->Add(this->startStTextBox);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->IDtextBox);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->sortLabel);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"ManualForm";
            this->ShowIcon = false;
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Load += gcnew System::EventHandler(this, &ManualForm::ManualForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
        WayForm^ wf;
        worksheet::AllTrains* alltrains;
        std::vector<worksheet::Station>* way;
#pragma endregion
    private: System::Void dismissButton_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }
private: System::Void zeroitMetroButton2_Click(System::Object^ sender, System::EventArgs^ e) {
    way = new std::vector<worksheet::Station>();
    wf = gcnew WayForm(way);
    if (wf->ShowDialog() == Windows::Forms::DialogResult::OK){}
}
private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
    using namespace System::Runtime::InteropServices;
    std::string check_empty = "";
    bool bcheck_empty = false;
    if (IDtextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "ID error\n";
    }
    if (distanceTextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "Distance error\n";
    }
    if (startStTextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "Start station error\n";
    }
    if (endStTextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "End station error\n";
    }
    try
    {
    if (bcheck_empty)
    throw TrainException("Empty data!", check_empty);
    worksheet::Train tr;
    tr.setId((char*)Marshal::StringToHGlobalAnsi(IDtextBox->Text).ToPointer());
    worksheet::Station dep;
    dep.place = (char*)Marshal::StringToHGlobalAnsi(startStTextBox->Text).ToPointer();
    dep.t_departure.tm_hour = Convert::ToInt64(hourSComboBox->Text);
    dep.t_departure.tm_min = Convert::ToInt64(minSComboBox->Text);
    dep.t_departure.tm_mon = Convert::ToInt64(monthSComboBox->Text);
    dep.t_departure.tm_mday = Convert::ToInt64(dayMScomboBox->Text);
    tr.setDeparture(dep);
    worksheet::Station arr;
    arr.place = (char*)Marshal::StringToHGlobalAnsi(endStTextBox->Text).ToPointer();
    arr.t_arrival.tm_hour = Convert::ToInt64(hourEComboBox->Text);
    arr.t_arrival.tm_min = Convert::ToInt64(minEComboBox->Text);
    arr.t_arrival.tm_mon = Convert::ToInt64(monthEcomboBox->Text);
    arr.t_arrival.tm_mday = Convert::ToInt64(dayMEcomboBox->Text);
    tr.setArrival(arr);
    tr.setDistance(Convert::ToDouble(distanceTextBox->Text));
    tr.setWay(*way);
    trainsListBox->Items->Add(gcnew String(tr.getTrainStr().c_str()));
    this->alltrains->getTrains().push_back(tr);
    }
    catch (TrainException exc)
    {
        ErrorForm^ ef = gcnew ErrorForm(&exc);
        if (ef->ShowDialog() == Windows::Forms::DialogResult::OK){}
    }
}
private: System::Void ManualForm_Load(System::Object^ sender, System::EventArgs^ e) {
    trainsListBox->Text = "";
}
private: System::Void claimButton_Click(System::Object^ sender, System::EventArgs^ e) {
    std::string check_empty = "";
    bool bcheck_empty = false;
    if (IDtextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "ID error\n";
    }
    if (distanceTextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "Distance error\n";
    }
    if (startStTextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "Start station error\n";
    }
    if (endStTextBox->Text == "")
    {
        bcheck_empty = true;
        check_empty += "End station error\n";
    }
    try
    {
        if (bcheck_empty)
            throw TrainException("Empty data!", check_empty);
        this->Close();
    }
    catch (TrainException exc)
    {
        this->claimButton->DialogResult = Windows::Forms::DialogResult::Cancel;
        ErrorForm^ ef = gcnew ErrorForm(&exc);
        if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
    }
}
};
}
