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
	/// Summary for AverageSpeedForm
	/// </summary>
	public ref class AverageSpeedForm : public System::Windows::Forms::Form
	{
	public:
		AverageSpeedForm(worksheet::AllTrains* alltrains)
		{
			InitializeComponent();
			this->alltrains = alltrains;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AverageSpeedForm()
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
	private: System::Windows::Forms::DataGridView^ dataGridViewSpeed;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ OKButton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AverageSpeedForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->sortLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridViewSpeed = (gcnew System::Windows::Forms::DataGridView());
			this->OKButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSpeed))->BeginInit();
			this->SuspendLayout();
			// 
			// sortLabel
			// 
			this->sortLabel->AutoSize = true;
			this->sortLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->sortLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->sortLabel->Location = System::Drawing::Point(82, 17);
			this->sortLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->sortLabel->Name = L"sortLabel";
			this->sortLabel->Size = System::Drawing::Size(283, 35);
			this->sortLabel->TabIndex = 30;
			this->sortLabel->Text = L"Sorted by average speed";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(71, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(374, 68);
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(-1, 63);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 517);
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			// 
			// dataGridViewSpeed
			// 
			this->dataGridViewSpeed->AllowUserToResizeColumns = false;
			this->dataGridViewSpeed->AllowUserToResizeRows = false;
			this->dataGridViewSpeed->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(233)),
				static_cast<System::Int32>(static_cast<System::Byte>(233)), static_cast<System::Int32>(static_cast<System::Byte>(233)));
			this->dataGridViewSpeed->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewSpeed->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridViewSpeed->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSpeed->ColumnHeadersVisible = false;
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
			this->dataGridViewSpeed->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridViewSpeed->Location = System::Drawing::Point(81, 91);
			this->dataGridViewSpeed->Margin = System::Windows::Forms::Padding(4);
			this->dataGridViewSpeed->MinimumSize = System::Drawing::Size(0, 62);
			this->dataGridViewSpeed->Name = L"dataGridViewSpeed";
			this->dataGridViewSpeed->ReadOnly = true;
			this->dataGridViewSpeed->RowHeadersVisible = false;
			this->dataGridViewSpeed->RowHeadersWidth = 51;
			this->dataGridViewSpeed->RowTemplate->Height = 30;
			this->dataGridViewSpeed->Size = System::Drawing::Size(354, 442);
			this->dataGridViewSpeed->TabIndex = 41;
			// 
			// OKButton
			// 
			this->OKButton->BackColor = System::Drawing::Color::Transparent;
			this->OKButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->OKButton->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->OKButton->DefaultColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->OKButton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->OKButton->DisabledColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->OKButton->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OKButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)), static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->OKButton->HoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->OKButton->Location = System::Drawing::Point(334, 540);
			this->OKButton->Name = L"OKButton";
			this->OKButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->OKButton->RoundingArc = 30;
			this->OKButton->Size = System::Drawing::Size(101, 30);
			this->OKButton->TabIndex = 87;
			this->OKButton->Text = L"OK";
			this->OKButton->Click += gcnew System::EventHandler(this, &AverageSpeedForm::findButton_Click);
			// 
			// AverageSpeedForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 573);
			this->ControlBox = false;
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->dataGridViewSpeed);
			this->Controls->Add(this->sortLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AverageSpeedForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AverageSpeedForm";
			this->Load += gcnew System::EventHandler(this, &AverageSpeedForm::AverageSpeedForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSpeed))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		worksheet::AllTrains* alltrains;
#pragma endregion
	private: System::Void AverageSpeedForm_Load(System::Object^ sender, System::EventArgs^ e) {
		alltrains->printInTableAverageSpeed(dataGridViewSpeed);
		dataGridViewSpeed->Columns[0]->Width = 130;
		dataGridViewSpeed->Columns[1]->Width = 205;
	}
private: System::Void findButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
