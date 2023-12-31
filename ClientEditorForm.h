#pragma once

#include "Services.h"

namespace NS_IHM {

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
		ClientEditorForm(NS_Services::Services^ services, bool alreadyExists, int id) {
			InitializeComponent();

			this->id = id;
			this->services = services;
			this->alreadyExists = alreadyExists;
			fillFieldsFromId();
			enableButtons();
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
		NS_Services::Services^ services;
		bool alreadyExists;
		int id;

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
			this->gpbInfos->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnDeleteClient
			// 
			this->btnDeleteClient->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnDeleteClient->Location = System::Drawing::Point(46, 237);
			this->btnDeleteClient->Name = L"btnDeleteClient";
			this->btnDeleteClient->Size = System::Drawing::Size(220, 23);
			this->btnDeleteClient->TabIndex = 7;
			this->btnDeleteClient->Text = L"Supprimer";
			this->btnDeleteClient->UseVisualStyleBackColor = true;
			this->btnDeleteClient->Click += gcnew System::EventHandler(this, &ClientEditorForm::btnDeleteClientClick);
			// 
			// btnCreateClient
			// 
			this->btnCreateClient->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnCreateClient->Location = System::Drawing::Point(46, 179);
			this->btnCreateClient->Name = L"btnCreateClient";
			this->btnCreateClient->Size = System::Drawing::Size(220, 23);
			this->btnCreateClient->TabIndex = 5;
			this->btnCreateClient->Text = L"Cr�er";
			this->btnCreateClient->UseVisualStyleBackColor = true;
			this->btnCreateClient->Click += gcnew System::EventHandler(this, &ClientEditorForm::btnCreateClientClick);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(55, 45);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(159, 20);
			this->txtFirstName->TabIndex = 2;
			// 
			// lblFirstName
			// 
			this->lblFirstName->Location = System::Drawing::Point(6, 48);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(43, 13);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"Pr�nom";
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
			this->dtpBirth->TabIndex = 3;
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
			this->txtName->TabIndex = 1;
			// 
			// dtpFirstPurchase
			// 
			this->dtpFirstPurchase->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFirstPurchase->Location = System::Drawing::Point(118, 97);
			this->dtpFirstPurchase->Name = L"dtpFirstPurchase";
			this->dtpFirstPurchase->Size = System::Drawing::Size(96, 20);
			this->dtpFirstPurchase->TabIndex = 4;
			this->dtpFirstPurchase->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// btnUpdateClient
			// 
			this->btnUpdateClient->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnUpdateClient->Location = System::Drawing::Point(46, 208);
			this->btnUpdateClient->Name = L"btnUpdateClient";
			this->btnUpdateClient->Size = System::Drawing::Size(220, 23);
			this->btnUpdateClient->TabIndex = 6;
			this->btnUpdateClient->Text = L"Modifier";
			this->btnUpdateClient->UseVisualStyleBackColor = true;
			this->btnUpdateClient->Click += gcnew System::EventHandler(this, &ClientEditorForm::btnUpdateClientClick);
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
			this->gpbInfos->Location = System::Drawing::Point(46, 48);
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
			this->lblTitle->Size = System::Drawing::Size(288, 23);
			this->lblTitle->TabIndex = 27;
			this->lblTitle->Text = L"Client";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ClientEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 290);
			this->Controls->Add(this->btnDeleteClient);
			this->Controls->Add(this->btnCreateClient);
			this->Controls->Add(this->btnUpdateClient);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MinimumSize = System::Drawing::Size(328, 329);
			this->Name = L"ClientEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientEditorForm";
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void btnCreateClientClick(System::Object^ sender, System::EventArgs^ e) {
			if (this->alreadyExists) {
				MessageBox::Show("Ouvrez l'�diteur de client en mode cr�ation pour cr�er un nouveu client", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la cr�ation si le client existe d�j�
			}
			if (this->txtName->Text->Length == 0) {
				MessageBox::Show("Le nom ne peut pas �tre vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtFirstName->Text->Length == 0) {
				MessageBox::Show("Le pr�nom ne peut pas �tre vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (System::DateTime::Compare(this->dtpBirth->Value, *NS_Services::Services::MIN_DATETIME) <= 0) {
				MessageBox::Show("La date de naissance ne peut pas �tre ant�rieure au 01/01/1900.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Cr�ation du client
			System::Data::DataSet^ dataSet = this->services->createClient(this->txtName->Text, this->txtFirstName->Text, this->dtpBirth->Value, this->dtpFirstPurchase->Value);
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				MessageBox::Show("Client cr��.", "Ok", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->id = System::Convert::ToInt32(row[0]);
				fillFieldsFromDataSet(dataSet);  // Update des champs
				alreadyExists = true;  // Le client existe maintenant
				enableButtons();  // Activation des boutons
			} else {
				MessageBox::Show("Une erreur est survenue lors de la cr�ation du client.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnUpdateClientClick(System::Object^ sender, System::EventArgs^ e) {
			if (!this->alreadyExists) {
				MessageBox::Show("Ouvrez l'�diteur de client en mode modification pour modifier un client", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la modification si le client n'existe pas
			}
			if (this->txtName->Text->Length == 0) {
				MessageBox::Show("Le nom ne peut pas �tre vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtFirstName->Text->Length == 0) {
				MessageBox::Show("Le pr�nom ne peut pas �tre vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (System::DateTime::Compare(this->dtpBirth->Value, *NS_Services::Services::MIN_DATETIME) <= 0) {
				MessageBox::Show("La date de naissance ne peut pas �tre ant�rieure au 01/01/1900.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Modification du client
			System::Data::DataSet^ dataSet = this->services->updateClient(this->id, this->txtName->Text, this->txtFirstName->Text, this->dtpBirth->Value, this->dtpFirstPurchase->Value);
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				MessageBox::Show("Client modifi�.", "Ok", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fillFieldsFromDataSet(dataSet);  // Update des champs
			} else {
				MessageBox::Show("Une erreur est survenue lors de la modification du client.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnDeleteClientClick(System::Object^ sender, System::EventArgs^ e) {
			if (!this->alreadyExists) {
				MessageBox::Show("Ouvrez l'�diteur de client en mode modification pour supprimer un client", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la suppression si le client n'existe pas
			}

			// Suppression du client
			bool deleted = this->services->deleteClient(this->id);
			if (deleted) {
				MessageBox::Show("Client supprim�.", "Ok", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			} else {
				MessageBox::Show("Une erreur est survenue lors de la suppression du client. Impossible de supprimer un client s'il a des commandes", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		// D�sactive le bouton de cr�ation si le client existe d�j�
		// D�sactive les boutons de modification et de suppression si le client n'existe pas encore
		System::Void enableButtons() {
			if (alreadyExists) {
				this->btnCreateClient->Enabled = false;
				this->btnUpdateClient->Enabled = true;
				this->btnDeleteClient->Enabled = true;
			} else {
				this->btnCreateClient->Enabled = true;
				this->btnUpdateClient->Enabled = false;
				this->btnDeleteClient->Enabled = false;
			}
		}

		System::Void fillFieldsFromId() {
			if (alreadyExists && this->id >= 0) {
				System::Data::DataSet^ dataSet = this->services->getClientById(this->id);
				fillFieldsFromDataSet(dataSet);
			}
		}

		System::Void fillFieldsFromDataSet(System::Data::DataSet^ dataSet) {
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				// cl.idClient, cl.name , cl.firstName, cl.birthDate, cl.firstOrderDate
				this->txtName->Text = row[1]->ToString();
				this->txtFirstName->Text = row[2]->ToString();
				this->dtpBirth->Value = System::DateTime::Parse(System::Convert::ToString(row[3]));
				this->dtpFirstPurchase->Value = System::DateTime::Parse(System::Convert::ToString(row[4]));
			}
		}
	};
}
