#pragma once

#include "ClientEditorForm.h"
#include "Services.h"
#include "Client.h"

namespace IHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ClientList
	/// </summary>
	public ref class ClientListForm : public System::Windows::Forms::Form {
	public:
		ClientListForm(NS_Services::Services^ services) {
			this->services = services;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ClientListForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;

	private: System::Windows::Forms::DataGridView^ dgvClients;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnOpenEmployee;
	private: System::Windows::Forms::GroupBox^ gpbSearch;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::GroupBox^ gpbOpen;
	private: System::Windows::Forms::NumericUpDown^ numIdEmployee;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::GroupBox^ gpbCreate;
	private: System::Windows::Forms::Button^ btnCreateEmployee;
	private: System::Windows::Forms::Button^ btnSearchClients;
	private: System::Windows::Forms::DateTimePicker^ dtpBirth;
	private: System::Windows::Forms::Label^ lblBirth;
	private: System::Windows::Forms::Label^ lblFirstPurchase;
	private: System::Windows::Forms::DateTimePicker^ dtpFirstPurchase;
	private: System::Windows::Forms::Label^ lblTitle;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void) {
			this->dgvClients = (gcnew System::Windows::Forms::DataGridView());
			this->gpbSearch = (gcnew System::Windows::Forms::GroupBox());
			this->lblFirstPurchase = (gcnew System::Windows::Forms::Label());
			this->dtpFirstPurchase = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblBirth = (gcnew System::Windows::Forms::Label());
			this->dtpBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSearchClients = (gcnew System::Windows::Forms::Button());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->gpbCreate = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateEmployee = (gcnew System::Windows::Forms::Button());
			this->gpbOpen = (gcnew System::Windows::Forms::GroupBox());
			this->numIdEmployee = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btnOpenEmployee = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
			this->gpbSearch->SuspendLayout();
			this->gpbCreate->SuspendLayout();
			this->gpbOpen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvClients
			// 
			this->dgvClients->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvClients->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvClients->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvClients->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvClients->Location = System::Drawing::Point(12, 131);
			this->dgvClients->Name = L"dgvClients";
			this->dgvClients->ReadOnly = true;
			this->dgvClients->RowHeadersVisible = false;
			this->dgvClients->Size = System::Drawing::Size(392, 225);
			this->dgvClients->TabIndex = 0;
			// 
			// gpbSearch
			// 
			this->gpbSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbSearch->Controls->Add(this->lblFirstPurchase);
			this->gpbSearch->Controls->Add(this->dtpFirstPurchase);
			this->gpbSearch->Controls->Add(this->lblBirth);
			this->gpbSearch->Controls->Add(this->dtpBirth);
			this->gpbSearch->Controls->Add(this->btnSearchClients);
			this->gpbSearch->Controls->Add(this->lblFirstName);
			this->gpbSearch->Controls->Add(this->txtFirstName);
			this->gpbSearch->Controls->Add(this->lblName);
			this->gpbSearch->Controls->Add(this->txtName);
			this->gpbSearch->Location = System::Drawing::Point(12, 35);
			this->gpbSearch->Name = L"gpbSearch";
			this->gpbSearch->Size = System::Drawing::Size(560, 90);
			this->gpbSearch->TabIndex = 4;
			this->gpbSearch->TabStop = false;
			this->gpbSearch->Text = L"Rechercher";
			// 
			// lblFirstPurchase
			// 
			this->lblFirstPurchase->AutoSize = true;
			this->lblFirstPurchase->Location = System::Drawing::Point(221, 61);
			this->lblFirstPurchase->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFirstPurchase->Name = L"lblFirstPurchase";
			this->lblFirstPurchase->Size = System::Drawing::Size(72, 13);
			this->lblFirstPurchase->TabIndex = 12;
			this->lblFirstPurchase->Text = L"Premier achat";
			// 
			// dtpFirstPurchase
			// 
			this->dtpFirstPurchase->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpFirstPurchase->Location = System::Drawing::Point(299, 58);
			this->dtpFirstPurchase->Name = L"dtpFirstPurchase";
			this->dtpFirstPurchase->Size = System::Drawing::Size(95, 20);
			this->dtpFirstPurchase->TabIndex = 11;
			this->dtpFirstPurchase->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblBirth
			// 
			this->lblBirth->AutoSize = true;
			this->lblBirth->Location = System::Drawing::Point(6, 61);
			this->lblBirth->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblBirth->Name = L"lblBirth";
			this->lblBirth->Size = System::Drawing::Size(96, 13);
			this->lblBirth->TabIndex = 10;
			this->lblBirth->Text = L"Date de naissance";
			// 
			// dtpBirth
			// 
			this->dtpBirth->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpBirth->Location = System::Drawing::Point(108, 58);
			this->dtpBirth->Name = L"dtpBirth";
			this->dtpBirth->Size = System::Drawing::Size(95, 20);
			this->dtpBirth->TabIndex = 9;
			this->dtpBirth->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// btnSearchClients
			// 
			this->btnSearchClients->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearchClients->Location = System::Drawing::Point(404, 56);
			this->btnSearchClients->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnSearchClients->Name = L"btnSearchClients";
			this->btnSearchClients->Size = System::Drawing::Size(150, 23);
			this->btnSearchClients->TabIndex = 6;
			this->btnSearchClients->Text = L"Chercher";
			this->btnSearchClients->UseVisualStyleBackColor = true;
			this->btnSearchClients->Click += gcnew System::EventHandler(this, &ClientListForm::btnSearchClientsClick);
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Location = System::Drawing::Point(159, 22);
			this->lblFirstName->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(43, 13);
			this->lblFirstName->TabIndex = 4;
			this->lblFirstName->Text = L"Prénom";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(208, 19);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(100, 20);
			this->txtFirstName->TabIndex = 3;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(6, 22);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(29, 13);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Nom";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(41, 19);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 1;
			// 
			// gpbCreate
			// 
			this->gpbCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbCreate->Controls->Add(this->btnCreateEmployee);
			this->gpbCreate->Location = System::Drawing::Point(410, 224);
			this->gpbCreate->Name = L"gpbCreate";
			this->gpbCreate->Size = System::Drawing::Size(162, 52);
			this->gpbCreate->TabIndex = 11;
			this->gpbCreate->TabStop = false;
			this->gpbCreate->Text = L"Nouveau";
			// 
			// btnCreateEmployee
			// 
			this->btnCreateEmployee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreateEmployee->Location = System::Drawing::Point(6, 19);
			this->btnCreateEmployee->Name = L"btnCreateEmployee";
			this->btnCreateEmployee->Size = System::Drawing::Size(150, 23);
			this->btnCreateEmployee->TabIndex = 2;
			this->btnCreateEmployee->Text = L"Créer";
			this->btnCreateEmployee->UseVisualStyleBackColor = true;
			this->btnCreateEmployee->Click += gcnew System::EventHandler(this, &ClientListForm::btnCreateClientClick);
			// 
			// gpbOpen
			// 
			this->gpbOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbOpen->Controls->Add(this->numIdEmployee);
			this->gpbOpen->Controls->Add(this->lblId);
			this->gpbOpen->Controls->Add(this->btnOpenEmployee);
			this->gpbOpen->Location = System::Drawing::Point(410, 131);
			this->gpbOpen->Name = L"gpbOpen";
			this->gpbOpen->Size = System::Drawing::Size(162, 87);
			this->gpbOpen->TabIndex = 10;
			this->gpbOpen->TabStop = false;
			this->gpbOpen->Text = L"Modifier";
			// 
			// numIdEmployee
			// 
			this->numIdEmployee->AllowDrop = true;
			this->numIdEmployee->Location = System::Drawing::Point(41, 20);
			this->numIdEmployee->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999999, 0, 0, 0
			});
			this->numIdEmployee->Name = L"numIdEmployee";
			this->numIdEmployee->Size = System::Drawing::Size(115, 20);
			this->numIdEmployee->TabIndex = 5;
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(6, 22);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(16, 13);
			this->lblId->TabIndex = 2;
			this->lblId->Text = L"Id";
			// 
			// btnOpenEmployee
			// 
			this->btnOpenEmployee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnOpenEmployee->Location = System::Drawing::Point(6, 53);
			this->btnOpenEmployee->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnOpenEmployee->Name = L"btnOpenEmployee";
			this->btnOpenEmployee->Size = System::Drawing::Size(150, 23);
			this->btnOpenEmployee->TabIndex = 2;
			this->btnOpenEmployee->Text = L"Ouvrir";
			this->btnOpenEmployee->UseVisualStyleBackColor = true;
			this->btnOpenEmployee->Click += gcnew System::EventHandler(this, &ClientListForm::btnOpenEmployeeClick);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(560, 23);
			this->lblTitle->TabIndex = 13;
			this->lblTitle->Text = L"Gestion des clients";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ClientListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 368);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbCreate);
			this->Controls->Add(this->gpbOpen);
			this->Controls->Add(this->gpbSearch);
			this->Controls->Add(this->dgvClients);
			this->MinimumSize = System::Drawing::Size(600, 407);
			this->Name = L"ClientListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clients";
			this->Load += gcnew System::EventHandler(this, &ClientListForm::clientListLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->EndInit();
			this->gpbSearch->ResumeLayout(false);
			this->gpbSearch->PerformLayout();
			this->gpbCreate->ResumeLayout(false);
			this->gpbOpen->ResumeLayout(false);
			this->gpbOpen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void clientListLoad(System::Object^ sender, System::EventArgs^ e) {
		DataSet^ data = services->searchClients(this->txtName->Text, this->txtFirstName->Text, this->dtpBirth->Value, this->dtpFirstPurchase->Value);
		this->dgvClients->DataSource = data->Tables[0];
	}

	private: System::Void btnSearchClientsClick(System::Object^ sender, System::EventArgs^ e) {
		DataSet^ data = services->searchClients(this->txtName->Text, this->txtFirstName->Text, this->dtpBirth->Value, this->dtpFirstPurchase->Value);
		this->dgvClients->DataSource = data->Tables[0];
	}

	private: System::Void btnCreateClientClick(System::Object^ sender, System::EventArgs^ e) {
		ClientEditorForm^ clientEditorForm = gcnew ClientEditorForm(services, false, nullptr);
		clientEditorForm->ShowDialog();
	}

	private: System::Void btnOpenEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
		NS_Services::Client^ client = services->getClientById((int) this->numIdEmployee->Value);
		
		if (client == nullptr) {
			MessageBox::Show("Le client n'existe pas", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		ClientEditorForm^ clientEditorForm = gcnew ClientEditorForm(services, true, client);
		clientEditorForm->ShowDialog();
	}
	};
}
