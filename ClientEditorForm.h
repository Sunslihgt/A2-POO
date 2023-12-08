#pragma once

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
	/// Summary for ClientEditorForm
	/// </summary>
	public ref class ClientEditorForm : public System::Windows::Forms::Form {
	public:
		ClientEditorForm(NS_Services::Services^ services, bool alreadyExists, NS_Services::Client^ client) {
			InitializeComponent();

			this->services = services;
			this->alreadyExists = alreadyExists;
			this->client = client;
			fillFieldsFromObject();
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
		NS_Services::Client^ client;

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
	private: System::Windows::Forms::DataGridView^ dgvDeliveryAddresses;
	private: System::Windows::Forms::DataGridView^ dgvBillingAddresses;


	private: System::Windows::Forms::GroupBox^ gpbcreateDeliveryAddressz;
	private: System::Windows::Forms::Button^ btnCreateDeliveryAddress;
	private: System::Windows::Forms::TextBox^ txtCityDelivery;
	private: System::Windows::Forms::NumericUpDown^ numStreetNumberDelivery;
	private: System::Windows::Forms::GroupBox^ gpbDeleteDeliveryAddress;
	private: System::Windows::Forms::NumericUpDown^ numIdDeliveryAddress;
	private: System::Windows::Forms::Button^ btnDeleteDeliveryAddress;
	private: System::Windows::Forms::GroupBox^ gpbDeleDeliveryAddress;
	private: System::Windows::Forms::NumericUpDown^ numIdBillingAddress;
	private: System::Windows::Forms::Button^ btnDeleteBillingAddress;
	private: System::Windows::Forms::GroupBox^ gpbCreateBillingAddress;
	private: System::Windows::Forms::Button^ btnCreateBillingAddress;
	private: System::Windows::Forms::TextBox^ txtCityBilling;
	private: System::Windows::Forms::TextBox^ txtStreetBilling;
	private: System::Windows::Forms::NumericUpDown^ numStreetNumberBilling;
	private: System::Windows::Forms::TextBox^ txtStreetDelivery;
	private: System::Windows::Forms::Label^ lblCityNameDelivery;
	private: System::Windows::Forms::Label^ lblStreetNameDelivery;
	private: System::Windows::Forms::Label^ lblStreetNumberDelivery;
	private: System::Windows::Forms::Label^ lblIdDeliveryAddress;
	private: System::Windows::Forms::Label^ lblBillingAddress;
	private: System::Windows::Forms::Label^ lblCityNameBillingAddress;
	private: System::Windows::Forms::Label^ lblStreetNameBilling;






	private: System::Windows::Forms::Label^ lblStreetNumberBilling;



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
			this->lblCityNameDelivery = (gcnew System::Windows::Forms::Label());
			this->lblStreetNameDelivery = (gcnew System::Windows::Forms::Label());
			this->lblStreetNumberDelivery = (gcnew System::Windows::Forms::Label());
			this->lblIdDeliveryAddress = (gcnew System::Windows::Forms::Label());
			this->lblBillingAddress = (gcnew System::Windows::Forms::Label());
			this->lblCityNameBillingAddress = (gcnew System::Windows::Forms::Label());
			this->lblStreetNameBilling = (gcnew System::Windows::Forms::Label());
			this->lblStreetNumberBilling = (gcnew System::Windows::Forms::Label());
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
			this->dgvDeliveryAddresses = (gcnew System::Windows::Forms::DataGridView());
			this->dgvBillingAddresses = (gcnew System::Windows::Forms::DataGridView());
			this->gpbcreateDeliveryAddressz = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateDeliveryAddress = (gcnew System::Windows::Forms::Button());
			this->txtCityDelivery = (gcnew System::Windows::Forms::TextBox());
			this->txtStreetDelivery = (gcnew System::Windows::Forms::TextBox());
			this->numStreetNumberDelivery = (gcnew System::Windows::Forms::NumericUpDown());
			this->gpbDeleteDeliveryAddress = (gcnew System::Windows::Forms::GroupBox());
			this->numIdDeliveryAddress = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnDeleteDeliveryAddress = (gcnew System::Windows::Forms::Button());
			this->gpbDeleDeliveryAddress = (gcnew System::Windows::Forms::GroupBox());
			this->numIdBillingAddress = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnDeleteBillingAddress = (gcnew System::Windows::Forms::Button());
			this->gpbCreateBillingAddress = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateBillingAddress = (gcnew System::Windows::Forms::Button());
			this->txtCityBilling = (gcnew System::Windows::Forms::TextBox());
			this->txtStreetBilling = (gcnew System::Windows::Forms::TextBox());
			this->numStreetNumberBilling = (gcnew System::Windows::Forms::NumericUpDown());
			this->gpbInfos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeliveryAddresses))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBillingAddresses))->BeginInit();
			this->gpbcreateDeliveryAddressz->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumberDelivery))->BeginInit();
			this->gpbDeleteDeliveryAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdDeliveryAddress))->BeginInit();
			this->gpbDeleDeliveryAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdBillingAddress))->BeginInit();
			this->gpbCreateBillingAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumberBilling))->BeginInit();
			this->SuspendLayout();
			// 
			// lblCityNameDelivery
			// 
			this->lblCityNameDelivery->AutoSize = true;
			this->lblCityNameDelivery->Location = System::Drawing::Point(5, 77);
			this->lblCityNameDelivery->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblCityNameDelivery->Name = L"lblCityNameDelivery";
			this->lblCityNameDelivery->Size = System::Drawing::Size(26, 13);
			this->lblCityNameDelivery->TabIndex = 17;
			this->lblCityNameDelivery->Text = L"Ville";
			// 
			// lblStreetNameDelivery
			// 
			this->lblStreetNameDelivery->AutoSize = true;
			this->lblStreetNameDelivery->Location = System::Drawing::Point(5, 51);
			this->lblStreetNameDelivery->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblStreetNameDelivery->Name = L"lblStreetNameDelivery";
			this->lblStreetNameDelivery->Size = System::Drawing::Size(27, 13);
			this->lblStreetNameDelivery->TabIndex = 20;
			this->lblStreetNameDelivery->Text = L"Rue";
			// 
			// lblStreetNumberDelivery
			// 
			this->lblStreetNumberDelivery->AutoSize = true;
			this->lblStreetNumberDelivery->Location = System::Drawing::Point(6, 22);
			this->lblStreetNumberDelivery->Name = L"lblStreetNumberDelivery";
			this->lblStreetNumberDelivery->Size = System::Drawing::Size(42, 13);
			this->lblStreetNumberDelivery->TabIndex = 18;
			this->lblStreetNumberDelivery->Text = L"N° Rue";
			// 
			// lblIdDeliveryAddress
			// 
			this->lblIdDeliveryAddress->AutoSize = true;
			this->lblIdDeliveryAddress->Location = System::Drawing::Point(6, 22);
			this->lblIdDeliveryAddress->Name = L"lblIdDeliveryAddress";
			this->lblIdDeliveryAddress->Size = System::Drawing::Size(16, 13);
			this->lblIdDeliveryAddress->TabIndex = 2;
			this->lblIdDeliveryAddress->Text = L"Id";
			// 
			// lblBillingAddress
			// 
			this->lblBillingAddress->AutoSize = true;
			this->lblBillingAddress->Location = System::Drawing::Point(6, 22);
			this->lblBillingAddress->Name = L"lblBillingAddress";
			this->lblBillingAddress->Size = System::Drawing::Size(16, 13);
			this->lblBillingAddress->TabIndex = 2;
			this->lblBillingAddress->Text = L"Id";
			// 
			// lblCityNameBillingAddress
			// 
			this->lblCityNameBillingAddress->AutoSize = true;
			this->lblCityNameBillingAddress->Location = System::Drawing::Point(5, 77);
			this->lblCityNameBillingAddress->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblCityNameBillingAddress->Name = L"lblCityNameBillingAddress";
			this->lblCityNameBillingAddress->Size = System::Drawing::Size(26, 13);
			this->lblCityNameBillingAddress->TabIndex = 17;
			this->lblCityNameBillingAddress->Text = L"Ville";
			// 
			// lblStreetNameBilling
			// 
			this->lblStreetNameBilling->AutoSize = true;
			this->lblStreetNameBilling->Location = System::Drawing::Point(5, 51);
			this->lblStreetNameBilling->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblStreetNameBilling->Name = L"lblStreetNameBilling";
			this->lblStreetNameBilling->Size = System::Drawing::Size(27, 13);
			this->lblStreetNameBilling->TabIndex = 20;
			this->lblStreetNameBilling->Text = L"Rue";
			// 
			// lblStreetNumberBilling
			// 
			this->lblStreetNumberBilling->AutoSize = true;
			this->lblStreetNumberBilling->Location = System::Drawing::Point(6, 22);
			this->lblStreetNumberBilling->Name = L"lblStreetNumberBilling";
			this->lblStreetNumberBilling->Size = System::Drawing::Size(42, 13);
			this->lblStreetNumberBilling->TabIndex = 18;
			this->lblStreetNumberBilling->Text = L"N° Rue";
			// 
			// btnDeleteClient
			// 
			this->btnDeleteClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnDeleteClient->Location = System::Drawing::Point(46, 237);
			this->btnDeleteClient->Name = L"btnDeleteClient";
			this->btnDeleteClient->Size = System::Drawing::Size(220, 23);
			this->btnDeleteClient->TabIndex = 32;
			this->btnDeleteClient->Text = L"Supprimer";
			this->btnDeleteClient->UseVisualStyleBackColor = true;
			// 
			// btnCreateClient
			// 
			this->btnCreateClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnCreateClient->Location = System::Drawing::Point(46, 179);
			this->btnCreateClient->Name = L"btnCreateClient";
			this->btnCreateClient->Size = System::Drawing::Size(220, 23);
			this->btnCreateClient->TabIndex = 30;
			this->btnCreateClient->Text = L"Créer";
			this->btnCreateClient->UseVisualStyleBackColor = true;
			this->btnCreateClient->Click += gcnew System::EventHandler(this, &ClientEditorForm::btnCreateClientClick);
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
			this->btnUpdateClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnUpdateClient->Location = System::Drawing::Point(46, 208);
			this->btnUpdateClient->Name = L"btnUpdateClient";
			this->btnUpdateClient->Size = System::Drawing::Size(220, 23);
			this->btnUpdateClient->TabIndex = 31;
			this->btnUpdateClient->Text = L"Modifier";
			this->btnUpdateClient->UseVisualStyleBackColor = true;
			// 
			// gpbInfos
			// 
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
			this->lblTitle->Size = System::Drawing::Size(935, 23);
			this->lblTitle->TabIndex = 27;
			this->lblTitle->Text = L"Client";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dgvDeliveryAddresses
			// 
			this->dgvDeliveryAddresses->AllowUserToAddRows = false;
			this->dgvDeliveryAddresses->AllowUserToDeleteRows = false;
			this->dgvDeliveryAddresses->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvDeliveryAddresses->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvDeliveryAddresses->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvDeliveryAddresses->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvDeliveryAddresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDeliveryAddresses->Location = System::Drawing::Point(272, 48);
			this->dgvDeliveryAddresses->Name = L"dgvDeliveryAddresses";
			this->dgvDeliveryAddresses->ReadOnly = true;
			this->dgvDeliveryAddresses->RowHeadersVisible = false;
			this->dgvDeliveryAddresses->Size = System::Drawing::Size(420, 212);
			this->dgvDeliveryAddresses->TabIndex = 33;
			// 
			// dgvBillingAddresses
			// 
			this->dgvBillingAddresses->AllowUserToAddRows = false;
			this->dgvBillingAddresses->AllowUserToDeleteRows = false;
			this->dgvBillingAddresses->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvBillingAddresses->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvBillingAddresses->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvBillingAddresses->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvBillingAddresses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBillingAddresses->Location = System::Drawing::Point(272, 266);
			this->dgvBillingAddresses->Name = L"dgvBillingAddresses";
			this->dgvBillingAddresses->ReadOnly = true;
			this->dgvBillingAddresses->RowHeadersVisible = false;
			this->dgvBillingAddresses->Size = System::Drawing::Size(420, 211);
			this->dgvBillingAddresses->TabIndex = 34;
			// 
			// gpbcreateDeliveryAddressz
			// 
			this->gpbcreateDeliveryAddressz->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbcreateDeliveryAddressz->Controls->Add(this->btnCreateDeliveryAddress);
			this->gpbcreateDeliveryAddressz->Controls->Add(this->lblCityNameDelivery);
			this->gpbcreateDeliveryAddressz->Controls->Add(this->txtCityDelivery);
			this->gpbcreateDeliveryAddressz->Controls->Add(this->txtStreetDelivery);
			this->gpbcreateDeliveryAddressz->Controls->Add(this->lblStreetNameDelivery);
			this->gpbcreateDeliveryAddressz->Controls->Add(this->numStreetNumberDelivery);
			this->gpbcreateDeliveryAddressz->Controls->Add(this->lblStreetNumberDelivery);
			this->gpbcreateDeliveryAddressz->Location = System::Drawing::Point(698, 48);
			this->gpbcreateDeliveryAddressz->Name = L"gpbcreateDeliveryAddressz";
			this->gpbcreateDeliveryAddressz->Size = System::Drawing::Size(220, 132);
			this->gpbcreateDeliveryAddressz->TabIndex = 35;
			this->gpbcreateDeliveryAddressz->TabStop = false;
			this->gpbcreateDeliveryAddressz->Text = L"Créer adresses de livraison";
			// 
			// btnCreateDeliveryAddress
			// 
			this->btnCreateDeliveryAddress->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnCreateDeliveryAddress->Location = System::Drawing::Point(6, 100);
			this->btnCreateDeliveryAddress->Name = L"btnCreateDeliveryAddress";
			this->btnCreateDeliveryAddress->Size = System::Drawing::Size(205, 23);
			this->btnCreateDeliveryAddress->TabIndex = 37;
			this->btnCreateDeliveryAddress->Text = L"Ajouter adresse de livraison";
			this->btnCreateDeliveryAddress->UseVisualStyleBackColor = true;
			// 
			// txtCityDelivery
			// 
			this->txtCityDelivery->Location = System::Drawing::Point(54, 74);
			this->txtCityDelivery->MaxLength = 50;
			this->txtCityDelivery->Name = L"txtCityDelivery";
			this->txtCityDelivery->Size = System::Drawing::Size(160, 20);
			this->txtCityDelivery->TabIndex = 15;
			// 
			// txtStreetDelivery
			// 
			this->txtStreetDelivery->Location = System::Drawing::Point(54, 48);
			this->txtStreetDelivery->MaxLength = 50;
			this->txtStreetDelivery->Name = L"txtStreetDelivery";
			this->txtStreetDelivery->Size = System::Drawing::Size(160, 20);
			this->txtStreetDelivery->TabIndex = 19;
			// 
			// numStreetNumberDelivery
			// 
			this->numStreetNumberDelivery->AllowDrop = true;
			this->numStreetNumberDelivery->Location = System::Drawing::Point(118, 20);
			this->numStreetNumberDelivery->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999, 0, 0, 0
			});
			this->numStreetNumberDelivery->Name = L"numStreetNumberDelivery";
			this->numStreetNumberDelivery->Size = System::Drawing::Size(96, 20);
			this->numStreetNumberDelivery->TabIndex = 16;
			// 
			// gpbDeleteDeliveryAddress
			// 
			this->gpbDeleteDeliveryAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbDeleteDeliveryAddress->Controls->Add(this->numIdDeliveryAddress);
			this->gpbDeleteDeliveryAddress->Controls->Add(this->lblIdDeliveryAddress);
			this->gpbDeleteDeliveryAddress->Controls->Add(this->btnDeleteDeliveryAddress);
			this->gpbDeleteDeliveryAddress->Location = System::Drawing::Point(698, 186);
			this->gpbDeleteDeliveryAddress->Name = L"gpbDeleteDeliveryAddress";
			this->gpbDeleteDeliveryAddress->Size = System::Drawing::Size(220, 74);
			this->gpbDeleteDeliveryAddress->TabIndex = 38;
			this->gpbDeleteDeliveryAddress->TabStop = false;
			this->gpbDeleteDeliveryAddress->Text = L"Modifier adresses de livraison";
			// 
			// numIdDeliveryAddress
			// 
			this->numIdDeliveryAddress->AllowDrop = true;
			this->numIdDeliveryAddress->Location = System::Drawing::Point(118, 19);
			this->numIdDeliveryAddress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999, 0, 0, 0
			});
			this->numIdDeliveryAddress->Name = L"numIdDeliveryAddress";
			this->numIdDeliveryAddress->Size = System::Drawing::Size(96, 20);
			this->numIdDeliveryAddress->TabIndex = 5;
			// 
			// btnDeleteDeliveryAddress
			// 
			this->btnDeleteDeliveryAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteDeliveryAddress->Location = System::Drawing::Point(6, 45);
			this->btnDeleteDeliveryAddress->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnDeleteDeliveryAddress->Name = L"btnDeleteDeliveryAddress";
			this->btnDeleteDeliveryAddress->Size = System::Drawing::Size(208, 23);
			this->btnDeleteDeliveryAddress->TabIndex = 2;
			this->btnDeleteDeliveryAddress->Text = L"Supprimer adress de livraison";
			this->btnDeleteDeliveryAddress->UseVisualStyleBackColor = true;
			// 
			// gpbDeleDeliveryAddress
			// 
			this->gpbDeleDeliveryAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->gpbDeleDeliveryAddress->Controls->Add(this->numIdBillingAddress);
			this->gpbDeleDeliveryAddress->Controls->Add(this->lblBillingAddress);
			this->gpbDeleDeliveryAddress->Controls->Add(this->btnDeleteBillingAddress);
			this->gpbDeleDeliveryAddress->Location = System::Drawing::Point(698, 404);
			this->gpbDeleDeliveryAddress->Name = L"gpbDeleDeliveryAddress";
			this->gpbDeleDeliveryAddress->Size = System::Drawing::Size(220, 74);
			this->gpbDeleDeliveryAddress->TabIndex = 40;
			this->gpbDeleDeliveryAddress->TabStop = false;
			this->gpbDeleDeliveryAddress->Text = L"Supprimer adresse de paiement";
			// 
			// numIdBillingAddress
			// 
			this->numIdBillingAddress->AllowDrop = true;
			this->numIdBillingAddress->Location = System::Drawing::Point(118, 20);
			this->numIdBillingAddress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999, 0, 0, 0
			});
			this->numIdBillingAddress->Name = L"numIdBillingAddress";
			this->numIdBillingAddress->Size = System::Drawing::Size(93, 20);
			this->numIdBillingAddress->TabIndex = 5;
			// 
			// btnDeleteBillingAddress
			// 
			this->btnDeleteBillingAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDeleteBillingAddress->Location = System::Drawing::Point(6, 45);
			this->btnDeleteBillingAddress->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnDeleteBillingAddress->Name = L"btnDeleteBillingAddress";
			this->btnDeleteBillingAddress->Size = System::Drawing::Size(208, 23);
			this->btnDeleteBillingAddress->TabIndex = 2;
			this->btnDeleteBillingAddress->Text = L"Supprimer adress de paiement";
			this->btnDeleteBillingAddress->UseVisualStyleBackColor = true;
			// 
			// gpbCreateBillingAddress
			// 
			this->gpbCreateBillingAddress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->gpbCreateBillingAddress->Controls->Add(this->btnCreateBillingAddress);
			this->gpbCreateBillingAddress->Controls->Add(this->lblCityNameBillingAddress);
			this->gpbCreateBillingAddress->Controls->Add(this->txtCityBilling);
			this->gpbCreateBillingAddress->Controls->Add(this->txtStreetBilling);
			this->gpbCreateBillingAddress->Controls->Add(this->lblStreetNameBilling);
			this->gpbCreateBillingAddress->Controls->Add(this->numStreetNumberBilling);
			this->gpbCreateBillingAddress->Controls->Add(this->lblStreetNumberBilling);
			this->gpbCreateBillingAddress->Location = System::Drawing::Point(698, 266);
			this->gpbCreateBillingAddress->Name = L"gpbCreateBillingAddress";
			this->gpbCreateBillingAddress->Size = System::Drawing::Size(220, 132);
			this->gpbCreateBillingAddress->TabIndex = 39;
			this->gpbCreateBillingAddress->TabStop = false;
			this->gpbCreateBillingAddress->Text = L"Supprimer adresse de paiement";
			// 
			// btnCreateBillingAddress
			// 
			this->btnCreateBillingAddress->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnCreateBillingAddress->Location = System::Drawing::Point(6, 100);
			this->btnCreateBillingAddress->Name = L"btnCreateBillingAddress";
			this->btnCreateBillingAddress->Size = System::Drawing::Size(205, 23);
			this->btnCreateBillingAddress->TabIndex = 37;
			this->btnCreateBillingAddress->Text = L"Ajouter adresse de paiement";
			this->btnCreateBillingAddress->UseVisualStyleBackColor = true;
			// 
			// txtCityBilling
			// 
			this->txtCityBilling->Location = System::Drawing::Point(54, 74);
			this->txtCityBilling->MaxLength = 50;
			this->txtCityBilling->Name = L"txtCityBilling";
			this->txtCityBilling->Size = System::Drawing::Size(160, 20);
			this->txtCityBilling->TabIndex = 15;
			// 
			// txtStreetBilling
			// 
			this->txtStreetBilling->Location = System::Drawing::Point(54, 48);
			this->txtStreetBilling->MaxLength = 50;
			this->txtStreetBilling->Name = L"txtStreetBilling";
			this->txtStreetBilling->Size = System::Drawing::Size(160, 20);
			this->txtStreetBilling->TabIndex = 19;
			// 
			// numStreetNumberBilling
			// 
			this->numStreetNumberBilling->AllowDrop = true;
			this->numStreetNumberBilling->Location = System::Drawing::Point(118, 20);
			this->numStreetNumberBilling->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999, 0, 0, 0
			});
			this->numStreetNumberBilling->Name = L"numStreetNumberBilling";
			this->numStreetNumberBilling->Size = System::Drawing::Size(96, 20);
			this->numStreetNumberBilling->TabIndex = 16;
			// 
			// ClientEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 489);
			this->Controls->Add(this->gpbDeleDeliveryAddress);
			this->Controls->Add(this->gpbDeleteDeliveryAddress);
			this->Controls->Add(this->gpbCreateBillingAddress);
			this->Controls->Add(this->gpbcreateDeliveryAddressz);
			this->Controls->Add(this->dgvBillingAddresses);
			this->Controls->Add(this->dgvDeliveryAddresses);
			this->Controls->Add(this->btnDeleteClient);
			this->Controls->Add(this->btnCreateClient);
			this->Controls->Add(this->btnUpdateClient);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MaximumSize = System::Drawing::Size(975, 528);
			this->MinimumSize = System::Drawing::Size(975, 528);
			this->Name = L"ClientEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClientEditorForm";
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDeliveryAddresses))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBillingAddresses))->EndInit();
			this->gpbcreateDeliveryAddressz->ResumeLayout(false);
			this->gpbcreateDeliveryAddressz->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumberDelivery))->EndInit();
			this->gpbDeleteDeliveryAddress->ResumeLayout(false);
			this->gpbDeleteDeliveryAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdDeliveryAddress))->EndInit();
			this->gpbDeleDeliveryAddress->ResumeLayout(false);
			this->gpbDeleDeliveryAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdBillingAddress))->EndInit();
			this->gpbCreateBillingAddress->ResumeLayout(false);
			this->gpbCreateBillingAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumberBilling))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void btnCreateClientClick(System::Object^ sender, System::EventArgs^ e) {
			if (this->alreadyExists) {
				MessageBox::Show("Ouvrez l'éditeur de client en mode création pour créer un nouveu client", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la création si le client existe déjà
			}
			if (this->txtName->Text->Length == 0) {
				MessageBox::Show("Le nom ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtFirstName->Text->Length == 0) {
				MessageBox::Show("Le prénom ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (System::DateTime::Compare(this->dtpBirth->Value, *NS_Services::Services::MIN_DATETIME) <= 0) {
				MessageBox::Show("La date de naissance ne peut pas être antérieure au 01/01/1900.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Création du client
			this->client = this->services->createClient(this->txtName->Text, this->txtFirstName->Text, this->dtpBirth->Value, this->dtpFirstPurchase->Value);
			if (client != nullptr) {
				MessageBox::Show("Le client a bien été créé.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->alreadyExists = true;
				fillFieldsFromObject();
				enableButtons();
			} else {
				MessageBox::Show("Une erreur est survenue lors de la création du client.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		//System::Void btnCreateDelliveryAddressClick(System::Object^ sender, System::EventArgs^ e) {
		//	if (this->txtStreetDelivery->Text->Length > 0 && this->numStreetNumberDelivery->Value > 0 && this->txtCityDelivery->Text->Length > 0) {
		//		this->services->cit
		//	}
		//}

		// Désactive le bouton de création si le client existe déjà
		// Désactive les boutons de modification et de suppression si le client n'existe pas encore
		System::Void enableButtons() {
			if (alreadyExists) {
				this->btnCreateClient->Enabled = false;
				this->btnUpdateClient->Enabled = true;
				this->btnDeleteClient->Enabled = true;
				this->btnCreateBillingAddress->Enabled = true;
				this->btnDeleteBillingAddress->Enabled = true;
				this->btnDeleteDeliveryAddress->Enabled = true;
				this->btnCreateDeliveryAddress->Enabled = true;
			} else {
				this->btnCreateClient->Enabled = true;
				this->btnUpdateClient->Enabled = false;
				this->btnDeleteClient->Enabled = false;
				this->btnCreateBillingAddress->Enabled = false;
				this->btnDeleteBillingAddress->Enabled = false;
				this->btnDeleteDeliveryAddress->Enabled = false;
				this->btnCreateDeliveryAddress->Enabled = false;
			}
		}

		System::Void fillFieldsFromObject() {
			if (this->client != nullptr) {
				this->txtName->Text = this->client->getName();
				this->txtFirstName->Text = this->client->getFirstName();
				this->dtpBirth->Value = *this->client->getBirthDate();
				this->dtpFirstPurchase->Value = *this->client->getFirstOrderDate();

				// Remplissage du tableau des adresses de livraison
				DataSet^ dataDeliveryAddresses = services->selectClientDeliveryAddressesByIdClient(this->client->getId());
				this->dgvDeliveryAddresses->DataSource = dataDeliveryAddresses->Tables[0];

				// Remplissage du tableau des adresses de paiement
				DataSet^ dataBillingAddresses = services->selectClientBillingAddressesByIdClient(this->client->getId());
				this->dgvBillingAddresses->DataSource = dataBillingAddresses->Tables[0];
			}
		}
	};
}
