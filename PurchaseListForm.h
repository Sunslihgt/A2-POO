#pragma once

#include "PurchaseEditorForm.h"
#include "Services.h"

namespace IHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PurchaseList
	/// </summary>
	public ref class PurchaseListForm : public System::Windows::Forms::Form {
	public:
		PurchaseListForm(NS_Services::Services^ sercices) {
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
		~PurchaseListForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;

	private: System::Windows::Forms::DataGridView^ dgvPurchases;
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
	private: System::Windows::Forms::Button^ btnSearchEmployees;
	private: System::Windows::Forms::DateTimePicker^ dtpOrder;
	private: System::Windows::Forms::Label^ lblOrderDate;
	private: System::Windows::Forms::Label^ lblPayDate;
	private: System::Windows::Forms::DateTimePicker^ dtpPay;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblDeliveryDate;
	private: System::Windows::Forms::DateTimePicker^ dtpDelivery;

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
			this->dgvPurchases = (gcnew System::Windows::Forms::DataGridView());
			this->gpbSearch = (gcnew System::Windows::Forms::GroupBox());
			this->lblDeliveryDate = (gcnew System::Windows::Forms::Label());
			this->dtpDelivery = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblPayDate = (gcnew System::Windows::Forms::Label());
			this->dtpPay = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblOrderDate = (gcnew System::Windows::Forms::Label());
			this->dtpOrder = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnSearchEmployees = (gcnew System::Windows::Forms::Button());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchases))->BeginInit();
			this->gpbSearch->SuspendLayout();
			this->gpbCreate->SuspendLayout();
			this->gpbOpen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvPurchases
			// 
			this->dgvPurchases->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvPurchases->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvPurchases->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvPurchases->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvPurchases->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPurchases->Location = System::Drawing::Point(12, 131);
			this->dgvPurchases->Name = L"dgvPurchases";
			this->dgvPurchases->ReadOnly = true;
			this->dgvPurchases->RowHeadersVisible = false;
			this->dgvPurchases->Size = System::Drawing::Size(657, 302);
			this->dgvPurchases->TabIndex = 0;
			// 
			// gpbSearch
			// 
			this->gpbSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbSearch->Controls->Add(this->lblDeliveryDate);
			this->gpbSearch->Controls->Add(this->dtpDelivery);
			this->gpbSearch->Controls->Add(this->lblPayDate);
			this->gpbSearch->Controls->Add(this->dtpPay);
			this->gpbSearch->Controls->Add(this->lblOrderDate);
			this->gpbSearch->Controls->Add(this->dtpOrder);
			this->gpbSearch->Controls->Add(this->btnSearchEmployees);
			this->gpbSearch->Controls->Add(this->lblFirstName);
			this->gpbSearch->Controls->Add(this->txtFirstName);
			this->gpbSearch->Controls->Add(this->lblName);
			this->gpbSearch->Controls->Add(this->txtName);
			this->gpbSearch->Location = System::Drawing::Point(12, 35);
			this->gpbSearch->Name = L"gpbSearch";
			this->gpbSearch->Size = System::Drawing::Size(825, 90);
			this->gpbSearch->TabIndex = 4;
			this->gpbSearch->TabStop = false;
			this->gpbSearch->Text = L"Rechercher";
			// 
			// lblDeliveryDate
			// 
			this->lblDeliveryDate->AutoSize = true;
			this->lblDeliveryDate->Location = System::Drawing::Point(431, 61);
			this->lblDeliveryDate->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblDeliveryDate->Name = L"lblDeliveryDate";
			this->lblDeliveryDate->Size = System::Drawing::Size(122, 13);
			this->lblDeliveryDate->TabIndex = 14;
			this->lblDeliveryDate->Text = L"Date de livraison prévue";
			// 
			// dtpDelivery
			// 
			this->dtpDelivery->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDelivery->Location = System::Drawing::Point(559, 58);
			this->dtpDelivery->Name = L"dtpDelivery";
			this->dtpDelivery->Size = System::Drawing::Size(95, 20);
			this->dtpDelivery->TabIndex = 13;
			this->dtpDelivery->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblPayDate
			// 
			this->lblPayDate->AutoSize = true;
			this->lblPayDate->Location = System::Drawing::Point(221, 61);
			this->lblPayDate->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblPayDate->Name = L"lblPayDate";
			this->lblPayDate->Size = System::Drawing::Size(91, 13);
			this->lblPayDate->TabIndex = 12;
			this->lblPayDate->Text = L"Date de paiement";
			// 
			// dtpPay
			// 
			this->dtpPay->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpPay->Location = System::Drawing::Point(318, 58);
			this->dtpPay->Name = L"dtpPay";
			this->dtpPay->Size = System::Drawing::Size(95, 20);
			this->dtpPay->TabIndex = 11;
			this->dtpPay->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblOrderDate
			// 
			this->lblOrderDate->AutoSize = true;
			this->lblOrderDate->Location = System::Drawing::Point(6, 61);
			this->lblOrderDate->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblOrderDate->Name = L"lblOrderDate";
			this->lblOrderDate->Size = System::Drawing::Size(100, 13);
			this->lblOrderDate->TabIndex = 10;
			this->lblOrderDate->Text = L"Date de commande";
			// 
			// dtpOrder
			// 
			this->dtpOrder->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpOrder->Location = System::Drawing::Point(108, 58);
			this->dtpOrder->Name = L"dtpOrder";
			this->dtpOrder->Size = System::Drawing::Size(95, 20);
			this->dtpOrder->TabIndex = 9;
			this->dtpOrder->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// btnSearchEmployees
			// 
			this->btnSearchEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearchEmployees->Location = System::Drawing::Point(669, 56);
			this->btnSearchEmployees->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnSearchEmployees->Name = L"btnSearchEmployees";
			this->btnSearchEmployees->Size = System::Drawing::Size(150, 23);
			this->btnSearchEmployees->TabIndex = 6;
			this->btnSearchEmployees->Text = L"Chercher";
			this->btnSearchEmployees->UseVisualStyleBackColor = true;
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
			this->gpbCreate->Location = System::Drawing::Point(675, 224);
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
			this->btnCreateEmployee->Click += gcnew System::EventHandler(this, &PurchaseListForm::btnCreatePurchaseClick);
			// 
			// gpbOpen
			// 
			this->gpbOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbOpen->Controls->Add(this->numIdEmployee);
			this->gpbOpen->Controls->Add(this->lblId);
			this->gpbOpen->Controls->Add(this->btnOpenEmployee);
			this->gpbOpen->Location = System::Drawing::Point(675, 131);
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
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(825, 23);
			this->lblTitle->TabIndex = 13;
			this->lblTitle->Text = L"Gestion des commandes";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// PurchaseListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(849, 445);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbCreate);
			this->Controls->Add(this->gpbOpen);
			this->Controls->Add(this->gpbSearch);
			this->Controls->Add(this->dgvPurchases);
			this->MinimumSize = System::Drawing::Size(865, 327);
			this->Name = L"PurchaseListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Commandes";
			this->Load += gcnew System::EventHandler(this, &PurchaseListForm::purchaseListLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchases))->EndInit();
			this->gpbSearch->ResumeLayout(false);
			this->gpbSearch->PerformLayout();
			this->gpbCreate->ResumeLayout(false);
			this->gpbOpen->ResumeLayout(false);
			this->gpbOpen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void purchaseListLoad(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnCreatePurchaseClick(System::Object^ sender, System::EventArgs^ e) {
		PurchaseEditorForm^ purchaseEditorForm = gcnew PurchaseEditorForm(services, false);
		purchaseEditorForm->ShowDialog();
	}
	};
}
