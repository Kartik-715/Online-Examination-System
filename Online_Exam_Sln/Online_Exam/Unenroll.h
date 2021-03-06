#pragma once
#include "Database.h"
#include "GlobalVar.h"
#include <iostream>
#include "StudentForm.h"



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Database;
using namespace Global_Var;
using namespace Online_Exam;



namespace Online_Exam {

	/// <summary>
	/// Summary for Unenroll
	/// </summary>
	public ref class Unenroll : public System::Windows::Forms::UserControl
	{
	public:
		Unenroll(void)
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
		~Unenroll()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutBtn;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutGroups;

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
			this->flowLayoutBtn = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutGroups = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutBtn
			// 
			this->flowLayoutBtn->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutBtn->Location = System::Drawing::Point(719, 509);
			this->flowLayoutBtn->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutBtn->Name = L"flowLayoutBtn";
			this->flowLayoutBtn->Size = System::Drawing::Size(192, 10);
			this->flowLayoutBtn->TabIndex = 0;
			// 
			// flowLayoutGroups
			// 
			this->flowLayoutGroups->Location = System::Drawing::Point(142, 91);
			this->flowLayoutGroups->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutGroups->Name = L"flowLayoutGroups";
			this->flowLayoutGroups->Size = System::Drawing::Size(589, 370);
			this->flowLayoutGroups->TabIndex = 1;
			// 
			// Unenroll
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->flowLayoutGroups);
			this->Controls->Add(this->flowLayoutBtn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Unenroll";
			this->Size = System::Drawing::Size(915, 532);
			this->Load += gcnew System::EventHandler(this, &Unenroll::Unenroll_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UnenrollUtility(){
				 OES ^Access = gcnew OES();
				 Access->ExecQuery("Select * from Users where Username = '" + gVar::Username + "'");
				 if (Access->RecordCount > 0)
				 {
					 String ^grp = Convert::ToString(Access->DBDT->Rows[0]->default["Groups"]);
					 int len = grp->Length;
					 int y = 100;
					 for (int i = 0; i < len - 1;)
					 {
						 if (grp[i] == '-'&&grp[i + 1] != '-')
						 {
							 int j = i + 1;
							 String ^temp = "";
							 while (grp[j] != '-')
							 {
								 temp += grp[j];
								 j++;
							 }
							 OES ^Access1 = gcnew OES();
							 Access1->ExecQuery("Select * from Groups where GroupID = " + Convert::ToInt32(temp) + "");
							 Label ^lbl = gcnew Label();
							 lbl->Location = Point(10, y+5);
							 lbl->BackColor = System::Drawing::Color::White;
							 lbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
								 static_cast<System::Byte>(0)));
							 lbl->ForeColor = System::Drawing::Color::Black;
							 lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
							 lbl->TabIndex = 0;
							 lbl->Text = Convert::ToString(Access1->DBDT->Rows[0]->default["GroupName"]);
							 Button ^ btn = gcnew Button();
							 btn->Location = Point(200, y);
							 btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
								 static_cast<System::Int32>(static_cast<System::Byte>(72)));
							 btn->FlatAppearance->BorderSize = 0;
							 btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
							 btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								 static_cast<System::Byte>(0)));
							 btn->ForeColor = System::Drawing::Color::White;
							 btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
							btn->Size = System::Drawing::Size(150, 25);
							 btn->TabIndex = 27;
							 btn->UseVisualStyleBackColor = false;
							 btn->Text = "Unenroll from " + lbl->Text;
							 lbl->Size = btn->Size;
							 flowLayoutGroups->Controls->Add(lbl);
							 flowLayoutGroups->Controls->Add(btn);
							 btn->Tag = i;
							 btn->Click += gcnew System::EventHandler(this, &Unenroll::btnClick);
							 i = j;
							 y+=100;
						 }
						 else i++;
					 }
				 }
	}
	private: System::Void Unenroll_Load(System::Object^  sender, System::EventArgs^  e) {
				 UnenrollUtility();
	}
		private: System::Void btnClick(System::Object^  sender, System::EventArgs^  e){
					 Button ^ btn = gcnew Button();
					 btn = static_cast<Button^>(sender);
					 int a = static_cast<int>(btn->Tag);
					 /*String ^ str = Convert::ToString(a);
					 MessageBox::Show(str);*/
					 OES ^Access = gcnew OES();
					 Access->ExecQuery("Select * from Users where Username = '" + gVar::Username + "'");
					 if (Access->RecordCount > 0)
					 {
						 String ^ str = Convert::ToString(Access->DBDT->Rows[0]->default["Groups"]);
						 int end = a+1;
						 while (str[end] != '-')
						 {
							 end++;
						 }
						 end++;
						 String ^ cur = "";
						 for (int i = 0; i < a; i++) cur += str[i];
						 for (int i = end; i < str->Length; i++) cur += str[i];
						 OES ^Access = gcnew OES();
						 Access->ExecQuery("UPDATE Users SET Groups='" + cur + "' WHERE Username = '" + gVar::Username + "'");
						 MessageBox::Show("Succesfully Unenrolled from the group");
						 flowLayoutBtn->Controls->Clear();
						 flowLayoutGroups->Controls->Clear();
						 UnenrollUtility();
					 }
		}
	

};
}
