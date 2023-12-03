#pragma once

#include "Services.h"

namespace IHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EmployeeEditorForm
	/// </summary>
	public ref class EmployeeEditorForm : public System::Windows::Forms::Form {
	public:
		EmployeeEditorForm(Services::Services^ services, bool alreadyExists) {
			this->services = services;
			this->alreadyExists = alreadyExists;

			InitializeComponent();

			if (alreadyExists) {
				this->btnUpdateEmployee->Enabled = false;
				this->btnDeleteEmployee->Enabled = false;
			} else {
				this->btnCreateEmployee->Enabled = false;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeEditorForm() {
			if (components) {
				delete components;
			}
		}

	private:
		Services::Services^ services = gcnew Services::Services();
		bool alreadyExists;

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::GroupBox^ gpbInfos;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblStart;
	private: System::Windows::Forms::DateTimePicker^ dtpStart;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::GroupBox^ gpbAddress;
	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::TextBox^ txtCity;
	private: System::Windows::Forms::TextBox^ txtStreet;
	private: System::Windows::Forms::Label^ lblStreet;
	private: System::Windows::Forms::NumericUpDown^ numStreetNumber;
	private: System::Windows::Forms::Label^ lblStreetNumber;
	private: System::Windows::Forms::Button^ btnCreateEmployee;
	private: System::Windows::Forms::Button^ btnUpdateEmployee;
	private: System::Windows::Forms::Button^ btnDeleteEmployee;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->gpbInfos = (gcnew System::Windows::Forms::GroupBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblStart = (gcnew System::Windows::Forms::Label());
			this->dtpStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->gpbAddress = (gcnew System::Windows::Forms::GroupBox());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->txtStreet = (gcnew System::Windows::Forms::TextBox());
			this->lblStreet = (gcnew System::Windows::Forms::Label());
			this->numStreetNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblStreetNumber = (gcnew System::Windows::Forms::Label());
			this->btnCreateEmployee = (gcnew System::Windows::Forms::Button());
			this->btnUpdateEmployee = (gcnew System::Windows::Forms::Button());
			this->btnDeleteEmployee = (gcnew System::Windows::Forms::Button());
			this->gpbInfos->SuspendLayout();
			this->gpbAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(346, 23);
			this->lblTitle->TabIndex = 13;
			this->lblTitle->Text = L"Employé";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// gpbInfos
			// 
			this->gpbInfos->Controls->Add(this->txtFirstName);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblStart);
			this->gpbInfos->Controls->Add(this->dtpStart);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Location = System::Drawing::Point(75, 48);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 99);
			this->gpbInfos->TabIndex = 14;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Informations personnelles";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(55, 45);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(159, 20);
			this->txtFirstName->TabIndex = 17;
			// 
			// lblFirstName
			// 
			this->lblFirstName->Location = System::Drawing::Point(6, 48);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(43, 13);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"Prénom";
			// 
			// lblStart
			// 
			this->lblStart->Location = System::Drawing::Point(6, 74);
			this->lblStart->Name = L"lblStart";
			this->lblStart->Size = System::Drawing::Size(96, 13);
			this->lblStart->TabIndex = 20;
			this->lblStart->Text = L"Date d\'embauche";
			// 
			// dtpStart
			// 
			this->dtpStart->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpStart->Location = System::Drawing::Point(118, 71);
			this->dtpStart->Name = L"dtpStart";
			this->dtpStart->Size = System::Drawing::Size(96, 20);
			this->dtpStart->TabIndex = 19;
			this->dtpStart->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblName
			// 
			this->lblName->Location = System::Drawing::Point(6, 22);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(29, 13);
			this->lblName->TabIndex = 16;
			this->lblName->Text = L"Nom";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(55, 19);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(159, 20);
			this->txtName->TabIndex = 15;
			// 
			// gpbAddress
			// 
			this->gpbAddress->Controls->Add(this->lblCity);
			this->gpbAddress->Controls->Add(this->txtCity);
			this->gpbAddress->Controls->Add(this->txtStreet);
			this->gpbAddress->Controls->Add(this->lblStreet);
			this->gpbAddress->Controls->Add(this->numStreetNumber);
			this->gpbAddress->Controls->Add(this->lblStreetNumber);
			this->gpbAddress->Location = System::Drawing::Point(75, 153);
			this->gpbAddress->Name = L"gpbAddress";
			this->gpbAddress->Size = System::Drawing::Size(220, 104);
			this->gpbAddress->TabIndex = 23;
			this->gpbAddress->TabStop = false;
			this->gpbAddress->Text = L"Adresse";
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Location = System::Drawing::Point(5, 77);
			this->lblCity->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(26, 13);
			this->lblCity->TabIndex = 17;
			this->lblCity->Text = L"Ville";
			// 
			// txtCity
			// 
			this->txtCity->Location = System::Drawing::Point(54, 74);
			this->txtCity->MaxLength = 50;
			this->txtCity->Name = L"txtCity";
			this->txtCity->Size = System::Drawing::Size(160, 20);
			this->txtCity->TabIndex = 15;
			// 
			// txtStreet
			// 
			this->txtStreet->Location = System::Drawing::Point(54, 48);
			this->txtStreet->MaxLength = 50;
			this->txtStreet->Name = L"txtStreet";
			this->txtStreet->Size = System::Drawing::Size(160, 20);
			this->txtStreet->TabIndex = 19;
			// 
			// lblStreet
			// 
			this->lblStreet->AutoSize = true;
			this->lblStreet->Location = System::Drawing::Point(5, 51);
			this->lblStreet->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblStreet->Name = L"lblStreet";
			this->lblStreet->Size = System::Drawing::Size(27, 13);
			this->lblStreet->TabIndex = 20;
			this->lblStreet->Text = L"Rue";
			// 
			// numStreetNumber
			// 
			this->numStreetNumber->AllowDrop = true;
			this->numStreetNumber->Location = System::Drawing::Point(118, 20);
			this->numStreetNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
			this->numStreetNumber->Name = L"numStreetNumber";
			this->numStreetNumber->Size = System::Drawing::Size(96, 20);
			this->numStreetNumber->TabIndex = 16;
			// 
			// lblStreetNumber
			// 
			this->lblStreetNumber->AutoSize = true;
			this->lblStreetNumber->Location = System::Drawing::Point(6, 22);
			this->lblStreetNumber->Name = L"lblStreetNumber";
			this->lblStreetNumber->Size = System::Drawing::Size(42, 13);
			this->lblStreetNumber->TabIndex = 18;
			this->lblStreetNumber->Text = L"N° Rue";
			// 
			// btnCreateEmployee
			// 
			this->btnCreateEmployee->Location = System::Drawing::Point(75, 263);
			this->btnCreateEmployee->Name = L"btnCreateEmployee";
			this->btnCreateEmployee->Size = System::Drawing::Size(220, 23);
			this->btnCreateEmployee->TabIndex = 24;
			this->btnCreateEmployee->Text = L"Créer";
			this->btnCreateEmployee->UseVisualStyleBackColor = true;
			// 
			// btnUpdateEmployee
			// 
			this->btnUpdateEmployee->Location = System::Drawing::Point(75, 292);
			this->btnUpdateEmployee->Name = L"btnUpdateEmployee";
			this->btnUpdateEmployee->Size = System::Drawing::Size(220, 23);
			this->btnUpdateEmployee->TabIndex = 25;
			this->btnUpdateEmployee->Text = L"Modifier";
			this->btnUpdateEmployee->UseVisualStyleBackColor = true;
			// 
			// btnDeleteEmployee
			// 
			this->btnDeleteEmployee->Location = System::Drawing::Point(75, 321);
			this->btnDeleteEmployee->Name = L"btnDeleteEmployee";
			this->btnDeleteEmployee->Size = System::Drawing::Size(220, 23);
			this->btnDeleteEmployee->TabIndex = 26;
			this->btnDeleteEmployee->Text = L"Supprimer";
			this->btnDeleteEmployee->UseVisualStyleBackColor = true;
			// 
			// EmployeeEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 351);
			this->Controls->Add(this->btnDeleteEmployee);
			this->Controls->Add(this->btnUpdateEmployee);
			this->Controls->Add(this->btnCreateEmployee);
			this->Controls->Add(this->gpbAddress);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MaximumSize = System::Drawing::Size(386, 390);
			this->MinimumSize = System::Drawing::Size(386, 390);
			this->Name = L"EmployeeEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EmployeeEditorForm";
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			this->gpbAddress->ResumeLayout(false);
			this->gpbAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
