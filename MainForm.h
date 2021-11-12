#pragma once

#include "AllTrains.h"
#include "ManualForm.h"
#include "FindTrainForm.h"
#include "GroupForm.h"
#include "AverageSpeedForm.h"
#include "ErrorForm.h"

#define START_STATION "Start station(A - Z)"
#define AVR_SPEED "Average speed(0 - ...)"

namespace kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ BackPictureBox;
	private: System::Windows::Forms::PictureBox^ IconBackPictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ TableHeaderPictureBox;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ComboBox^ comboBoxSort;
	private: System::Windows::Forms::Label^ sortLabel;

	private: System::Windows::Forms::PictureBox^ pictureBoxNewList;
	private: System::Windows::Forms::Label^ fromFileLabel;
	private: System::Windows::Forms::Label^ manualLabel;
	private: System::Windows::Forms::PictureBox^ sleshPictureBox;
	private: System::Windows::Forms::PictureBox^ manualPictureBox;
	private: System::Windows::Forms::PictureBox^ BackgroundPictureBox;


	private: Zeroit::Framework::Metro::ZeroitMetroButton^ trainsStButton;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ zeroitMetroButton1;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ zeroitMetroButton2;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ zeroitMetroButton3;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView;





	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ checkSpeedButton;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolTip^ toolTipFromFile;
	private: System::Windows::Forms::ToolTip^ toolTipManually;
	private: System::Windows::Forms::ToolTip^ toolTipStation;
	private: System::Windows::Forms::ToolTip^ toolTipDeparture;
	private: System::Windows::Forms::ToolTip^ toolTipArrival;
	private: System::Windows::Forms::ToolTip^ toolTipGroup;
	private: System::Windows::Forms::ToolTip^ toolTipSpeed;
	private: System::Windows::Forms::ToolTip^ toolTipDownload;


	private: System::ComponentModel::IContainer^ components;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->BackPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->IconBackPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TableHeaderPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBoxSort = (gcnew System::Windows::Forms::ComboBox());
			this->sortLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBoxNewList = (gcnew System::Windows::Forms::PictureBox());
			this->fromFileLabel = (gcnew System::Windows::Forms::Label());
			this->manualLabel = (gcnew System::Windows::Forms::Label());
			this->sleshPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->manualPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->BackgroundPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->trainsStButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->zeroitMetroButton1 = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->zeroitMetroButton2 = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->zeroitMetroButton3 = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->checkSpeedButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolTipStation = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipDeparture = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipArrival = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipGroup = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipSpeed = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipDownload = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipFromFile = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipManually = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconBackPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableHeaderPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNewList))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sleshPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manualPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackgroundPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// BackPictureBox
			// 
			this->BackPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackPictureBox.Image")));
			this->BackPictureBox->Location = System::Drawing::Point(-1, -2);
			this->BackPictureBox->Name = L"BackPictureBox";
			this->BackPictureBox->Size = System::Drawing::Size(279, 676);
			this->BackPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BackPictureBox->TabIndex = 0;
			this->BackPictureBox->TabStop = false;
			// 
			// IconBackPictureBox
			// 
			this->IconBackPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"IconBackPictureBox.Image")));
			this->IconBackPictureBox->Location = System::Drawing::Point(59, 34);
			this->IconBackPictureBox->Name = L"IconBackPictureBox";
			this->IconBackPictureBox->Size = System::Drawing::Size(154, 154);
			this->IconBackPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->IconBackPictureBox->TabIndex = 1;
			this->IconBackPictureBox->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(71, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// TableHeaderPictureBox
			// 
			this->TableHeaderPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TableHeaderPictureBox.Image")));
			this->TableHeaderPictureBox->Location = System::Drawing::Point(295, 113);
			this->TableHeaderPictureBox->Name = L"TableHeaderPictureBox";
			this->TableHeaderPictureBox->Size = System::Drawing::Size(970, 46);
			this->TableHeaderPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->TableHeaderPictureBox->TabIndex = 3;
			this->TableHeaderPictureBox->TabStop = false;
			this->TableHeaderPictureBox->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 216);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(250, 10);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// comboBoxSort
			// 
			this->comboBoxSort->AccessibleDescription = L"";
			this->comboBoxSort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->comboBoxSort->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxSort->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBoxSort->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSort->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->comboBoxSort->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Start station(A - Z)", L"Average speed(0 - ...)" });
			this->comboBoxSort->Location = System::Drawing::Point(374, 43);
			this->comboBoxSort->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxSort->Name = L"comboBoxSort";
			this->comboBoxSort->Size = System::Drawing::Size(220, 35);
			this->comboBoxSort->TabIndex = 22;
			this->comboBoxSort->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBoxSort_SelectedIndexChanged);
			// 
			// sortLabel
			// 
			this->sortLabel->AutoSize = true;
			this->sortLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->sortLabel->Location = System::Drawing::Point(291, 46);
			this->sortLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->sortLabel->Name = L"sortLabel";
			this->sortLabel->Size = System::Drawing::Size(75, 27);
			this->sortLabel->TabIndex = 21;
			this->sortLabel->Text = L"Sort by";
			// 
			// pictureBoxNewList
			// 
			this->pictureBoxNewList->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBoxNewList->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxNewList.Image")));
			this->pictureBoxNewList->Location = System::Drawing::Point(1067, 15);
			this->pictureBoxNewList->Margin = System::Windows::Forms::Padding(4);
			this->pictureBoxNewList->Name = L"pictureBoxNewList";
			this->pictureBoxNewList->Size = System::Drawing::Size(43, 48);
			this->pictureBoxNewList->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxNewList->TabIndex = 24;
			this->pictureBoxNewList->TabStop = false;
			this->toolTipFromFile->SetToolTip(this->pictureBoxNewList, L"You can upload a list of trains from a file of .txt extension.");
			this->pictureBoxNewList->Click += gcnew System::EventHandler(this, &MainForm::pictureBoxNewList_Click);
			// 
			// fromFileLabel
			// 
			this->fromFileLabel->AutoSize = true;
			this->fromFileLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fromFileLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->fromFileLabel->Location = System::Drawing::Point(1040, 60);
			this->fromFileLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->fromFileLabel->Name = L"fromFileLabel";
			this->fromFileLabel->Size = System::Drawing::Size(93, 27);
			this->fromFileLabel->TabIndex = 23;
			this->fromFileLabel->Text = L"From file";
			// 
			// manualLabel
			// 
			this->manualLabel->AutoSize = true;
			this->manualLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->manualLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->manualLabel->Location = System::Drawing::Point(1167, 60);
			this->manualLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->manualLabel->Name = L"manualLabel";
			this->manualLabel->Size = System::Drawing::Size(98, 27);
			this->manualLabel->TabIndex = 25;
			this->manualLabel->Text = L"Manually";
			// 
			// sleshPictureBox
			// 
			this->sleshPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sleshPictureBox.Image")));
			this->sleshPictureBox->Location = System::Drawing::Point(1140, 23);
			this->sleshPictureBox->Name = L"sleshPictureBox";
			this->sleshPictureBox->Size = System::Drawing::Size(20, 50);
			this->sleshPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->sleshPictureBox->TabIndex = 26;
			this->sleshPictureBox->TabStop = false;
			// 
			// manualPictureBox
			// 
			this->manualPictureBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->manualPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"manualPictureBox.Image")));
			this->manualPictureBox->Location = System::Drawing::Point(1191, 15);
			this->manualPictureBox->Name = L"manualPictureBox";
			this->manualPictureBox->Size = System::Drawing::Size(44, 46);
			this->manualPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->manualPictureBox->TabIndex = 27;
			this->manualPictureBox->TabStop = false;
			this->toolTipManually->SetToolTip(this->manualPictureBox, L"You can create a list of trains manually indicating id, distance, etc information"
				L" by mouse and keyboard.");
			this->manualPictureBox->Click += gcnew System::EventHandler(this, &MainForm::manualPictureBox_Click);
			this->manualPictureBox->DoubleClick += gcnew System::EventHandler(this, &MainForm::manualPictureBox_DoubleClick);
			// 
			// BackgroundPictureBox
			// 
			this->BackgroundPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BackgroundPictureBox.Image")));
			this->BackgroundPictureBox->Location = System::Drawing::Point(295, 165);
			this->BackgroundPictureBox->Name = L"BackgroundPictureBox";
			this->BackgroundPictureBox->Size = System::Drawing::Size(970, 474);
			this->BackgroundPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->BackgroundPictureBox->TabIndex = 28;
			this->BackgroundPictureBox->TabStop = false;
			// 
			// trainsStButton
			// 
			this->trainsStButton->BackColor = System::Drawing::Color::Transparent;
			this->trainsStButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->trainsStButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->trainsStButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->trainsStButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->trainsStButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->trainsStButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->trainsStButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->trainsStButton->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"trainsStButton.Icon")));
			this->trainsStButton->Location = System::Drawing::Point(30, 277);
			this->trainsStButton->Name = L"trainsStButton";
			this->trainsStButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->trainsStButton->RoundingArc = 71;
			this->trainsStButton->Size = System::Drawing::Size(232, 71);
			this->trainsStButton->TabIndex = 30;
			this->trainsStButton->Text = L"Find trains by station";
			this->trainsStButton->TextAlignment = System::Drawing::StringAlignment::Far;
			this->toolTipStation->SetToolTip(this->trainsStButton, L"Gives the list of trains that contains the specified place of station.");
			this->trainsStButton->Click += gcnew System::EventHandler(this, &MainForm::trainsStButton_Click);
			// 
			// zeroitMetroButton1
			// 
			this->zeroitMetroButton1->BackColor = System::Drawing::Color::Transparent;
			this->zeroitMetroButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->zeroitMetroButton1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->zeroitMetroButton1->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->zeroitMetroButton1->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->zeroitMetroButton1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zeroitMetroButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->zeroitMetroButton1->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->zeroitMetroButton1->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zeroitMetroButton1.Icon")));
			this->zeroitMetroButton1->Location = System::Drawing::Point(30, 375);
			this->zeroitMetroButton1->Name = L"zeroitMetroButton1";
			this->zeroitMetroButton1->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->zeroitMetroButton1->RoundingArc = 71;
			this->zeroitMetroButton1->Size = System::Drawing::Size(232, 71);
			this->zeroitMetroButton1->TabIndex = 31;
			this->zeroitMetroButton1->Text = L"Find trains by departure";
			this->zeroitMetroButton1->TextAlignment = System::Drawing::StringAlignment::Far;
			this->toolTipDeparture->SetToolTip(this->zeroitMetroButton1, L"Gives the list of trains that contains the specified place of departure station a"
				L"nd the period of time.");
			this->zeroitMetroButton1->Click += gcnew System::EventHandler(this, &MainForm::zeroitMetroButton1_Click);
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
			this->zeroitMetroButton2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zeroitMetroButton2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->zeroitMetroButton2->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->zeroitMetroButton2->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zeroitMetroButton2.Icon")));
			this->zeroitMetroButton2->Location = System::Drawing::Point(30, 470);
			this->zeroitMetroButton2->Name = L"zeroitMetroButton2";
			this->zeroitMetroButton2->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->zeroitMetroButton2->RoundingArc = 71;
			this->zeroitMetroButton2->Size = System::Drawing::Size(232, 71);
			this->zeroitMetroButton2->TabIndex = 32;
			this->zeroitMetroButton2->Text = L"Find trains by arrival";
			this->zeroitMetroButton2->TextAlignment = System::Drawing::StringAlignment::Far;
			this->toolTipArrival->SetToolTip(this->zeroitMetroButton2, L"Gives the list of trains that contains the specified place of arrival station and"
				L" the period of time.");
			this->zeroitMetroButton2->Click += gcnew System::EventHandler(this, &MainForm::zeroitMetroButton2_Click);
			// 
			// zeroitMetroButton3
			// 
			this->zeroitMetroButton3->BackColor = System::Drawing::Color::Transparent;
			this->zeroitMetroButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->zeroitMetroButton3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->zeroitMetroButton3->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->zeroitMetroButton3->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->zeroitMetroButton3->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zeroitMetroButton3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->zeroitMetroButton3->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->zeroitMetroButton3->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zeroitMetroButton3.Icon")));
			this->zeroitMetroButton3->Location = System::Drawing::Point(30, 568);
			this->zeroitMetroButton3->Name = L"zeroitMetroButton3";
			this->zeroitMetroButton3->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->zeroitMetroButton3->RoundingArc = 71;
			this->zeroitMetroButton3->Size = System::Drawing::Size(232, 71);
			this->zeroitMetroButton3->TabIndex = 33;
			this->zeroitMetroButton3->Text = L"Group trains";
			this->zeroitMetroButton3->TextAlignment = System::Drawing::StringAlignment::Far;
			this->toolTipGroup->SetToolTip(this->zeroitMetroButton3, L"Groups the list into 2 different lists that are separeted by departure station pl"
				L"ace and way station place. You can choose different grouping positions of way st"
				L"ations.");
			this->zeroitMetroButton3->Click += gcnew System::EventHandler(this, &MainForm::zeroitMetroButton3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-1, 280);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(14, 68);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 34;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(-1, 378);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(14, 68);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-1, 473);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(14, 68);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 36;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(157)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(-1, 571);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(14, 68);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 37;
			this->pictureBox6->TabStop = false;
			// 
			// dataGridView
			// 
			this->dataGridView->AllowUserToResizeColumns = false;
			this->dataGridView->AllowUserToResizeRows = false;
			this->dataGridView->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->dataGridView->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->ColumnHeadersVisible = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView->Location = System::Drawing::Point(296, 165);
			this->dataGridView->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView->MinimumSize = System::Drawing::Size(0, 62);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersVisible = false;
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 30;
			this->dataGridView->Size = System::Drawing::Size(969, 474);
			this->dataGridView->TabIndex = 38;
			this->dataGridView->Visible = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// checkSpeedButton
			// 
			this->checkSpeedButton->BackColor = System::Drawing::Color::Transparent;
			this->checkSpeedButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->checkSpeedButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->checkSpeedButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->checkSpeedButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->checkSpeedButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->checkSpeedButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkSpeedButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->checkSpeedButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->checkSpeedButton->Location = System::Drawing::Point(601, 43);
			this->checkSpeedButton->Name = L"checkSpeedButton";
			this->checkSpeedButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->checkSpeedButton->RoundingArc = 35;
			this->checkSpeedButton->Size = System::Drawing::Size(157, 35);
			this->checkSpeedButton->TabIndex = 50;
			this->checkSpeedButton->Text = L"Check speed";
			this->toolTipSpeed->SetToolTip(this->checkSpeedButton, L"After sorting by average speed you can check the list of trains IDs and its avera"
				L"ge speed.");
			this->checkSpeedButton->Visible = false;
			this->checkSpeedButton->Click += gcnew System::EventHandler(this, &MainForm::claimButton_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(876, 15);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(38, 47);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 51;
			this->pictureBox7->TabStop = false;
			this->toolTipDownload->SetToolTip(this->pictureBox7, L"You can download the list of trains to file of .txt extension.");
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MainForm::pictureBox7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label1->Location = System::Drawing::Point(822, 60);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 27);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Download to file";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1279, 670);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkSpeedButton);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->zeroitMetroButton3);
			this->Controls->Add(this->zeroitMetroButton2);
			this->Controls->Add(this->zeroitMetroButton1);
			this->Controls->Add(this->trainsStButton);
			this->Controls->Add(this->BackgroundPictureBox);
			this->Controls->Add(this->manualPictureBox);
			this->Controls->Add(this->sleshPictureBox);
			this->Controls->Add(this->manualLabel);
			this->Controls->Add(this->pictureBoxNewList);
			this->Controls->Add(this->fromFileLabel);
			this->Controls->Add(this->comboBoxSort);
			this->Controls->Add(this->sortLabel);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->TableHeaderPictureBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->IconBackPictureBox);
			this->Controls->Add(this->BackPictureBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Train Manager";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IconBackPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableHeaderPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNewList))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sleshPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->manualPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BackgroundPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ file = "";
		worksheet::AllTrains* alltrains;
		bool isWorked = false;
#pragma endregion

	private: System::Void manualPictureBox_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	}
	   void startWorking()
	   {
		   dataGridView->Visible = true;
		   BackgroundPictureBox->Visible = false;
		   TableHeaderPictureBox->Visible = true;
	   }
	   void setTableColumnsSize()
	   {
		   dataGridView->Columns[0]->Width = 60;
		   dataGridView->Columns[1]->Width = 143;
		   dataGridView->Columns[2]->Width = 149;
		   dataGridView->Columns[3]->Width = 253;
		   dataGridView->Columns[4]->Width = 146;
		   dataGridView->Columns[5]->Width = 119;
		   dataGridView->Columns[6]->Width = 80;
	   }
