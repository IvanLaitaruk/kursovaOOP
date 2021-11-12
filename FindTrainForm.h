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
	/// Summary for FindTrainForm
	/// </summary>
	public ref class FindTrainForm : public System::Windows::Forms::Form
	{
	public:
		FindTrainForm(worksheet::AllTrains* alltrains, std::string* option)
		{
			InitializeComponent();
			this->alltrains = alltrains;
			this->option = option;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FindTrainForm()
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
	private: System::Windows::Forms::Label^ mainLabel;

	private: System::Windows::Forms::TextBox^ stationTextBox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ closeButton;



	private: Zeroit::Framework::Metro::ZeroitMetroButton^ findButton;
	private: System::Windows::Forms::Label^ monthElabel;

	private: System::Windows::Forms::Label^ dayMElabel;

	private: System::Windows::Forms::Label^ monthSlabel;

	private: System::Windows::Forms::Label^ dayMSlabel;
	private: System::Windows::Forms::Label^ minElabel;


	private: System::Windows::Forms::Label^ minSlabel;
	private: System::Windows::Forms::Label^ hourElabel;


	private: System::Windows::Forms::Label^ hourSlabel;

	private: System::Windows::Forms::ComboBox^ monthEcomboBox;
	private: System::Windows::Forms::ComboBox^ dayMEcomboBox;
	private: System::Windows::Forms::ComboBox^ minEComboBox;
	private: System::Windows::Forms::ComboBox^ hourEComboBox;
	private: System::Windows::Forms::ComboBox^ monthSComboBox;
	private: System::Windows::Forms::ComboBox^ dayMScomboBox;
	private: System::Windows::Forms::ComboBox^ minSComboBox;
	private: System::Windows::Forms::ComboBox^ hourSComboBox;
	private: System::Windows::Forms::Label^ timeElabel;

	private: System::Windows::Forms::Label^ timeSlabel;

	private: System::Windows::Forms::Label^ endLabel;

	private: System::Windows::Forms::Label^ startLabel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FindTrainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->mainLabel = (gcnew System::Windows::Forms::Label());
			this->stationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->closeButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->findButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->monthElabel = (gcnew System::Windows::Forms::Label());
			this->dayMElabel = (gcnew System::Windows::Forms::Label());
			this->monthSlabel = (gcnew System::Windows::Forms::Label());
			this->dayMSlabel = (gcnew System::Windows::Forms::Label());
			this->minElabel = (gcnew System::Windows::Forms::Label());
			this->minSlabel = (gcnew System::Windows::Forms::Label());
			this->hourElabel = (gcnew System::Windows::Forms::Label());
			this->hourSlabel = (gcnew System::Windows::Forms::Label());
			this->monthEcomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->dayMEcomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->minEComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->hourEComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->monthSComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->dayMScomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->minSComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->hourSComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->timeElabel = (gcnew System::Windows::Forms::Label());
			this->timeSlabel = (gcnew System::Windows::Forms::Label());
			this->endLabel = (gcnew System::Windows::Forms::Label());
			this->startLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(72, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(788, 68);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(0, 63);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 371);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// mainLabel
			// 
			this->mainLabel->AutoSize = true;
			this->mainLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->mainLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->mainLabel->Location = System::Drawing::Point(83, 18);
			this->mainLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->mainLabel->Name = L"mainLabel";
			this->mainLabel->Size = System::Drawing::Size(177, 35);
			this->mainLabel->TabIndex = 23;
			this->mainLabel->Text = L"Find trains by ";
			// 
			// stationTextBox
			// 
			this->stationTextBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stationTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->stationTextBox->Location = System::Drawing::Point(173, 392);
			this->stationTextBox->Name = L"stationTextBox";
			this->stationTextBox->Size = System::Drawing::Size(174, 35);
			this->stationTextBox->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label4->Location = System::Drawing::Point(86, 395);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 27);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Station:";
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
			this->dataGridView->Location = System::Drawing::Point(89, 74);
			this->dataGridView->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView->MinimumSize = System::Drawing::Size(0, 62);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowHeadersVisible = false;
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 30;
			this->dataGridView->Size = System::Drawing::Size(762, 190);
			this->dataGridView->TabIndex = 39;
			// 
			// closeButton
			// 
			this->closeButton->BackColor = System::Drawing::Color::Transparent;
			this->closeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->closeButton->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->closeButton->DefaultColor = System::Drawing::SystemColors::ActiveCaption;
			this->closeButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->closeButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->closeButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->closeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->closeButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->closeButton->Location = System::Drawing::Point(750, 397);
			this->closeButton->Name = L"closeButton";
			this->closeButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->closeButton->RoundingArc = 30;
			this->closeButton->Size = System::Drawing::Size(101, 30);
			this->closeButton->TabIndex = 81;
			this->closeButton->Text = L"Close";
			this->closeButton->Click += gcnew System::EventHandler(this, &FindTrainForm::closeButton_Click);
			// 
			// findButton
			// 
			this->findButton->BackColor = System::Drawing::Color::Transparent;
			this->findButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->findButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->findButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->findButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->findButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->findButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->findButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->findButton->Location = System::Drawing::Point(643, 397);
			this->findButton->Name = L"findButton";
			this->findButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->findButton->RoundingArc = 30;
			this->findButton->Size = System::Drawing::Size(101, 30);
			this->findButton->TabIndex = 80;
			this->findButton->Text = L"Find";
			this->findButton->Click += gcnew System::EventHandler(this, &FindTrainForm::findButton_Click);
			// 
			// monthElabel
			// 
			this->monthElabel->AutoSize = true;
			this->monthElabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->monthElabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->monthElabel->Location = System::Drawing::Point(669, 340);
			this->monthElabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->monthElabel->Name = L"monthElabel";
			this->monthElabel->Size = System::Drawing::Size(44, 18);
			this->monthElabel->TabIndex = 101;
			this->monthElabel->Text = L"month";
			this->monthElabel->Visible = false;
			// 
			// dayMElabel
			// 
			this->dayMElabel->AutoSize = true;
			this->dayMElabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dayMElabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->dayMElabel->Location = System::Drawing::Point(543, 340);
			this->dayMElabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dayMElabel->Name = L"dayMElabel";
			this->dayMElabel->Size = System::Drawing::Size(81, 18);
			this->dayMElabel->TabIndex = 100;
			this->dayMElabel->Text = L"day of month";
			this->dayMElabel->Visible = false;
			// 
			// monthSlabel
			// 
			this->monthSlabel->AutoSize = true;
			this->monthSlabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->monthSlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->monthSlabel->Location = System::Drawing::Point(393, 340);
			this->monthSlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->monthSlabel->Name = L"monthSlabel";
			this->monthSlabel->Size = System::Drawing::Size(44, 18);
			this->monthSlabel->TabIndex = 99;
			this->monthSlabel->Text = L"month";
			this->monthSlabel->Visible = false;
			// 
			// dayMSlabel
			// 
			this->dayMSlabel->AutoSize = true;
			this->dayMSlabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dayMSlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->dayMSlabel->Location = System::Drawing::Point(268, 340);
			this->dayMSlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->dayMSlabel->Name = L"dayMSlabel";
			this->dayMSlabel->Size = System::Drawing::Size(81, 18);
			this->dayMSlabel->TabIndex = 98;
			this->dayMSlabel->Text = L"day of month";
			this->dayMSlabel->Visible = false;
			// 
			// minElabel
			// 
			this->minElabel->AutoSize = true;
			this->minElabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minElabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->minElabel->Location = System::Drawing::Point(669, 285);
			this->minElabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minElabel->Name = L"minElabel";
			this->minElabel->Size = System::Drawing::Size(46, 18);
			this->minElabel->TabIndex = 97;
			this->minElabel->Text = L"minute";
			this->minElabel->Visible = false;
			// 
			// minSlabel
			// 
			this->minSlabel->AutoSize = true;
			this->minSlabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minSlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->minSlabel->Location = System::Drawing::Point(393, 285);
			this->minSlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->minSlabel->Name = L"minSlabel";
			this->minSlabel->Size = System::Drawing::Size(46, 18);
			this->minSlabel->TabIndex = 96;
			this->minSlabel->Text = L"minute";
			this->minSlabel->Visible = false;
			// 
			// hourElabel
			// 
			this->hourElabel->AutoSize = true;
			this->hourElabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hourElabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->hourElabel->Location = System::Drawing::Point(567, 285);
			this->hourElabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hourElabel->Name = L"hourElabel";
			this->hourElabel->Size = System::Drawing::Size(34, 18);
			this->hourElabel->TabIndex = 95;
			this->hourElabel->Text = L"hour";
			this->hourElabel->Visible = false;
			// 
			// hourSlabel
			// 
			this->hourSlabel->AutoSize = true;
			this->hourSlabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hourSlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->hourSlabel->Location = System::Drawing::Point(290, 285);
			this->hourSlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->hourSlabel->Name = L"hourSlabel";
			this->hourSlabel->Size = System::Drawing::Size(34, 18);
			this->hourSlabel->TabIndex = 94;
			this->hourSlabel->Text = L"hour";
			this->hourSlabel->Visible = false;
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
			this->monthEcomboBox->Location = System::Drawing::Point(662, 359);
			this->monthEcomboBox->Margin = System::Windows::Forms::Padding(4);
			this->monthEcomboBox->Name = L"monthEcomboBox";
			this->monthEcomboBox->Size = System::Drawing::Size(60, 30);
			this->monthEcomboBox->TabIndex = 93;
			this->monthEcomboBox->Visible = false;
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
			this->dayMEcomboBox->Location = System::Drawing::Point(554, 359);
			this->dayMEcomboBox->Margin = System::Windows::Forms::Padding(4);
			this->dayMEcomboBox->Name = L"dayMEcomboBox";
			this->dayMEcomboBox->Size = System::Drawing::Size(60, 30);
			this->dayMEcomboBox->TabIndex = 92;
			this->dayMEcomboBox->Visible = false;
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
			this->minEComboBox->Location = System::Drawing::Point(662, 306);
			this->minEComboBox->Margin = System::Windows::Forms::Padding(4);
			this->minEComboBox->Name = L"minEComboBox";
			this->minEComboBox->Size = System::Drawing::Size(60, 30);
			this->minEComboBox->TabIndex = 91;
			this->minEComboBox->Visible = false;
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
			this->hourEComboBox->Location = System::Drawing::Point(555, 306);
			this->hourEComboBox->Margin = System::Windows::Forms::Padding(4);
			this->hourEComboBox->Name = L"hourEComboBox";
			this->hourEComboBox->Size = System::Drawing::Size(60, 30);
			this->hourEComboBox->TabIndex = 90;
			this->hourEComboBox->Visible = false;
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
			this->monthSComboBox->Location = System::Drawing::Point(386, 359);
			this->monthSComboBox->Margin = System::Windows::Forms::Padding(4);
			this->monthSComboBox->Name = L"monthSComboBox";
			this->monthSComboBox->Size = System::Drawing::Size(60, 30);
			this->monthSComboBox->TabIndex = 89;
			this->monthSComboBox->Visible = false;
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
			this->dayMScomboBox->Location = System::Drawing::Point(278, 359);
			this->dayMScomboBox->Margin = System::Windows::Forms::Padding(4);
			this->dayMScomboBox->Name = L"dayMScomboBox";
			this->dayMScomboBox->Size = System::Drawing::Size(60, 30);
			this->dayMScomboBox->TabIndex = 88;
			this->dayMScomboBox->Visible = false;
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
			this->minSComboBox->Location = System::Drawing::Point(386, 306);
			this->minSComboBox->Margin = System::Windows::Forms::Padding(4);
			this->minSComboBox->Name = L"minSComboBox";
			this->minSComboBox->Size = System::Drawing::Size(60, 30);
			this->minSComboBox->TabIndex = 87;
			this->minSComboBox->Visible = false;
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
			this->hourSComboBox->Location = System::Drawing::Point(278, 306);
			this->hourSComboBox->Margin = System::Windows::Forms::Padding(4);
			this->hourSComboBox->Name = L"hourSComboBox";
			this->hourSComboBox->Size = System::Drawing::Size(60, 30);
			this->hourSComboBox->TabIndex = 86;
			this->hourSComboBox->Visible = false;
			// 
			// timeElabel
			// 
			this->timeElabel->AutoSize = true;
			this->timeElabel->BackColor = System::Drawing::SystemColors::Control;
			this->timeElabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeElabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->timeElabel->Location = System::Drawing::Point(482, 310);
			this->timeElabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->timeElabel->Name = L"timeElabel";
			this->timeElabel->Size = System::Drawing::Size(65, 27);
			this->timeElabel->TabIndex = 85;
			this->timeElabel->Text = L"Time:";
			this->timeElabel->Visible = false;
			// 
			// timeSlabel
			// 
			this->timeSlabel->AutoSize = true;
			this->timeSlabel->BackColor = System::Drawing::SystemColors::Control;
			this->timeSlabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeSlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->timeSlabel->Location = System::Drawing::Point(206, 310);
			this->timeSlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->timeSlabel->Name = L"timeSlabel";
			this->timeSlabel->Size = System::Drawing::Size(65, 27);
			this->timeSlabel->TabIndex = 84;
			this->timeSlabel->Text = L"Time:";
			this->timeSlabel->Visible = false;
			// 
			// endLabel
			// 
			this->endLabel->AutoSize = true;
			this->endLabel->BackColor = System::Drawing::SystemColors::Control;
			this->endLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->endLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->endLabel->Location = System::Drawing::Point(617, 268);
			this->endLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->endLabel->Name = L"endLabel";
			this->endLabel->Size = System::Drawing::Size(47, 27);
			this->endLabel->TabIndex = 83;
			this->endLabel->Text = L"End";
			this->endLabel->Visible = false;
			// 
			// startLabel
			// 
			this->startLabel->AutoSize = true;
			this->startLabel->BackColor = System::Drawing::SystemColors::Control;
			this->startLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->startLabel->Location = System::Drawing::Point(334, 268);
			this->startLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->startLabel->Name = L"startLabel";
			this->startLabel->Size = System::Drawing::Size(54, 27);
			this->startLabel->TabIndex = 82;
			this->startLabel->Text = L"Start";
			this->startLabel->Visible = false;
			// 
			// FindTrainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 431);
			this->ControlBox = false;
			this->Controls->Add(this->monthElabel);
			this->Controls->Add(this->dayMElabel);
			this->Controls->Add(this->monthSlabel);
			this->Controls->Add(this->dayMSlabel);
			this->Controls->Add(this->minElabel);
			this->Controls->Add(this->minSlabel);
			this->Controls->Add(this->hourElabel);
			this->Controls->Add(this->hourSlabel);
			this->Controls->Add(this->monthEcomboBox);
			this->Controls->Add(this->dayMEcomboBox);
			this->Controls->Add(this->minEComboBox);
			this->Controls->Add(this->hourEComboBox);
			this->Controls->Add(this->monthSComboBox);
			this->Controls->Add(this->dayMScomboBox);
			this->Controls->Add(this->minSComboBox);
			this->Controls->Add(this->hourSComboBox);
			this->Controls->Add(this->timeElabel);
			this->Controls->Add(this->timeSlabel);
			this->Controls->Add(this->endLabel);
			this->Controls->Add(this->startLabel);
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->findButton);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->stationTextBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->mainLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FindTrainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FindTrainForm";
			this->Load += gcnew System::EventHandler(this, &FindTrainForm::FindTrainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		worksheet::AllTrains* alltrains;
		std::string* option;
#pragma endregion
		void printInTable(std::vector<worksheet::Train>& vect)
		{
			using namespace std;
			int nListVolume = vect.size();
			dataGridView->RowCount = nListVolume * WAY_SIZE;
			dataGridView->ColumnCount = COLUMN_COUNT;
			for (int i = 0, k = 0; i < dataGridView->RowCount; i += WAY_SIZE, k++)
			{
				dataGridView->Rows[i]->Cells[0]->Value = gcnew String(vect[k].getId().c_str());
				dataGridView->Rows[i]->Cells[1]->Value = gcnew String(vect[k].getDeparture().place.c_str());
				dataGridView->Rows[i]->Cells[2]->Value = gcnew String(vect[k].getArrival().place.c_str());
				for (int j = i, w = 0; w < WAY_SIZE; j++, w++)
				{
					dataGridView->Rows[j]->Cells[3]->Value = gcnew String(worksheet::formatStringStation(vect[k].getWay()[w]).c_str());
				}
				dataGridView->Rows[i]->Cells[4]->Value = gcnew String(worksheet::formatStringTime(vect[k].getDeparture().t_departure).c_str());
				dataGridView->Rows[i]->Cells[5]->Value = gcnew String(worksheet::formatStringTime(vect[k].getArrival().t_arrival).c_str());
				string distance;
				distance += to_string((int)vect[k].getDistance());
				distance += " km";
				dataGridView->Rows[i]->Cells[6]->Value = gcnew String(distance.c_str());
			}
		}
		void setTableColumnsSize()
		{
			dataGridView->Columns[0]->Width = 70;
			dataGridView->Columns[1]->Width = 100;
			dataGridView->Columns[2]->Width = 100;
			dataGridView->Columns[3]->Width = 200;
			dataGridView->Columns[4]->Width = 100;
			dataGridView->Columns[5]->Width = 100;
			dataGridView->Columns[6]->Width = 73;
		}
		void stationSettings()
		{
			dataGridView->Height = 311;
		}
		void depAndArrSettings()
		{
			dataGridView->Height = 190;
			timeElabel->Visible = true;
			timeSlabel->Visible = true;
			startLabel->Visible = true;
			endLabel->Visible = true;
			hourEComboBox->Visible = true;
			hourElabel->Visible = true;
			hourSComboBox->Visible = true;
			hourSlabel->Visible = true;
			dayMEcomboBox->Visible = true;
			dayMElabel->Visible = true;
			dayMScomboBox->Visible = true;
			dayMSlabel->Visible = true;
			monthEcomboBox->Visible = true;
			monthElabel->Visible = true;
			monthSComboBox->Visible = true;
			monthSlabel->Visible = true;
			minEComboBox->Visible = true;
			minElabel->Visible = true;
			minSComboBox->Visible = true;
			minSlabel->Visible = true;
		}
	private: System::Void findButton_Click(System::Object^ sender, System::EventArgs^ e) {
		using namespace System::Runtime::InteropServices;
		using namespace std;
		try
		{

			if (stationTextBox->Text == "")
			{
				throw TrainException("The station box is empty!");
			}
			worksheet::Station st;
			st.place = (char*)Marshal::StringToHGlobalAnsi(stationTextBox->Text).ToPointer();
			vector<worksheet::Train> vect;
			if (*option == "station")
			{
				vect = alltrains->findStation(st);
			}
			else if (*option == "departure" || *option == "arrival")
			{
				tm start;
				start.tm_hour = Convert::ToInt64(hourSComboBox->Text);
				start.tm_min = Convert::ToInt64(minSComboBox->Text);
				start.tm_mon = Convert::ToInt64(monthSComboBox->Text);
				start.tm_mday = Convert::ToInt64(dayMScomboBox->Text);
				tm end;
				end.tm_hour = Convert::ToInt64(hourEComboBox->Text);
				end.tm_min = Convert::ToInt64(minEComboBox->Text);
				end.tm_mon = Convert::ToInt64(monthEcomboBox->Text);
				end.tm_mday = Convert::ToInt64(dayMEcomboBox->Text);
				if (*option == "departure")
					vect = alltrains->findByDepartureAndTime(st, start, end);
				else
					vect = alltrains->findByArrivalAndTime(st, start, end);
			}
			if (vect.size() == 0)
			{
				throw TrainException("There`s no such trains!");
			}
		printInTable(vect);
		setTableColumnsSize();
		}
		catch (TrainException exc)
		{
			ErrorForm^ ef = gcnew ErrorForm(&exc);
			if (ef->ShowDialog() == Windows::Forms::DialogResult::OK) {}
		}
	}
private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void FindTrainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	mainLabel->Text += gcnew String(option->c_str());
	if (*option == "station")
	{
		stationSettings();
	}
	else if (*option == "departure" || *option == "arrival")
	{
		depAndArrSettings();
	}
}
};
}
