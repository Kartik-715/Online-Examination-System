#pragma once

namespace Online_Exam {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
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
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnEditProfileStudent;

	private: System::Windows::Forms::Button^  btnPastTests;
	private: System::Windows::Forms::Button^  btnMyGroups;
	private: System::Windows::Forms::Button^  btnUpcomingTests;
	private: System::Windows::Forms::Button^  btnMyProfileStudent;
	private: System::Windows::Forms::Button^  btnLogOut;


	private: System::Windows::Forms::Button^  btnHelp;
	private: System::Windows::Forms::Button^  btnCertificates;
	private: System::Windows::Forms::Button^  btnEnroll;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCertificates = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->btnEditProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnPastTests = (gcnew System::Windows::Forms::Button());
			this->btnMyGroups = (gcnew System::Windows::Forms::Button());
			this->btnUpcomingTests = (gcnew System::Windows::Forms::Button());
			this->btnMyProfileStudent = (gcnew System::Windows::Forms::Button());
			this->btnEnroll = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(893, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnEnroll);
			this->panel1->Controls->Add(this->btnCertificates);
			this->panel1->Controls->Add(this->btnLogOut);
			this->panel1->Controls->Add(this->btnHelp);
			this->panel1->Controls->Add(this->btnEditProfileStudent);
			this->panel1->Controls->Add(this->btnPastTests);
			this->panel1->Controls->Add(this->btnMyGroups);
			this->panel1->Controls->Add(this->btnUpcomingTests);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 533);
			this->panel1->TabIndex = 1;
			// 
			// btnCertificates
			// 
			this->btnCertificates->Location = System::Drawing::Point(0, 300);
			this->btnCertificates->Name = L"btnCertificates";
			this->btnCertificates->Size = System::Drawing::Size(200, 46);
			this->btnCertificates->TabIndex = 9;
			this->btnCertificates->Text = L"Certificates";
			this->btnCertificates->UseVisualStyleBackColor = true;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Location = System::Drawing::Point(0, 400);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(200, 46);
			this->btnLogOut->TabIndex = 8;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = true;
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(0, 350);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(200, 46);
			this->btnHelp->TabIndex = 7;
			this->btnHelp->Text = L"Help";
			this->btnHelp->UseVisualStyleBackColor = true;
			// 
			// btnEditProfileStudent
			// 
			this->btnEditProfileStudent->Location = System::Drawing::Point(0, 50);
			this->btnEditProfileStudent->Name = L"btnEditProfileStudent";
			this->btnEditProfileStudent->Size = System::Drawing::Size(200, 46);
			this->btnEditProfileStudent->TabIndex = 6;
			this->btnEditProfileStudent->Text = L"Edit Profile";
			this->btnEditProfileStudent->UseVisualStyleBackColor = true;
			// 
			// btnPastTests
			// 
			this->btnPastTests->Location = System::Drawing::Point(0, 150);
			this->btnPastTests->Name = L"btnPastTests";
			this->btnPastTests->Size = System::Drawing::Size(200, 46);
			this->btnPastTests->TabIndex = 4;
			this->btnPastTests->Text = L"Past Tests";
			this->btnPastTests->UseVisualStyleBackColor = true;
			// 
			// btnMyGroups
			// 
			this->btnMyGroups->Location = System::Drawing::Point(0, 200);
			this->btnMyGroups->Name = L"btnMyGroups";
			this->btnMyGroups->Size = System::Drawing::Size(200, 46);
			this->btnMyGroups->TabIndex = 5;
			this->btnMyGroups->Text = L"My Groups";
			this->btnMyGroups->UseVisualStyleBackColor = true;
			// 
			// btnUpcomingTests
			// 
			this->btnUpcomingTests->Location = System::Drawing::Point(0, 100);
			this->btnUpcomingTests->Name = L"btnUpcomingTests";
			this->btnUpcomingTests->Size = System::Drawing::Size(200, 46);
			this->btnUpcomingTests->TabIndex = 3;
			this->btnUpcomingTests->Text = L"Upcoming Tests";
			this->btnUpcomingTests->UseVisualStyleBackColor = true;
			// 
			// btnMyProfileStudent
			// 
			this->btnMyProfileStudent->Location = System::Drawing::Point(0, 0);
			this->btnMyProfileStudent->Name = L"btnMyProfileStudent";
			this->btnMyProfileStudent->Size = System::Drawing::Size(200, 46);
			this->btnMyProfileStudent->TabIndex = 2;
			this->btnMyProfileStudent->Text = L"My Profile";
			this->btnMyProfileStudent->UseVisualStyleBackColor = true;
			// 
			// btnEnroll
			// 
			this->btnEnroll->Location = System::Drawing::Point(0, 250);
			this->btnEnroll->Name = L"btnEnroll";
			this->btnEnroll->Size = System::Drawing::Size(200, 46);
			this->btnEnroll->TabIndex = 10;
			this->btnEnroll->Text = L"Enroll to a Group";
			this->btnEnroll->UseVisualStyleBackColor = true;
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 532);
			this->Controls->Add(this->btnMyProfileStudent);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}