#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ lbWelcome;

	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnClear;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 138);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Last Name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirstName->Location = System::Drawing::Point(33, 77);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(331, 20);
			this->tbFirstName->TabIndex = 2;
			// 
			// tbLastName
			// 
			this->tbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbLastName->Location = System::Drawing::Point(33, 191);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(331, 20);
			this->tbLastName->TabIndex = 3;
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Location = System::Drawing::Point(39, 241);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(35, 13);
			this->lbWelcome->TabIndex = 4;
			this->lbWelcome->Text = L"label3";
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(33, 282);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(146, 52);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MainForm::btnOK_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(218, 282);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(146, 52);
			this->btnClear->TabIndex = 6;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(399, 478);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(415, 517);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = this->tbFirstName->Text;
		String^ lastName = this->tbLastName->Text;
		this->lbWelcome->Text = "Hello" + firstName + " " + lastName;
	}
};
}
