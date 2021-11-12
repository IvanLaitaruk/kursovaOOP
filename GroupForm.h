#pragma once

#include "WayForm.h"

namespace kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GroupForm
	/// </summary>
	public ref class GroupForm : public System::Windows::Forms::Form
	{
	public:
		GroupForm(worksheet::AllTrains* alltrains)
		{
			InitializeComponent();
			this->alltrains = alltrains;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GroupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ sortLabel;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::DataGridView^ dataGridViewArrival;

	private: System::Windows::Forms::Label^ startLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewWay;

	private: Zeroit::Framework::Metro::ZeroitMetroButton^ findButton;
	private: System::Windows::Forms::ComboBox^ wayComboBox;
	private: System::Windows::Forms::Label^ label9;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GroupForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->sortLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridViewArrival = (gcnew System::Windows::Forms::DataGridView());
			this->startLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewWay = (gcnew System::Windows::Forms::DataGridView());
			this->findButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->wayComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArrival))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewWay))->BeginInit();
			this->SuspendLayout();
			// 
			// sortLabel
			// 
			this->sortLabel->AutoSize = true;
			this->sortLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->sortLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->sortLabel->Location = System::Drawing::Point(111, 21);
			this->sortLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->sortLabel->Name = L"sortLabel";
			this->sortLabel->Size = System::Drawing::Size(200, 44);
			this->sortLabel->TabIndex = 26;
			this->sortLabel->Text = L"Group trains";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(96, -1);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1059, 84);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(0, 78);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 636);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1060, 9);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(56, 52);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			// 
			// dataGridViewArrival
			// 
			this->dataGridViewArrival->AllowUserToResizeColumns = false;
			this->dataGridViewArrival->AllowUserToResizeRows = false;
			this->dataGridViewArrival->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->dataGridViewArrival->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewArrival->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridViewArrival->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArrival->ColumnHeadersVisible = false;
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
			this->dataGridViewArrival->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewArrival->Location = System::Drawing::Point(119, 124);
			this->dataGridViewArrival->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->dataGridViewArrival->MinimumSize = System::Drawing::Size(0, 76);
			this->dataGridViewArrival->Name = L"dataGridViewArrival";
			this->dataGridViewArrival->ReadOnly = true;
			this->dataGridViewArrival->RowHeadersVisible = false;
			this->dataGridViewArrival->RowHeadersWidth = 51;
			this->dataGridViewArrival->RowTemplate->Height = 30;
			this->dataGridViewArrival->Size = System::Drawing::Size(1016, 234);
			this->dataGridViewArrival->TabIndex = 40;
			// 
			// startLabel
			// 
			this->startLabel->AutoSize = true;
			this->startLabel->BackColor = System::Drawing::SystemColors::Control;
			this->startLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->startLabel->Location = System::Drawing::Point(112, 86);
			this->startLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->startLabel->Name = L"startLabel";
			this->startLabel->Size = System::Drawing::Size(234, 35);
			this->startLabel->TabIndex = 83;
			this->startLabel->Text = L"For arrival stations:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->label1->Location = System::Drawing::Point(112, 378);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 35);
			this->label1->TabIndex = 85;
			this->label1->Text = L"For way stations:";
			// 
			// dataGridViewWay
			// 
			this->dataGridViewWay->AllowUserToResizeColumns = false;
			this->dataGridViewWay->AllowUserToResizeRows = false;
			this->dataGridViewWay->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->dataGridViewWay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewWay->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridViewWay->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewWay->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(101)),
				static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(101)), static_cast<System::Int32>(static_cast<System::Byte>(136)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewWay->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewWay->Location = System::Drawing::Point(119, 416);
			this->dataGridViewWay->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->dataGridViewWay->MinimumSize = System::Drawing::Size(0, 76);
			this->dataGridViewWay->Name = L"dataGridViewWay";
			this->dataGridViewWay->ReadOnly = true;
			this->dataGridViewWay->RowHeadersVisible = false;
			this->dataGridViewWay->RowHeadersWidth = 51;
			this->dataGridViewWay->RowTemplate->Height = 30;
			this->dataGridViewWay->Size = System::Drawing::Size(1016, 234);
			this->dataGridViewWay->TabIndex = 84;
			// 
			// findButton
			// 
			this->findButton->BackColor = System::Drawing::Color::Transparent;
			this->findButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->findButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->findButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->findButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->findButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->findButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->findButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->findButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->findButton->Location = System::Drawing::Point(1000, 665);
			this->findButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->findButton->Name = L"findButton";
			this->findButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->findButton->RoundingArc = 37;
			this->findButton->Size = System::Drawing::Size(135, 37);
			this->findButton->TabIndex = 86;
			this->findButton->Text = L"OK";
			this->findButton->Click += gcnew System::EventHandler(this, &GroupForm::findButton_Click);
			// 
			// wayComboBox
			// 
			this->wayComboBox->AccessibleDescription = L"";
			this->wayComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->wayComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->wayComboBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->wayComboBox->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->wayComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->wayComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->wayComboBox->Location = System::Drawing::Point(1055, 374);
			this->wayComboBox->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->wayComboBox->Name = L"wayComboBox";
			this->wayComboBox->Size = System::Drawing::Size(79, 34);
			this->wayComboBox->TabIndex = 87;
			this->wayComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GroupForm::wayComboBox_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(198)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->label9->Location = System::Drawing::Point(748, 378);
			this->label9->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(281, 35);
			this->label9->TabIndex = 88;
			this->label9->Text = L"Number of way station:";
			// 
			// GroupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 713);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->wayComboBox);
			this->Controls->Add(this->findButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewWay);
			this->Controls->Add(this->startLabel);
			this->Controls->Add(this->dataGridViewArrival);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->sortLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"GroupForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GroupForm";
			this->Load += gcnew System::EventHandler(this, &GroupForm::GroupForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArrival))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewWay))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		worksheet::AllTrains* alltrains;
#pragma endregion
	void setTableColumnsSize()
	{
		dataGridViewArrival->ColumnCount = 7;
		dataGridViewArrival->Columns[0]->Width = 43;
		dataGridViewArrival->Columns[1]->Width = 85;
		dataGridViewArrival->Columns[2]->Width = 85;
		dataGridViewArrival->Columns[3]->Width = 254;
		dataGridViewArrival->Columns[4]->Width = 100;
		dataGridViewArrival->Columns[5]->Width = 100;
		dataGridViewArrival->Columns[6]->Width = 75;
		dataGridViewWay->ColumnCount = 7;
		dataGridViewWay->Columns[0]->Width = 43;
		dataGridViewWay->Columns[1]->Width = 85;
		dataGridViewWay->Columns[2]->Width = 85;
		dataGridViewWay->Columns[3]->Width = 254;
		dataGridViewWay->Columns[4]->Width = 100;
		dataGridViewWay->Columns[5]->Width = 100;
		dataGridViewWay->Columns[6]->Width = 75;
	}
	private: System::Void findButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	}
private: System::Void GroupForm_Load(System::Object^ sender, System::EventArgs^ e) {
	setTableColumnsSize();
	alltrains->groupByArrival(dataGridViewArrival);
}
private: System::Void wayComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	alltrains->groupByWay(dataGridViewWay, Convert::ToInt64(wayComboBox->Text) - 1);
}
};
}
