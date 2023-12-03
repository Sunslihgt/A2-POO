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
	/// Summary for ClientEditorForm
	/// </summary>
	public ref class ClientEditorForm : public System::Windows::Forms::Form {
	public:
		ClientEditorForm(Services::Services^ services, bool alreadyExists) {
			this->services = services;
			this->alreadyExists = alreadyExists;

			InitializeComponent();

			if (alreadyExists) {
				this->btnUpdateClient->Enabled = false;
				this->btnDeleteClient->Enabled = false;
			} else {
				this->btnCreateClient->Enabled = false;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClientEditorForm() {
			if (components) {
				delete components;
			}
		}

	private:
		Services::Services^ services = gcnew Services::Services();
		bool alreadyExists;

	private: System::Windows::Forms::Button^ btnDeleteClient;
	private: System::Windows::Forms::Button^ btnCreateClient;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblBirth;
	private: System::Windows::Forms::DateTimePicker^ dtpBirth;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblFirstPurchase;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::DateTimePicker^ dtpFirstPurchase;
	private: System::Windows::Forms::Button^ btnUpdateClient;
	private: System::Windows::Forms::GroupBox^ gpbInfos;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::DataGridView^ dgvAddresses;

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
			this->btnDeleteClient = (gcnew System::Windows::Forms::Button());
			this->btnCreateClient = (gcnew System::Windows::Forms::Button());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblBirth = (gcnew System::Windows::Forms::Label());
			this->dtpBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblFirstPurchase = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->dtpFirstPurchase = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnUpdateClient = (gcnew System::Windows::Forms::Button());
			this->gpbInfos = (gcnew System::Windows::Forms::GroupBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->dgvAddresses = (gcnew System::Windows::Forms::DataGridView());
			this->gpbInfos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAddresses))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDeleteClient
			// 
			this->btnDeleteClient->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnDeleteClient->Location = System::Drawing::Point(137, 396);
			this->btnDeleteClient->Name = L"btnDeleteClient";
			this->btnDeleteClient->Size = System::Drawing::Size(220, 23);
			this->btnDeleteClient->TabIndex = 32;
			this->btnDeleteClient->Text = L"Supprimer";
			this->btnDeleteClient->UseVisualStyleBackColor = true;
			// 
			// btnCreateClient
			// 
			this->btnCreateClient->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnCreateClient->Location = System::Drawing::Point(137, 338);
			this->btnCreateClient->Name = L"btnCreateClient";
			this->btnCreateClient->Size = System::Drawing::Size(220, 23);
			this->btnCreateClient->TabIndex = 30;
			this->btnCreateClient->Text = L"Créer";
			this->btnCreateClient->UseVisualStyleBackColor = true;
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
			// lblBirth
			// 
			this->lblBirth->Location = System::Drawing::Point(6, 74);
			this->lblBirth->Name = L"lblBirth";
			this->lblBirth->Size = System::Drawing::Size(96, 13);
			this->lblBirth->TabIndex = 20;
			this->lblBirth->Text = L"Date de naissance";
			// 
			// dtpBirth
			// 
			this->dtpBirth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpBirth->Location = System::Drawing::Point(118, 71);
			this->dtpBirth->Name = L"dtpBirth";
			this->dtpBirth->Size = System::Drawing::Size(96, 20);
			this->dtpBirth->TabIndex = 19;
			this->dtpBirth->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblName
			// 
			this->lblName->Location = System::Drawing::Point(6, 22);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(29, 13);
			this->lblName->TabIndex = 16;
			this->lblName->Text = L"Nom";
			// 
			// lblFirstPurchase
			// 
			this->lblFirstPurchase->Location = System::Drawing::Point(6, 100);
			this->lblFirstPurchase->Name = L"lblFirstPurchase";
			this->lblFirstPurchase->Size = System::Drawing::Size(72, 13);
			this->lblFirstPurchase->TabIndex = 22;
			this->lblFirstPurchase->Text = L"Premier achat";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(55, 19);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(159, 20);
			this->txtName->TabIndex = 15;
			// 
			// dtpFirstPurchase
			// 
			this->dtpFirstPurchase->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFirstPurchase->Location = System::Drawing::Point(118, 97);
			this->dtpFirstPurchase->Name = L"dtpFirstPurchase";
			this->dtpFirstPurchase->Size = System::Drawing::Size(96, 20);
			this->dtpFirstPurchase->TabIndex = 21;
			this->dtpFirstPurchase->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// btnUpdateClient
			// 
			this->btnUpdateClient->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnUpdateClient->Location = System::Drawing::Point(137, 367);
			this->btnUpdateClient->Name = L"btnUpdateClient";
			this->btnUpdateClient->Size = System::Drawing::Size(220, 23);
			this->btnUpdateClient->TabIndex = 31;
			this->btnUpdateClient->Text = L"Modifier";
			this->btnUpdateClient->UseVisualStyleBackColor = true;
			// 
			// gpbInfos
			// 
			this->gpbInfos->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->gpbInfos->Controls->Add(this->txtFirstName);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblBirth);
			this->gpbInfos->Controls->Add(this->dtpBirth);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->lblFirstPurchase);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Controls->Add(this->dtpFirstPurchase);
			this->gpbInfos->Location = System::Drawing::Point(137, 48);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 125);
			this->gpbInfos->TabIndex = 28;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Informations personnelles";
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 8);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(471, 23);
			this->lblTitle->TabIndex = 27;
			this->lblTitle->Text = L"Client";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dgvAddresses
			// 
			this->dgvAddresses->AllowUserToAddRows = false;
			this->dgvAddresses->AllowUserToDeleteRows = false;
			this->dgvAddresses->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvAddresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvAddresses->Location = System::Drawing::Point(45, 179);
			this->dgvAddresses->Name = L"dgvAddresses";
			this->dgvAddresses->ReadOnly = true;
			this->dgvAddresses->Size = System::Drawing::Size(405, 153);
			this->dgvAddresses->TabIndex = 33;
			// 
			// ClientEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(495, 431);
			this->Controls->Add(this->dgvAddresses);
			this->Controls->Add(this->btnDeleteClient);
			this->Controls->Add(this->btnCreateClient);
			this->Controls->Add(this->btnUpdateClient);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MinimumSize = System::Drawing::Size(386, 416);
			this->Name = L"ClientEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientEditorForm";
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvAddresses))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