private: System::Void pictureBoxNewList_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Windows::Forms::DialogResult::OK == openFileDialog1->ShowDialog())
	{
		file = openFileDialog1->FileName;
		try
		{
			if (Path::GetExtension(openFileDialog1->FileName) == ".txt")
			{
				using namespace System::Runtime::InteropServices;
				using namespace std;
				char* path = (char*)Marshal::StringToHGlobalAnsi(file).ToPointer();
				if (isWorked)
				{
					delete alltrains;
				}
				isWorked = true;
				alltrains = new worksheet::AllTrains();
				*alltrains << path;
				alltrains->printInTable(dataGridView);
				setTableColumnsSize();
				startWorking();
				for (int i = 0; i < dataGridView->RowCount; i += WAY_SIZE)
				{
					if (i % 2 == 1)
					{
						for (int j = i; j < i + WAY_SIZE; j++)
						{
							dataGridView->Rows[j]->DefaultCellStyle->BackColor = Color::LightSteelBlue;
						}
					}
				}
			}
			else
			{
				throw TrainException("The file extension isn`t .txt!");
			}
		}
		catch (TrainException exc)
		{
			ErrorForm^ ef = gcnew ErrorForm(&exc);
			if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
		}
	}
}
private: System::Void manualPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	worksheet::AllTrains* alltrainsNew = new worksheet::AllTrains();
	ManualForm^ mf = gcnew ManualForm(alltrainsNew);
	if (mf->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		if (isWorked)
		{delete alltrains;}
		isWorked = true;
		alltrains = alltrainsNew;
		alltrains->printInTable(dataGridView);
		setTableColumnsSize();
		startWorking();
	}
}
private: System::Void comboBoxSort_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	using namespace System::Runtime::InteropServices;
	using namespace std;
	try
	{
		if (isWorked)
		{
			string tempSortOption = (char*)Marshal::StringToHGlobalAnsi(comboBoxSort->Text).ToPointer();
			if (tempSortOption == START_STATION)
			{
				alltrains->sortByDepartureStation();
				checkSpeedButton->Visible = false;
			}
			else if (tempSortOption == AVR_SPEED)
			{
				alltrains->sortByAverageSpeed();
				checkSpeedButton->Visible = true;
			}
				alltrains->printInTable(dataGridView);
		}
		else
		{
			throw TrainException("You haven`t added the list yet!\nAdd trains to start working.");
		}
	}
	catch (TrainException exc)
	{
		ErrorForm^ ef = gcnew ErrorForm(&exc);
		if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
	}
}
private: System::Void trainsStButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string option = "station";
		try
		{
			if (isWorked)
			{
				FindTrainForm^ ftf = gcnew FindTrainForm(alltrains, &option);
				if (ftf->ShowDialog() == Windows::Forms::DialogResult::OK) {}
			}
			else
			{
				throw TrainException("You haven`t added the list yet!\nAdd trains to start working.");
			}
		}
		catch (TrainException exc)
		{
			ErrorForm^ ef = gcnew ErrorForm(&exc);
			if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
		}
}
private: System::Void zeroitMetroButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string option = "departure";
	try
	{
		if (isWorked)
		{
			FindTrainForm^ ftf = gcnew FindTrainForm(alltrains, &option);
			if (ftf->ShowDialog() == Windows::Forms::DialogResult::OK) {}
		}
		else
		{
			throw TrainException("You haven`t added the list yet!\nAdd trains to start working.");
		}
	}
	catch (TrainException exc)
	{
		ErrorForm^ ef = gcnew ErrorForm(&exc);
		if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
	}
}
private: System::Void zeroitMetroButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string option = "arrival";
	try
	{
		if (isWorked)
		{
			FindTrainForm^ ftf = gcnew FindTrainForm(alltrains, &option);
			if (ftf->ShowDialog() == Windows::Forms::DialogResult::OK) {}
		}
		else
		{
			throw TrainException("You haven`t added the list yet!\nAdd trains to start working.");
		}
	}
	catch (TrainException exc)
	{
		ErrorForm^ ef = gcnew ErrorForm(&exc);
		if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
	}
}
private: System::Void zeroitMetroButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (isWorked)
		{
			GroupForm^ gf = gcnew GroupForm(alltrains);
			if (gf->ShowDialog() == Windows::Forms::DialogResult::OK) {}
		}
		else
		{
			throw TrainException("You haven`t added the list yet!\nAdd trains to start working.");
		}
	}
	catch (TrainException exc)
	{
		ErrorForm^ ef = gcnew ErrorForm(&exc);
		if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
	}
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void claimButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AverageSpeedForm^ asf = gcnew AverageSpeedForm(alltrains);
	if (asf->ShowDialog() == Windows::Forms::DialogResult::OK) {}
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try
	{
		if (isWorked)
		{
			if (Windows::Forms::DialogResult::OK == saveFileDialog1->ShowDialog())
			{
				file = saveFileDialog1->FileName;

				if (Path::GetExtension(openFileDialog1->FileName) == ".txt")
				{
					using namespace System::Runtime::InteropServices;
					using namespace std;
					char* path = (char*)Marshal::StringToHGlobalAnsi(file).ToPointer();
					*alltrains >> path;
				}
				else
				{
					throw TrainException("File extension isn`t .txt!");
				}
			}
		}
		else
		{
			throw TrainException("You haven`t added the list yet!\nAdd trains to start working.");
		}
	}
	catch (TrainException exc)
	{
		ErrorForm^ ef = gcnew ErrorForm(&exc);
		if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
	}
}
};
}

