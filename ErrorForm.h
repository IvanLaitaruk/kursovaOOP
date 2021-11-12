#pragma once

#include "WayForm.h"
#include "TrainException.h"

namespace kursova {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ErrorForm
	/// </summary>
	public ref class ErrorForm : public System::Windows::Forms::Form
	{
	public:
		ErrorForm(TrainException* error)
		{
			InitializeComponent();
			this->error = error;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ErrorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ warningLabel;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: Zeroit::Framework::Metro::ZeroitMetroButton^ OKButton;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ errorLabel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ErrorForm::typeid));
			this->warningLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->OKButton = (gcnew Zeroit::Framework::Metro::ZeroitMetroButton());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->errorLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// warningLabel
			// 
			this->warningLabel->AutoSize = true;
			this->warningLabel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->warningLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->warningLabel->ForeColor = System::Drawing::SystemColors::Control;
			this->warningLabel->Location = System::Drawing::Point(83, 11);
			this->warningLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->warningLabel->Name = L"warningLabel";
			this->warningLabel->Size = System::Drawing::Size(156, 44);
			this->warningLabel->TabIndex = 26;
			this->warningLabel->Text = L"Warning!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(73, -1);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(515, 65);
			this->pictureBox3->TabIndex = 25;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(-1, 63);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(75, 292);
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
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
			this->OKButton->Location = System::Drawing::Point(445, 310);
			this->OKButton->Margin = System::Windows::Forms::Padding(4);
			this->OKButton->Name = L"OKButton";
			this->OKButton->PressedColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(139)),
				static_cast<System::Int32>(static_cast<System::Byte>(174)));
			this->OKButton->RoundingArc = 37;
			this->OKButton->Size = System::Drawing::Size(135, 37);
			this->OKButton->TabIndex = 80;
			this->OKButton->Text = L"OK";
			this->OKButton->Click += gcnew System::EventHandler(this, &ErrorForm::OKButton_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(500, 102);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(61, 112);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 81;
			this->pictureBox4->TabStop = false;
			// 
			// errorLabel
			// 
			this->errorLabel->AutoSize = true;
			this->errorLabel->Font = (gcnew System::Drawing::Font(L"Sylfaen", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->errorLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(99)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->errorLabel->Location = System::Drawing::Point(110, 118);
			this->errorLabel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->errorLabel->Name = L"errorLabel";
			this->errorLabel->Size = System::Drawing::Size(0, 35);
			this->errorLabel->TabIndex = 82;
			// 
			// ErrorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 353);
			this->Controls->Add(this->errorLabel);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->OKButton);
			this->Controls->Add(this->warningLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"ErrorForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ErrorForm";
			this->Load += gcnew System::EventHandler(this, &ErrorForm::ErrorForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		TrainException* error;
#pragma endregion
	private: System::Void OKButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void ErrorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	if (this->error->getError().size() != 0)
	{
		errorLabel->Text += gcnew String(this->error->getError().c_str());
	}
	if (this->error->getStringError().size() != 0)
	{
		std::string temp = "\n";
		temp += this->error->getStringError();
		errorLabel->Text += gcnew String(temp.c_str());
	}
}
};
}
