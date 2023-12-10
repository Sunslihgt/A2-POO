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
	/// Summary for PurchaseEditorForm
	/// </summary>
	public ref class PurchaseEditorForm : public System::Windows::Forms::Form {
	public:
		PurchaseEditorForm(NS_Services::Services^ services, bool alreadyExists, int id) {
			InitializeComponent();
			addFloatTextBoxConstraints();

			this->services = services;
			this->alreadyExists = alreadyExists;
			this->id = id;
			this->useId = true;
			this->useIdPurchasedItem = true;

			if (alreadyExists) {
				this->services->updatePurchasePrices(this->id);
				fillFieldsFromId();  // Remplissage des champs à partir de l'id
				enableButtons();  // Activation des boutons
			}

			fillFieldsFromId();  // Remplissage des champs à partir de l'id
			enableButtons();  // Activation des boutons
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PurchaseEditorForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;
		bool alreadyExists;
		int id;
		bool useId;
		bool useIdPurchasedItem;

	private: System::Windows::Forms::Button^ btnDeletePurchase;
	private: System::Windows::Forms::Button^ btnCreatePurchase;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblOrder;
	private: System::Windows::Forms::DateTimePicker^ dtpOrder;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::DataGridView^ dgvPurchasedItems;
	private: System::Windows::Forms::Button^ btnUpdatePurchase;
	private: System::Windows::Forms::GroupBox^ gpbInfos;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblDelivery;
	private: System::Windows::Forms::DateTimePicker^ dtpDelivery;
	private: System::Windows::Forms::GroupBox^ gpbPrice;
	private: System::Windows::Forms::TextBox^ txtFloatTtcPrice;
	private: System::Windows::Forms::Label^ lblFloatTtcPrice;
	private: System::Windows::Forms::TextBox^ txtFloatDiscountAmount;
	private: System::Windows::Forms::TextBox^ txtFloatDutyFreePrice;
	private: System::Windows::Forms::Label^ lblFloatVatAmount;
	private: System::Windows::Forms::TextBox^ txtFloatVatAmount;
	private: System::Windows::Forms::Label^ lblFloatDutyFreePrice;
	private: System::Windows::Forms::Label^ lblFloatDiscountAmount;
	private: System::Windows::Forms::GroupBox^ gpbDeliveryAddress;
	private: System::Windows::Forms::Label^ lblDeliveryCity;
	private: System::Windows::Forms::TextBox^ txtDeliveryCity;
	private: System::Windows::Forms::TextBox^ txtDeliveryStreet;
	private: System::Windows::Forms::Label^ lblDeliveryStreet;
	private: System::Windows::Forms::NumericUpDown^ numDeliveryStreetNumber;
	private: System::Windows::Forms::Label^ lblDeliveryStreetNumber;
	private: System::Windows::Forms::GroupBox^ gpbPayment;
	private: System::Windows::Forms::TextBox^ txtPaymentFirstName;
	private: System::Windows::Forms::Label^ lblPaymentFirstName;
	private: System::Windows::Forms::Label^ lblPaymentName;
	private: System::Windows::Forms::TextBox^ txtPaymentName;
	private: System::Windows::Forms::Label^ lblPaymentType;
	private: System::Windows::Forms::TextBox^ txtFloatPaymentAmount;
	private: System::Windows::Forms::Label^ lblFloatPaymentAmount;
	private: System::Windows::Forms::GroupBox^ gpbDates;
	private: System::Windows::Forms::Button^ btnSwitchIdName;
	private: System::Windows::Forms::NumericUpDown^ numIdClient;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCreatePayment;
	private: System::Windows::Forms::DateTimePicker^ dtpPayDate;
	private: System::Windows::Forms::DataGridView^ dgvPaymentMethods;
	private: System::Windows::Forms::NumericUpDown^ numPaymentType;
	private: System::Windows::Forms::Label^ lblPaymentCity;
	private: System::Windows::Forms::TextBox^ txtPaymentCity;
	private: System::Windows::Forms::TextBox^ txtPaymentStreet;
	private: System::Windows::Forms::Label^ lblPaymentStreet;
	private: System::Windows::Forms::NumericUpDown^ numPaymentStreetNumber;
	private: System::Windows::Forms::Label^ lblStreetNumber;
	private: System::Windows::Forms::GroupBox^ gpbPurchasedItem;
	private: System::Windows::Forms::NumericUpDown^ numIdPurchasedItem;
	private: System::Windows::Forms::Label^ lblIdPurchasedItem;
	private: System::Windows::Forms::Button^ btnSwitchIdNamePurchasedItem;
	private: System::Windows::Forms::TextBox^ txtReferencePurchasedItem;
	private: System::Windows::Forms::Label^ lblReferencePurchasedItem;
	private: System::Windows::Forms::Label^ lblNamePurchasedItem;
	private: System::Windows::Forms::TextBox^ txtNamePurchasedItem;
	private: System::Windows::Forms::Button^ btnCreatePurchasedItem;
	private: System::Windows::Forms::NumericUpDown^ numQuantityPurchasedItem;
	private: System::Windows::Forms::Label^ lblQuantityPurchasedItem;


	private: System::Windows::Forms::GroupBox^ gpbDeletePurchasedItem;
	private: System::Windows::Forms::Button^ btnDeletePurchasedItem;
	private: System::Windows::Forms::NumericUpDown^ numDeletePurchasedItemId;
	private: System::Windows::Forms::Label^ lblDeletePurchasedItemId;


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
			this->btnDeletePurchase = (gcnew System::Windows::Forms::Button());
			this->btnCreatePurchase = (gcnew System::Windows::Forms::Button());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblOrder = (gcnew System::Windows::Forms::Label());
			this->dtpOrder = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->dgvPurchasedItems = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdatePurchase = (gcnew System::Windows::Forms::Button());
			this->gpbInfos = (gcnew System::Windows::Forms::GroupBox());
			this->numIdClient = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btnSwitchIdName = (gcnew System::Windows::Forms::Button());
			this->lblDelivery = (gcnew System::Windows::Forms::Label());
			this->dtpDelivery = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->gpbPrice = (gcnew System::Windows::Forms::GroupBox());
			this->txtFloatTtcPrice = (gcnew System::Windows::Forms::TextBox());
			this->lblFloatTtcPrice = (gcnew System::Windows::Forms::Label());
			this->txtFloatDiscountAmount = (gcnew System::Windows::Forms::TextBox());
			this->txtFloatDutyFreePrice = (gcnew System::Windows::Forms::TextBox());
			this->lblFloatVatAmount = (gcnew System::Windows::Forms::Label());
			this->txtFloatVatAmount = (gcnew System::Windows::Forms::TextBox());
			this->lblFloatDutyFreePrice = (gcnew System::Windows::Forms::Label());
			this->lblFloatDiscountAmount = (gcnew System::Windows::Forms::Label());
			this->gpbDeliveryAddress = (gcnew System::Windows::Forms::GroupBox());
			this->lblDeliveryCity = (gcnew System::Windows::Forms::Label());
			this->txtDeliveryCity = (gcnew System::Windows::Forms::TextBox());
			this->txtDeliveryStreet = (gcnew System::Windows::Forms::TextBox());
			this->lblDeliveryStreet = (gcnew System::Windows::Forms::Label());
			this->numDeliveryStreetNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblDeliveryStreetNumber = (gcnew System::Windows::Forms::Label());
			this->gpbPayment = (gcnew System::Windows::Forms::GroupBox());
			this->lblPaymentCity = (gcnew System::Windows::Forms::Label());
			this->numPaymentType = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtPaymentCity = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPaymentStreet = (gcnew System::Windows::Forms::TextBox());
			this->btnCreatePayment = (gcnew System::Windows::Forms::Button());
			this->lblPaymentStreet = (gcnew System::Windows::Forms::Label());
			this->dtpPayDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->numPaymentStreetNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtPaymentFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblStreetNumber = (gcnew System::Windows::Forms::Label());
			this->lblPaymentFirstName = (gcnew System::Windows::Forms::Label());
			this->lblPaymentName = (gcnew System::Windows::Forms::Label());
			this->lblPaymentType = (gcnew System::Windows::Forms::Label());
			this->txtPaymentName = (gcnew System::Windows::Forms::TextBox());
			this->txtFloatPaymentAmount = (gcnew System::Windows::Forms::TextBox());
			this->lblFloatPaymentAmount = (gcnew System::Windows::Forms::Label());
			this->gpbDates = (gcnew System::Windows::Forms::GroupBox());
			this->dgvPaymentMethods = (gcnew System::Windows::Forms::DataGridView());
			this->gpbPurchasedItem = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreatePurchasedItem = (gcnew System::Windows::Forms::Button());
			this->numQuantityPurchasedItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblQuantityPurchasedItem = (gcnew System::Windows::Forms::Label());
			this->numIdPurchasedItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblIdPurchasedItem = (gcnew System::Windows::Forms::Label());
			this->btnSwitchIdNamePurchasedItem = (gcnew System::Windows::Forms::Button());
			this->txtReferencePurchasedItem = (gcnew System::Windows::Forms::TextBox());
			this->lblReferencePurchasedItem = (gcnew System::Windows::Forms::Label());
			this->lblNamePurchasedItem = (gcnew System::Windows::Forms::Label());
			this->txtNamePurchasedItem = (gcnew System::Windows::Forms::TextBox());
			this->gpbDeletePurchasedItem = (gcnew System::Windows::Forms::GroupBox());
			this->btnDeletePurchasedItem = (gcnew System::Windows::Forms::Button());
			this->numDeletePurchasedItemId = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblDeletePurchasedItemId = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchasedItems))->BeginInit();
			this->gpbInfos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdClient))->BeginInit();
			this->gpbPrice->SuspendLayout();
			this->gpbDeliveryAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDeliveryStreetNumber))->BeginInit();
			this->gpbPayment->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPaymentType))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPaymentStreetNumber))->BeginInit();
			this->gpbDates->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPaymentMethods))->BeginInit();
			this->gpbPurchasedItem->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantityPurchasedItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdPurchasedItem))->BeginInit();
			this->gpbDeletePurchasedItem->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDeletePurchasedItemId))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDeletePurchase
			// 
			this->btnDeletePurchase->Location = System::Drawing::Point(40, 554);
			this->btnDeletePurchase->Name = L"btnDeletePurchase";
			this->btnDeletePurchase->Size = System::Drawing::Size(220, 23);
			this->btnDeletePurchase->TabIndex = 8;
			this->btnDeletePurchase->Text = L"Supprimer";
			this->btnDeletePurchase->UseVisualStyleBackColor = true;
			this->btnDeletePurchase->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnDeletePurchaseClick);
			// 
			// btnCreatePurchase
			// 
			this->btnCreatePurchase->Location = System::Drawing::Point(40, 496);
			this->btnCreatePurchase->Name = L"btnCreatePurchase";
			this->btnCreatePurchase->Size = System::Drawing::Size(220, 23);
			this->btnCreatePurchase->TabIndex = 6;
			this->btnCreatePurchase->Text = L"Créer";
			this->btnCreatePurchase->UseVisualStyleBackColor = true;
			this->btnCreatePurchase->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnCreatePurchaseClick);
			// 
			// txtFirstName
			// 
			this->txtFirstName->Enabled = false;
			this->txtFirstName->Location = System::Drawing::Point(54, 74);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->ReadOnly = true;
			this->txtFirstName->Size = System::Drawing::Size(159, 20);
			this->txtFirstName->TabIndex = 2;
			// 
			// lblFirstName
			// 
			this->lblFirstName->Location = System::Drawing::Point(6, 77);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(43, 13);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"Prénom";
			// 
			// lblOrder
			// 
			this->lblOrder->Location = System::Drawing::Point(6, 16);
			this->lblOrder->Name = L"lblOrder";
			this->lblOrder->Size = System::Drawing::Size(106, 17);
			this->lblOrder->TabIndex = 20;
			this->lblOrder->Text = L"Date de commande";
			// 
			// dtpOrder
			// 
			this->dtpOrder->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpOrder->Location = System::Drawing::Point(119, 13);
			this->dtpOrder->Name = L"dtpOrder";
			this->dtpOrder->Size = System::Drawing::Size(95, 20);
			this->dtpOrder->TabIndex = 3;
			this->dtpOrder->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblName
			// 
			this->lblName->Location = System::Drawing::Point(6, 51);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(29, 13);
			this->lblName->TabIndex = 16;
			this->lblName->Text = L"Nom";
			// 
			// txtName
			// 
			this->txtName->Enabled = false;
			this->txtName->Location = System::Drawing::Point(54, 48);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(159, 20);
			this->txtName->TabIndex = 1;
			// 
			// dgvPurchasedItems
			// 
			this->dgvPurchasedItems->AllowUserToAddRows = false;
			this->dgvPurchasedItems->AllowUserToDeleteRows = false;
			this->dgvPurchasedItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvPurchasedItems->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvPurchasedItems->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvPurchasedItems->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvPurchasedItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPurchasedItems->Location = System::Drawing::Point(266, 48);
			this->dgvPurchasedItems->Name = L"dgvPurchasedItems";
			this->dgvPurchasedItems->ReadOnly = true;
			this->dgvPurchasedItems->RowHeadersVisible = false;
			this->dgvPurchasedItems->Size = System::Drawing::Size(650, 264);
			this->dgvPurchasedItems->TabIndex = 39;
			// 
			// btnUpdatePurchase
			// 
			this->btnUpdatePurchase->Location = System::Drawing::Point(40, 525);
			this->btnUpdatePurchase->Name = L"btnUpdatePurchase";
			this->btnUpdatePurchase->Size = System::Drawing::Size(220, 23);
			this->btnUpdatePurchase->TabIndex = 7;
			this->btnUpdatePurchase->Text = L"Modifier";
			this->btnUpdatePurchase->UseVisualStyleBackColor = true;
			this->btnUpdatePurchase->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnUpdatePurchaseClick);
			// 
			// gpbInfos
			// 
			this->gpbInfos->Controls->Add(this->numIdClient);
			this->gpbInfos->Controls->Add(this->lblId);
			this->gpbInfos->Controls->Add(this->btnSwitchIdName);
			this->gpbInfos->Controls->Add(this->txtFirstName);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Location = System::Drawing::Point(40, 48);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 131);
			this->gpbInfos->TabIndex = 35;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Client";
			// 
			// numIdClient
			// 
			this->numIdClient->AllowDrop = true;
			this->numIdClient->Location = System::Drawing::Point(112, 20);
			this->numIdClient->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999999, 0, 0, 0
			});
			this->numIdClient->Name = L"numIdClient";
			this->numIdClient->Size = System::Drawing::Size(101, 20);
			this->numIdClient->TabIndex = 46;
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(6, 22);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(44, 13);
			this->lblId->TabIndex = 45;
			this->lblId->Text = L"Id client";
			// 
			// btnSwitchIdName
			// 
			this->btnSwitchIdName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSwitchIdName->Location = System::Drawing::Point(5, 100);
			this->btnSwitchIdName->Margin = System::Windows::Forms::Padding(3, 3, 3, 2);
			this->btnSwitchIdName->Name = L"btnSwitchIdName";
			this->btnSwitchIdName->Size = System::Drawing::Size(208, 23);
			this->btnSwitchIdName->TabIndex = 45;
			this->btnSwitchIdName->Text = L"Utiliser nom et prénom";
			this->btnSwitchIdName->UseVisualStyleBackColor = true;
			this->btnSwitchIdName->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnSwitchIdNameClick);
			// 
			// lblDelivery
			// 
			this->lblDelivery->Location = System::Drawing::Point(6, 42);
			this->lblDelivery->Name = L"lblDelivery";
			this->lblDelivery->Size = System::Drawing::Size(106, 17);
			this->lblDelivery->TabIndex = 24;
			this->lblDelivery->Text = L"Date de livraison";
			// 
			// dtpDelivery
			// 
			this->dtpDelivery->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDelivery->Location = System::Drawing::Point(119, 39);
			this->dtpDelivery->Name = L"dtpDelivery";
			this->dtpDelivery->Size = System::Drawing::Size(95, 20);
			this->dtpDelivery->TabIndex = 5;
			this->dtpDelivery->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 8);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(1158, 23);
			this->lblTitle->TabIndex = 34;
			this->lblTitle->Text = L"Commandes";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// gpbPrice
			// 
			this->gpbPrice->Controls->Add(this->txtFloatTtcPrice);
			this->gpbPrice->Controls->Add(this->lblFloatTtcPrice);
			this->gpbPrice->Controls->Add(this->txtFloatDiscountAmount);
			this->gpbPrice->Controls->Add(this->txtFloatDutyFreePrice);
			this->gpbPrice->Controls->Add(this->lblFloatVatAmount);
			this->gpbPrice->Controls->Add(this->txtFloatVatAmount);
			this->gpbPrice->Controls->Add(this->lblFloatDutyFreePrice);
			this->gpbPrice->Controls->Add(this->lblFloatDiscountAmount);
			this->gpbPrice->Location = System::Drawing::Point(40, 258);
			this->gpbPrice->Name = L"gpbPrice";
			this->gpbPrice->Size = System::Drawing::Size(220, 124);
			this->gpbPrice->TabIndex = 41;
			this->gpbPrice->TabStop = false;
			this->gpbPrice->Text = L"Prix";
			// 
			// txtFloatTtcPrice
			// 
			this->txtFloatTtcPrice->Enabled = false;
			this->txtFloatTtcPrice->Location = System::Drawing::Point(112, 97);
			this->txtFloatTtcPrice->MaxLength = 10;
			this->txtFloatTtcPrice->Name = L"txtFloatTtcPrice";
			this->txtFloatTtcPrice->ReadOnly = true;
			this->txtFloatTtcPrice->Size = System::Drawing::Size(102, 20);
			this->txtFloatTtcPrice->TabIndex = 26;
			this->txtFloatTtcPrice->Text = L"0";
			// 
			// lblFloatTtcPrice
			// 
			this->lblFloatTtcPrice->AutoSize = true;
			this->lblFloatTtcPrice->Location = System::Drawing::Point(5, 100);
			this->lblFloatTtcPrice->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFloatTtcPrice->Name = L"lblFloatTtcPrice";
			this->lblFloatTtcPrice->Size = System::Drawing::Size(63, 13);
			this->lblFloatTtcPrice->TabIndex = 25;
			this->lblFloatTtcPrice->Text = L"Prix TTC (€)";
			// 
			// txtFloatDiscountAmount
			// 
			this->txtFloatDiscountAmount->Location = System::Drawing::Point(112, 19);
			this->txtFloatDiscountAmount->MaxLength = 10;
			this->txtFloatDiscountAmount->Name = L"txtFloatDiscountAmount";
			this->txtFloatDiscountAmount->Size = System::Drawing::Size(102, 20);
			this->txtFloatDiscountAmount->TabIndex = 22;
			this->txtFloatDiscountAmount->Text = L"0";
			// 
			// txtFloatDutyFreePrice
			// 
			this->txtFloatDutyFreePrice->Enabled = false;
			this->txtFloatDutyFreePrice->Location = System::Drawing::Point(112, 45);
			this->txtFloatDutyFreePrice->MaxLength = 10;
			this->txtFloatDutyFreePrice->Name = L"txtFloatDutyFreePrice";
			this->txtFloatDutyFreePrice->ReadOnly = true;
			this->txtFloatDutyFreePrice->Size = System::Drawing::Size(102, 20);
			this->txtFloatDutyFreePrice->TabIndex = 21;
			this->txtFloatDutyFreePrice->Text = L"0";
			// 
			// lblFloatVatAmount
			// 
			this->lblFloatVatAmount->AutoSize = true;
			this->lblFloatVatAmount->Location = System::Drawing::Point(6, 74);
			this->lblFloatVatAmount->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFloatVatAmount->Name = L"lblFloatVatAmount";
			this->lblFloatVatAmount->Size = System::Drawing::Size(43, 13);
			this->lblFloatVatAmount->TabIndex = 17;
			this->lblFloatVatAmount->Text = L"TVA (€)";
			// 
			// txtFloatVatAmount
			// 
			this->txtFloatVatAmount->Enabled = false;
			this->txtFloatVatAmount->Location = System::Drawing::Point(112, 71);
			this->txtFloatVatAmount->MaxLength = 10;
			this->txtFloatVatAmount->Name = L"txtFloatVatAmount";
			this->txtFloatVatAmount->ReadOnly = true;
			this->txtFloatVatAmount->Size = System::Drawing::Size(102, 20);
			this->txtFloatVatAmount->TabIndex = 15;
			this->txtFloatVatAmount->Text = L"0";
			// 
			// lblFloatDutyFreePrice
			// 
			this->lblFloatDutyFreePrice->AutoSize = true;
			this->lblFloatDutyFreePrice->Location = System::Drawing::Point(5, 48);
			this->lblFloatDutyFreePrice->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFloatDutyFreePrice->Name = L"lblFloatDutyFreePrice";
			this->lblFloatDutyFreePrice->Size = System::Drawing::Size(90, 13);
			this->lblFloatDutyFreePrice->TabIndex = 20;
			this->lblFloatDutyFreePrice->Text = L"Prix hors taxes (€)";
			// 
			// lblFloatDiscountAmount
			// 
			this->lblFloatDiscountAmount->AutoSize = true;
			this->lblFloatDiscountAmount->Location = System::Drawing::Point(6, 22);
			this->lblFloatDiscountAmount->Name = L"lblFloatDiscountAmount";
			this->lblFloatDiscountAmount->Size = System::Drawing::Size(76, 13);
			this->lblFloatDiscountAmount->TabIndex = 18;
			this->lblFloatDiscountAmount->Text = L"Réductions (€)";
			// 
			// gpbDeliveryAddress
			// 
			this->gpbDeliveryAddress->Controls->Add(this->lblDeliveryCity);
			this->gpbDeliveryAddress->Controls->Add(this->txtDeliveryCity);
			this->gpbDeliveryAddress->Controls->Add(this->txtDeliveryStreet);
			this->gpbDeliveryAddress->Controls->Add(this->lblDeliveryStreet);
			this->gpbDeliveryAddress->Controls->Add(this->numDeliveryStreetNumber);
			this->gpbDeliveryAddress->Controls->Add(this->lblDeliveryStreetNumber);
			this->gpbDeliveryAddress->Location = System::Drawing::Point(40, 388);
			this->gpbDeliveryAddress->Name = L"gpbDeliveryAddress";
			this->gpbDeliveryAddress->Size = System::Drawing::Size(220, 104);
			this->gpbDeliveryAddress->TabIndex = 42;
			this->gpbDeliveryAddress->TabStop = false;
			this->gpbDeliveryAddress->Text = L"Adresse de livraison";
			// 
			// lblDeliveryCity
			// 
			this->lblDeliveryCity->AutoSize = true;
			this->lblDeliveryCity->Location = System::Drawing::Point(5, 77);
			this->lblDeliveryCity->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblDeliveryCity->Name = L"lblDeliveryCity";
			this->lblDeliveryCity->Size = System::Drawing::Size(26, 13);
			this->lblDeliveryCity->TabIndex = 17;
			this->lblDeliveryCity->Text = L"Ville";
			// 
			// txtDeliveryCity
			// 
			this->txtDeliveryCity->Location = System::Drawing::Point(54, 74);
			this->txtDeliveryCity->MaxLength = 50;
			this->txtDeliveryCity->Name = L"txtDeliveryCity";
			this->txtDeliveryCity->Size = System::Drawing::Size(160, 20);
			this->txtDeliveryCity->TabIndex = 15;
			// 
			// txtDeliveryStreet
			// 
			this->txtDeliveryStreet->Location = System::Drawing::Point(54, 48);
			this->txtDeliveryStreet->MaxLength = 50;
			this->txtDeliveryStreet->Name = L"txtDeliveryStreet";
			this->txtDeliveryStreet->Size = System::Drawing::Size(160, 20);
			this->txtDeliveryStreet->TabIndex = 19;
			// 
			// lblDeliveryStreet
			// 
			this->lblDeliveryStreet->AutoSize = true;
			this->lblDeliveryStreet->Location = System::Drawing::Point(5, 51);
			this->lblDeliveryStreet->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblDeliveryStreet->Name = L"lblDeliveryStreet";
			this->lblDeliveryStreet->Size = System::Drawing::Size(27, 13);
			this->lblDeliveryStreet->TabIndex = 20;
			this->lblDeliveryStreet->Text = L"Rue";
			// 
			// numDeliveryStreetNumber
			// 
			this->numDeliveryStreetNumber->AllowDrop = true;
			this->numDeliveryStreetNumber->Location = System::Drawing::Point(118, 20);
			this->numDeliveryStreetNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
			this->numDeliveryStreetNumber->Name = L"numDeliveryStreetNumber";
			this->numDeliveryStreetNumber->Size = System::Drawing::Size(96, 20);
			this->numDeliveryStreetNumber->TabIndex = 16;
			// 
			// lblDeliveryStreetNumber
			// 
			this->lblDeliveryStreetNumber->AutoSize = true;
			this->lblDeliveryStreetNumber->Location = System::Drawing::Point(6, 22);
			this->lblDeliveryStreetNumber->Name = L"lblDeliveryStreetNumber";
			this->lblDeliveryStreetNumber->Size = System::Drawing::Size(42, 13);
			this->lblDeliveryStreetNumber->TabIndex = 18;
			this->lblDeliveryStreetNumber->Text = L"N° Rue";
			// 
			// gpbPayment
			// 
			this->gpbPayment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbPayment->Controls->Add(this->lblPaymentCity);
			this->gpbPayment->Controls->Add(this->numPaymentType);
			this->gpbPayment->Controls->Add(this->txtPaymentCity);
			this->gpbPayment->Controls->Add(this->label1);
			this->gpbPayment->Controls->Add(this->txtPaymentStreet);
			this->gpbPayment->Controls->Add(this->btnCreatePayment);
			this->gpbPayment->Controls->Add(this->lblPaymentStreet);
			this->gpbPayment->Controls->Add(this->dtpPayDate);
			this->gpbPayment->Controls->Add(this->numPaymentStreetNumber);
			this->gpbPayment->Controls->Add(this->txtPaymentFirstName);
			this->gpbPayment->Controls->Add(this->lblStreetNumber);
			this->gpbPayment->Controls->Add(this->lblPaymentFirstName);
			this->gpbPayment->Controls->Add(this->lblPaymentName);
			this->gpbPayment->Controls->Add(this->lblPaymentType);
			this->gpbPayment->Controls->Add(this->txtPaymentName);
			this->gpbPayment->Controls->Add(this->txtFloatPaymentAmount);
			this->gpbPayment->Controls->Add(this->lblFloatPaymentAmount);
			this->gpbPayment->Location = System::Drawing::Point(922, 318);
			this->gpbPayment->Name = L"gpbPayment";
			this->gpbPayment->Size = System::Drawing::Size(220, 258);
			this->gpbPayment->TabIndex = 43;
			this->gpbPayment->TabStop = false;
			this->gpbPayment->Text = L"Paiement";
			// 
			// lblPaymentCity
			// 
			this->lblPaymentCity->AutoSize = true;
			this->lblPaymentCity->Location = System::Drawing::Point(4, 207);
			this->lblPaymentCity->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblPaymentCity->Name = L"lblPaymentCity";
			this->lblPaymentCity->Size = System::Drawing::Size(26, 13);
			this->lblPaymentCity->TabIndex = 49;
			this->lblPaymentCity->Text = L"Ville";
			// 
			// numPaymentType
			// 
			this->numPaymentType->Location = System::Drawing::Point(118, 124);
			this->numPaymentType->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99, 0, 0, 0
			});
			this->numPaymentType->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0, 0
			});
			this->numPaymentType->Name = L"numPaymentType";
			this->numPaymentType->Size = System::Drawing::Size(95, 20);
			this->numPaymentType->TabIndex = 48;
			this->numPaymentType->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0, 0
			});
			// 
			// txtPaymentCity
			// 
			this->txtPaymentCity->Location = System::Drawing::Point(61, 204);
			this->txtPaymentCity->MaxLength = 50;
			this->txtPaymentCity->Name = L"txtPaymentCity";
			this->txtPaymentCity->Size = System::Drawing::Size(152, 20);
			this->txtPaymentCity->TabIndex = 48;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(5, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 17);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Date de paiement";
			// 
			// txtPaymentStreet
			// 
			this->txtPaymentStreet->Location = System::Drawing::Point(61, 178);
			this->txtPaymentStreet->MaxLength = 50;
			this->txtPaymentStreet->Name = L"txtPaymentStreet";
			this->txtPaymentStreet->Size = System::Drawing::Size(152, 20);
			this->txtPaymentStreet->TabIndex = 47;
			// 
			// btnCreatePayment
			// 
			this->btnCreatePayment->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreatePayment->Location = System::Drawing::Point(5, 230);
			this->btnCreatePayment->Margin = System::Windows::Forms::Padding(3, 3, 3, 2);
			this->btnCreatePayment->Name = L"btnCreatePayment";
			this->btnCreatePayment->Size = System::Drawing::Size(208, 23);
			this->btnCreatePayment->TabIndex = 47;
			this->btnCreatePayment->Text = L"Ajouter paiement";
			this->btnCreatePayment->UseVisualStyleBackColor = true;
			this->btnCreatePayment->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnCreatePaymentClick);
			// 
			// lblPaymentStreet
			// 
			this->lblPaymentStreet->AutoSize = true;
			this->lblPaymentStreet->Location = System::Drawing::Point(4, 181);
			this->lblPaymentStreet->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblPaymentStreet->Name = L"lblPaymentStreet";
			this->lblPaymentStreet->Size = System::Drawing::Size(27, 13);
			this->lblPaymentStreet->TabIndex = 51;
			this->lblPaymentStreet->Text = L"Rue";
			// 
			// dtpPayDate
			// 
			this->dtpPayDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpPayDate->Location = System::Drawing::Point(118, 71);
			this->dtpPayDate->Name = L"dtpPayDate";
			this->dtpPayDate->Size = System::Drawing::Size(95, 20);
			this->dtpPayDate->TabIndex = 25;
			this->dtpPayDate->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// numPaymentStreetNumber
			// 
			this->numPaymentStreetNumber->AllowDrop = true;
			this->numPaymentStreetNumber->Location = System::Drawing::Point(118, 150);
			this->numPaymentStreetNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
			this->numPaymentStreetNumber->Name = L"numPaymentStreetNumber";
			this->numPaymentStreetNumber->Size = System::Drawing::Size(95, 20);
			this->numPaymentStreetNumber->TabIndex = 46;
			// 
			// txtPaymentFirstName
			// 
			this->txtPaymentFirstName->Location = System::Drawing::Point(61, 45);
			this->txtPaymentFirstName->MaxLength = 50;
			this->txtPaymentFirstName->Name = L"txtPaymentFirstName";
			this->txtPaymentFirstName->Size = System::Drawing::Size(153, 20);
			this->txtPaymentFirstName->TabIndex = 22;
			// 
			// lblStreetNumber
			// 
			this->lblStreetNumber->AutoSize = true;
			this->lblStreetNumber->Location = System::Drawing::Point(5, 152);
			this->lblStreetNumber->Name = L"lblStreetNumber";
			this->lblStreetNumber->Size = System::Drawing::Size(42, 13);
			this->lblStreetNumber->TabIndex = 50;
			this->lblStreetNumber->Text = L"N° Rue";
			// 
			// lblPaymentFirstName
			// 
			this->lblPaymentFirstName->Location = System::Drawing::Point(6, 48);
			this->lblPaymentFirstName->Name = L"lblPaymentFirstName";
			this->lblPaymentFirstName->Size = System::Drawing::Size(43, 13);
			this->lblPaymentFirstName->TabIndex = 24;
			this->lblPaymentFirstName->Text = L"Prénom";
			// 
			// lblPaymentName
			// 
			this->lblPaymentName->Location = System::Drawing::Point(6, 22);
			this->lblPaymentName->Name = L"lblPaymentName";
			this->lblPaymentName->Size = System::Drawing::Size(29, 13);
			this->lblPaymentName->TabIndex = 23;
			this->lblPaymentName->Text = L"Nom";
			// 
			// lblPaymentType
			// 
			this->lblPaymentType->AutoSize = true;
			this->lblPaymentType->Location = System::Drawing::Point(5, 126);
			this->lblPaymentType->Name = L"lblPaymentType";
			this->lblPaymentType->Size = System::Drawing::Size(100, 13);
			this->lblPaymentType->TabIndex = 29;
			this->lblPaymentType->Text = L"Id type de paiement";
			// 
			// txtPaymentName
			// 
			this->txtPaymentName->Location = System::Drawing::Point(61, 19);
			this->txtPaymentName->MaxLength = 50;
			this->txtPaymentName->Name = L"txtPaymentName";
			this->txtPaymentName->Size = System::Drawing::Size(153, 20);
			this->txtPaymentName->TabIndex = 21;
			// 
			// txtFloatPaymentAmount
			// 
			this->txtFloatPaymentAmount->Location = System::Drawing::Point(118, 97);
			this->txtFloatPaymentAmount->MaxLength = 10;
			this->txtFloatPaymentAmount->Name = L"txtFloatPaymentAmount";
			this->txtFloatPaymentAmount->Size = System::Drawing::Size(95, 20);
			this->txtFloatPaymentAmount->TabIndex = 28;
			this->txtFloatPaymentAmount->Text = L"0,00";
			// 
			// lblFloatPaymentAmount
			// 
			this->lblFloatPaymentAmount->AutoSize = true;
			this->lblFloatPaymentAmount->Location = System::Drawing::Point(5, 100);
			this->lblFloatPaymentAmount->Name = L"lblFloatPaymentAmount";
			this->lblFloatPaymentAmount->Size = System::Drawing::Size(46, 13);
			this->lblFloatPaymentAmount->TabIndex = 27;
			this->lblFloatPaymentAmount->Text = L"Montant";
			// 
			// gpbDates
			// 
			this->gpbDates->Controls->Add(this->lblDelivery);
			this->gpbDates->Controls->Add(this->lblOrder);
			this->gpbDates->Controls->Add(this->dtpDelivery);
			this->gpbDates->Controls->Add(this->dtpOrder);
			this->gpbDates->Location = System::Drawing::Point(40, 185);
			this->gpbDates->Name = L"gpbDates";
			this->gpbDates->Size = System::Drawing::Size(220, 67);
			this->gpbDates->TabIndex = 44;
			this->gpbDates->TabStop = false;
			this->gpbDates->Text = L"Dates";
			// 
			// dgvPaymentMethods
			// 
			this->dgvPaymentMethods->AllowUserToAddRows = false;
			this->dgvPaymentMethods->AllowUserToDeleteRows = false;
			this->dgvPaymentMethods->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvPaymentMethods->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvPaymentMethods->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvPaymentMethods->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvPaymentMethods->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPaymentMethods->Location = System::Drawing::Point(266, 318);
			this->dgvPaymentMethods->Name = L"dgvPaymentMethods";
			this->dgvPaymentMethods->ReadOnly = true;
			this->dgvPaymentMethods->RowHeadersVisible = false;
			this->dgvPaymentMethods->Size = System::Drawing::Size(650, 258);
			this->dgvPaymentMethods->TabIndex = 45;
			// 
			// gpbPurchasedItem
			// 
			this->gpbPurchasedItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbPurchasedItem->Controls->Add(this->btnCreatePurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->numQuantityPurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->lblQuantityPurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->numIdPurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->lblIdPurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->btnSwitchIdNamePurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->txtReferencePurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->lblReferencePurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->lblNamePurchasedItem);
			this->gpbPurchasedItem->Controls->Add(this->txtNamePurchasedItem);
			this->gpbPurchasedItem->Location = System::Drawing::Point(922, 42);
			this->gpbPurchasedItem->Name = L"gpbPurchasedItem";
			this->gpbPurchasedItem->Size = System::Drawing::Size(220, 183);
			this->gpbPurchasedItem->TabIndex = 46;
			this->gpbPurchasedItem->TabStop = false;
			this->gpbPurchasedItem->Text = L"Commander produit";
			// 
			// btnCreatePurchasedItem
			// 
			this->btnCreatePurchasedItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnCreatePurchasedItem->Location = System::Drawing::Point(6, 154);
			this->btnCreatePurchasedItem->Margin = System::Windows::Forms::Padding(3, 3, 3, 2);
			this->btnCreatePurchasedItem->Name = L"btnCreatePurchasedItem";
			this->btnCreatePurchasedItem->Size = System::Drawing::Size(208, 23);
			this->btnCreatePurchasedItem->TabIndex = 47;
			this->btnCreatePurchasedItem->Text = L"Commander produit";
			this->btnCreatePurchasedItem->UseVisualStyleBackColor = true;
			this->btnCreatePurchasedItem->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnCreatePurchasedItemClick);
			// 
			// numQuantityPurchasedItem
			// 
			this->numQuantityPurchasedItem->AllowDrop = true;
			this->numQuantityPurchasedItem->Location = System::Drawing::Point(118, 128);
			this->numQuantityPurchasedItem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				10000, 0, 0, 0
			});
			this->numQuantityPurchasedItem->Name = L"numQuantityPurchasedItem";
			this->numQuantityPurchasedItem->Size = System::Drawing::Size(95, 20);
			this->numQuantityPurchasedItem->TabIndex = 21;
			// 
			// lblQuantityPurchasedItem
			// 
			this->lblQuantityPurchasedItem->AutoSize = true;
			this->lblQuantityPurchasedItem->Location = System::Drawing::Point(5, 130);
			this->lblQuantityPurchasedItem->Name = L"lblQuantityPurchasedItem";
			this->lblQuantityPurchasedItem->Size = System::Drawing::Size(47, 13);
			this->lblQuantityPurchasedItem->TabIndex = 22;
			this->lblQuantityPurchasedItem->Text = L"Quantité";
			// 
			// numIdPurchasedItem
			// 
			this->numIdPurchasedItem->AllowDrop = true;
			this->numIdPurchasedItem->Location = System::Drawing::Point(118, 20);
			this->numIdPurchasedItem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999999, 0, 0, 0
			});
			this->numIdPurchasedItem->Name = L"numIdPurchasedItem";
			this->numIdPurchasedItem->Size = System::Drawing::Size(95, 20);
			this->numIdPurchasedItem->TabIndex = 46;
			// 
			// lblIdPurchasedItem
			// 
			this->lblIdPurchasedItem->AutoSize = true;
			this->lblIdPurchasedItem->Location = System::Drawing::Point(6, 22);
			this->lblIdPurchasedItem->Name = L"lblIdPurchasedItem";
			this->lblIdPurchasedItem->Size = System::Drawing::Size(51, 13);
			this->lblIdPurchasedItem->TabIndex = 45;
			this->lblIdPurchasedItem->Text = L"Id produit";
			// 
			// btnSwitchIdNamePurchasedItem
			// 
			this->btnSwitchIdNamePurchasedItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSwitchIdNamePurchasedItem->Location = System::Drawing::Point(5, 100);
			this->btnSwitchIdNamePurchasedItem->Margin = System::Windows::Forms::Padding(3, 3, 3, 2);
			this->btnSwitchIdNamePurchasedItem->Name = L"btnSwitchIdNamePurchasedItem";
			this->btnSwitchIdNamePurchasedItem->Size = System::Drawing::Size(208, 23);
			this->btnSwitchIdNamePurchasedItem->TabIndex = 45;
			this->btnSwitchIdNamePurchasedItem->Text = L"Utiliser nom ou référence";
			this->btnSwitchIdNamePurchasedItem->UseVisualStyleBackColor = true;
			this->btnSwitchIdNamePurchasedItem->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnSwitchIdNamePurchasedItemClick);
			// 
			// txtReferencePurchasedItem
			// 
			this->txtReferencePurchasedItem->Enabled = false;
			this->txtReferencePurchasedItem->Location = System::Drawing::Point(75, 74);
			this->txtReferencePurchasedItem->MaxLength = 50;
			this->txtReferencePurchasedItem->Name = L"txtReferencePurchasedItem";
			this->txtReferencePurchasedItem->ReadOnly = true;
			this->txtReferencePurchasedItem->Size = System::Drawing::Size(138, 20);
			this->txtReferencePurchasedItem->TabIndex = 2;
			// 
			// lblReferencePurchasedItem
			// 
			this->lblReferencePurchasedItem->Location = System::Drawing::Point(6, 77);
			this->lblReferencePurchasedItem->Name = L"lblReferencePurchasedItem";
			this->lblReferencePurchasedItem->Size = System::Drawing::Size(63, 13);
			this->lblReferencePurchasedItem->TabIndex = 18;
			this->lblReferencePurchasedItem->Text = L"Référence";
			// 
			// lblNamePurchasedItem
			// 
			this->lblNamePurchasedItem->Location = System::Drawing::Point(6, 51);
			this->lblNamePurchasedItem->Name = L"lblNamePurchasedItem";
			this->lblNamePurchasedItem->Size = System::Drawing::Size(29, 13);
			this->lblNamePurchasedItem->TabIndex = 16;
			this->lblNamePurchasedItem->Text = L"Nom";
			// 
			// txtNamePurchasedItem
			// 
			this->txtNamePurchasedItem->Enabled = false;
			this->txtNamePurchasedItem->Location = System::Drawing::Point(75, 48);
			this->txtNamePurchasedItem->MaxLength = 50;
			this->txtNamePurchasedItem->Name = L"txtNamePurchasedItem";
			this->txtNamePurchasedItem->ReadOnly = true;
			this->txtNamePurchasedItem->Size = System::Drawing::Size(138, 20);
			this->txtNamePurchasedItem->TabIndex = 1;
			// 
			// gpbDeletePurchasedItem
			// 
			this->gpbDeletePurchasedItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbDeletePurchasedItem->Controls->Add(this->btnDeletePurchasedItem);
			this->gpbDeletePurchasedItem->Controls->Add(this->numDeletePurchasedItemId);
			this->gpbDeletePurchasedItem->Controls->Add(this->lblDeletePurchasedItemId);
			this->gpbDeletePurchasedItem->Location = System::Drawing::Point(922, 231);
			this->gpbDeletePurchasedItem->Name = L"gpbDeletePurchasedItem";
			this->gpbDeletePurchasedItem->Size = System::Drawing::Size(220, 75);
			this->gpbDeletePurchasedItem->TabIndex = 48;
			this->gpbDeletePurchasedItem->TabStop = false;
			this->gpbDeletePurchasedItem->Text = L"Retirer produit";
			// 
			// btnDeletePurchasedItem
			// 
			this->btnDeletePurchasedItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnDeletePurchasedItem->Location = System::Drawing::Point(5, 46);
			this->btnDeletePurchasedItem->Margin = System::Windows::Forms::Padding(3, 3, 3, 2);
			this->btnDeletePurchasedItem->Name = L"btnDeletePurchasedItem";
			this->btnDeletePurchasedItem->Size = System::Drawing::Size(208, 23);
			this->btnDeletePurchasedItem->TabIndex = 47;
			this->btnDeletePurchasedItem->Text = L"Retirer produit";
			this->btnDeletePurchasedItem->UseVisualStyleBackColor = true;
			this->btnDeletePurchasedItem->Click += gcnew System::EventHandler(this, &PurchaseEditorForm::btnDeletePurchasedItemClick);
			// 
			// numDeletePurchasedItemId
			// 
			this->numDeletePurchasedItemId->AllowDrop = true;
			this->numDeletePurchasedItemId->Location = System::Drawing::Point(118, 20);
			this->numDeletePurchasedItemId->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				99999999, 0, 0, 0
			});
			this->numDeletePurchasedItemId->Name = L"numDeletePurchasedItemId";
			this->numDeletePurchasedItemId->Size = System::Drawing::Size(95, 20);
			this->numDeletePurchasedItemId->TabIndex = 46;
			// 
			// lblDeletePurchasedItemId
			// 
			this->lblDeletePurchasedItemId->AutoSize = true;
			this->lblDeletePurchasedItemId->Location = System::Drawing::Point(6, 22);
			this->lblDeletePurchasedItemId->Name = L"lblDeletePurchasedItemId";
			this->lblDeletePurchasedItemId->Size = System::Drawing::Size(96, 13);
			this->lblDeletePurchasedItemId->TabIndex = 45;
			this->lblDeletePurchasedItemId->Text = L"Id ligne commande";
			// 
			// PurchaseEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 601);
			this->Controls->Add(this->gpbDeletePurchasedItem);
			this->Controls->Add(this->gpbPurchasedItem);
			this->Controls->Add(this->dgvPaymentMethods);
			this->Controls->Add(this->gpbDates);
			this->Controls->Add(this->gpbPayment);
			this->Controls->Add(this->gpbDeliveryAddress);
			this->Controls->Add(this->gpbPrice);
			this->Controls->Add(this->btnDeletePurchase);
			this->Controls->Add(this->btnCreatePurchase);
			this->Controls->Add(this->dgvPurchasedItems);
			this->Controls->Add(this->btnUpdatePurchase);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MinimumSize = System::Drawing::Size(976, 546);
			this->Name = L"PurchaseEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PurchaseEditorForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchasedItems))->EndInit();
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdClient))->EndInit();
			this->gpbPrice->ResumeLayout(false);
			this->gpbPrice->PerformLayout();
			this->gpbDeliveryAddress->ResumeLayout(false);
			this->gpbDeliveryAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDeliveryStreetNumber))->EndInit();
			this->gpbPayment->ResumeLayout(false);
			this->gpbPayment->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPaymentType))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPaymentStreetNumber))->EndInit();
			this->gpbDates->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPaymentMethods))->EndInit();
			this->gpbPurchasedItem->ResumeLayout(false);
			this->gpbPurchasedItem->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantityPurchasedItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdPurchasedItem))->EndInit();
			this->gpbDeletePurchasedItem->ResumeLayout(false);
			this->gpbDeletePurchasedItem->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDeletePurchasedItemId))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:

		System::Void addFloatTextBoxConstraints();

		System::Void btnCreatePurchaseClick(System::Object^ sender, System::EventArgs^ e) {
			int idClient = -1;
			if (useId) {
				idClient = Decimal::ToInt32(this->numIdClient->Value);
			} else {
				System::DateTime^ defaultDateTime = gcnew System::DateTime(1, 1, 1);
				Data::DataSet^ dataSetClient = this->services->searchClients(this->txtName->Text, this->txtFirstName->Text, defaultDateTime, defaultDateTime);
				if (dataSetClient->Tables->Count > 0 && dataSetClient->Tables[0]->Rows->Count == 1) {
					System::Data::DataRow^ row = dataSetClient->Tables[0]->Rows[0];
					idClient = System::Convert::ToInt32(row[0]);
				} else if (dataSetClient->Tables->Count > 0 && dataSetClient->Tables[0]->Rows->Count > 1) {
					MessageBox::Show("Plusieurs clients correspondent à ces critères. Utilisez un identifiant de client.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				} else {
					MessageBox::Show("Le client n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			if (System::DateTime::Compare(this->dtpOrder->Value, *NS_Services::Services::MIN_PURCHASE_DATE) <= 0) {
				MessageBox::Show("La date de commande ne peut pas être antérieure au 01/01/2000.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (System::DateTime::Compare(this->dtpDelivery->Value, System::DateTime::Now) <= 0) {
				MessageBox::Show("La date de livraison ne peut pas être antérieure à aujourd'hui.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (this->txtDeliveryStreet->Text == "" || (int) this->numDeliveryStreetNumber->Value <= 0 || this->txtDeliveryCity->Text == "") {
				MessageBox::Show("Veuillez entrer une adresse de livraison complète.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Data::DataSet^ dataSet = this->services->createPurchase(this->dtpOrder->Value, this->dtpDelivery->Value, 0, 0, 0, 0, idClient, this->txtDeliveryStreet->Text, (int) this->numDeliveryStreetNumber->Value, this->txtDeliveryCity->Text);
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				this->id = System::Convert::ToInt32(row[0]);  // Récupération de l'id de l'item
				this->alreadyExists = true;
				MessageBox::Show("La commande a bien été créée.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				enableButtons();
				fillFieldsFromId();
			} else {
				MessageBox::Show("Une erreur est survenue lors de la création de la commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnUpdatePurchaseClick(System::Object^ sender, System::EventArgs^ e) {
			if (!this->alreadyExists) {
				MessageBox::Show("Ouvrez l'éditeur de commandes en mode création pour modifier une commandes", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la modification si la commande n'existe pas
			}

			if (this->numIdClient->Value <= 0) {
				MessageBox::Show("L'identifiant du client doit être supérieur à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (System::DateTime::Compare(this->dtpOrder->Value, *NS_Services::Services::MIN_PURCHASE_DATE) <= 0) {
				MessageBox::Show("La date de commande ne peut pas être antérieure au 01/01/2000.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (System::DateTime::Compare(this->dtpDelivery->Value, System::DateTime::Now) < 0) {
				MessageBox::Show("La date de livraison ne peut pas être antérieure à aujourd'hui.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			float discountAmount = -1;
			try {
				discountAmount = System::Convert::ToSingle(this->txtFloatDiscountAmount->Text);
			} catch (System::FormatException^) {
				MessageBox::Show("Le montant de la remise doit être un nombre.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (discountAmount < 0) {
				MessageBox::Show("Le montant de la remise doit être supérieur ou égal à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			if (this->txtDeliveryStreet->Text == "" || (int) this->numDeliveryStreetNumber->Value <= 0 || this->txtDeliveryCity->Text == "") {
				MessageBox::Show("Veuillez entrer une adresse de livraison complète.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Data::DataSet^ dataSet = this->services->updatePurchase(this->id, this->dtpOrder->Value, this->dtpDelivery->Value, discountAmount, -1, -1, -1, -1, this->txtDeliveryStreet->Text, System::Convert::ToInt32(this->numDeliveryStreetNumber->Value), this->txtDeliveryStreet->Text);
			if (dataSet != nullptr) {
				this->services->updatePurchasePrices(this->id);
				MessageBox::Show("La commande a bien été modifiée.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fillFieldsFromId();
			} else {
				MessageBox::Show("Une erreur est survenue lors de la modification de la commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnDeletePurchaseClick(System::Object^ sender, System::EventArgs^ e) {
			if (!this->alreadyExists) {
				MessageBox::Show("Ouvrez l'éditeur de commandes en mode création pour supprimer une commandes", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la suppression si la commande n'existe pas
			}

			bool deleted = this->services->deletePurchase(this->id);
			if (deleted) {
				MessageBox::Show("La commande a bien été supprimée.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			} else {
				MessageBox::Show("Une erreur est survenue lors de la suppression de la commande. Une commande contenant des produits ou des moyens de paiement ne peut pas être suprimée.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnCreatePurchasedItemClick(System::Object^ sender, System::EventArgs^ e) {
			int idItem = -1;
			if (useIdPurchasedItem) {
				idItem = Decimal::ToInt32(this->numIdPurchasedItem->Value);
			} else {
				Data::DataSet^ dataSetClient = this->services->searchItems(this->txtNamePurchasedItem->Text, this->txtReferencePurchasedItem->Text);
				if (dataSetClient->Tables->Count > 0 && dataSetClient->Tables[0]->Rows->Count == 1) {
					System::Data::DataRow^ row = dataSetClient->Tables[0]->Rows[0];
					idItem = System::Convert::ToInt32(row[0]);
				} else if (dataSetClient->Tables->Count > 0 && dataSetClient->Tables[0]->Rows->Count > 1) {
					MessageBox::Show("Plusieurs produits correspondent à ces critères. Utilisez un identifiant de produit.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				} else {
					MessageBox::Show("Le produit n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			if (this->numQuantityPurchasedItem->Value <= 0) {
				MessageBox::Show("La quantité achetée doit être supérieure à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Data::DataSet^ dataSet = this->services->createPurchasedItem((int) this->numQuantityPurchasedItem->Value, this->id, idItem);
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				this->services->updatePurchasePrices(this->id);
				MessageBox::Show("La commande a bien été modifiée.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fillFieldsFromId();
				this->txtNamePurchasedItem->Text = "";
				this->txtReferencePurchasedItem->Text = "";
				this->numIdPurchasedItem->Value = 0;
				this->numQuantityPurchasedItem->Value = 0;
			} else {
				MessageBox::Show("Une erreur est survenue lors de la modification de la commande. Le produit est peut-être hors stock", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnDeletePurchasedItemClick(System::Object^ sender, System::EventArgs^ e) {
			if (this->numDeletePurchasedItemId->Value <= 0) {
				MessageBox::Show("L'identifiant de la ligne de commande doit être supérieur à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			bool deleted = this->services->deletePurchasedItem((int) this->numDeletePurchasedItemId->Value);
			if (deleted) {
				this->services->updatePurchasePrices(this->id);
				MessageBox::Show("La ligne de commande a bien été supprimée.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fillFieldsFromId();
				this->numDeletePurchasedItemId->Value = 0;
			} else {
				MessageBox::Show("Une erreur est survenue lors de la suppression de la ligne de commande.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnCreatePaymentClick(System::Object^ sender, System::EventArgs^ e) {
			int idItem = -1;
			if (useIdPurchasedItem) {
				idItem = Decimal::ToInt32(this->numIdPurchasedItem->Value);
			} else {
				Data::DataSet^ dataSetClient = this->services->searchItems(this->txtNamePurchasedItem->Text, this->txtReferencePurchasedItem->Text);
				if (dataSetClient->Tables->Count > 0 && dataSetClient->Tables[0]->Rows->Count == 1) {
					System::Data::DataRow^ row = dataSetClient->Tables[0]->Rows[0];
					idItem = System::Convert::ToInt32(row[0]);
				} else if (dataSetClient->Tables->Count > 0 && dataSetClient->Tables[0]->Rows->Count > 1) {
					MessageBox::Show("Plusieurs produits correspondent à ces critères. Utilisez un identifiant de produit.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				} else {
					MessageBox::Show("Le produit n'existe pas.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

			if (this->numQuantityPurchasedItem->Value <= 0) {
				MessageBox::Show("La quantité achetée doit être supérieure à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Data::DataSet^ dataSet = this->services->createPurchasedItem((int) this->numQuantityPurchasedItem->Value, this->id, idItem);
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				MessageBox::Show("La commande a bien été modifiée.", "Succès", MessageBoxButtons::OK, MessageBoxIcon::Information);
				fillFieldsFromId();
				this->txtNamePurchasedItem->Text = "";
				this->txtReferencePurchasedItem->Text = "";
				this->numIdPurchasedItem->Value = 0;
				this->numQuantityPurchasedItem->Value = 0;
			} else {
				MessageBox::Show("Une erreur est survenue lors de la modification de la commande. Le produit est peut-être hors stock", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnSwitchIdNameClick(System::Object^ sender, System::EventArgs^ e) {
			useId = !useId;
			enableButtons();
		}

		System::Void btnSwitchIdNamePurchasedItemClick(System::Object^ sender, System::EventArgs^ e) {
			useIdPurchasedItem = !useIdPurchasedItem;
			enableButtons();
		}

		// Désactive les boutons de modification et de suppression si le produit n'existe pas encore
		System::Void enableButtons() {
			if (alreadyExists) {  // Si le produit existe déjà
				this->btnCreatePurchase->Enabled = false;
				this->btnUpdatePurchase->Enabled = true;
				this->btnDeletePurchase->Enabled = true;
				this->btnSwitchIdName->Enabled = false;
				this->numIdClient->ReadOnly = true;
				this->numIdClient->Enabled = false;
				this->txtName->ReadOnly = true;
				this->txtName->Enabled = false;
				this->txtFirstName->ReadOnly = true;
				this->txtFirstName->Enabled = false;
				this->txtFloatDiscountAmount->Enabled = true;
				this->txtFloatDiscountAmount->ReadOnly = false;
				this->gpbPurchasedItem->Visible = true;
				this->gpbDeletePurchasedItem->Visible = true;
				this->gpbPayment->Visible = true;

				if (useIdPurchasedItem) {  // Si on utilise l'identifiant
					this->numIdPurchasedItem->ReadOnly = false;
					this->numIdPurchasedItem->Enabled = true;
					this->txtNamePurchasedItem->ReadOnly = true;
					this->txtNamePurchasedItem->Enabled = false;
					this->txtNamePurchasedItem->Text = "";
					this->txtReferencePurchasedItem->ReadOnly = true;
					this->txtReferencePurchasedItem->Enabled = false;
					this->txtReferencePurchasedItem->Text = "";
					this->btnSwitchIdNamePurchasedItem->Text = "Utiliser nom ou référence";
				} else {  // Si on utilise le nom ou la référence
					this->numIdPurchasedItem->ReadOnly = true;
					this->numIdPurchasedItem->Enabled = false;
					this->numIdPurchasedItem->Value = 0;
					this->txtNamePurchasedItem->ReadOnly = false;
					this->txtNamePurchasedItem->Enabled = true;
					this->txtReferencePurchasedItem->ReadOnly = false;
					this->txtReferencePurchasedItem->Enabled = true;
					this->btnSwitchIdNamePurchasedItem->Text = "Utiliser identifiant";
				}
			} else {  // Si le produit n'existe pas encore
				this->btnCreatePurchase->Enabled = true;
				this->btnUpdatePurchase->Enabled = false;
				this->btnDeletePurchase->Enabled = false;
				this->txtFloatDiscountAmount->Enabled = false;
				this->txtFloatDiscountAmount->ReadOnly = true;
				this->gpbPurchasedItem->Visible = false;
				this->gpbDeletePurchasedItem->Visible = false;
				this->gpbPayment->Visible = false;

				if (useId) {  // Si on utilise l'identifiant
					this->numIdClient->ReadOnly = false;
					this->numIdClient->Enabled = true;
					this->txtName->ReadOnly = true;
					this->txtName->Enabled = false;
					this->txtName->Text = "";
					this->txtFirstName->ReadOnly = true;
					this->txtFirstName->Enabled = false;
					this->txtFirstName->Text = "";
					this->btnSwitchIdName->Text = "Utiliser nom et prénom";
				} else {  // Si on utilise le nom et le prénom
					this->numIdClient->ReadOnly = true;
					this->numIdClient->Enabled = false;
					this->numIdClient->Value = 0;
					this->txtName->ReadOnly = false;
					this->txtName->Enabled = true;
					this->txtFirstName->ReadOnly = false;
					this->txtFirstName->Enabled = true;
					this->btnSwitchIdName->Text = "Utiliser identifiant";
				}
			}
		}

		System::Void fillFieldsFromId() {
			if (alreadyExists && this->id >= 0) {
				System::Data::DataSet^ dataSetPurchase = this->services->getPurchaseById(this->id);
				System::Data::DataSet^ dataSetPurchasedItems = this->services->searchPurchasedItems(this->id, -1);
				System::Data::DataSet^ dataSetPaymentMethods = this->services->searchPaymentMethods(-1, this->id, -1);
				fillFieldsFromDataSet(dataSetPurchase, dataSetPurchasedItems, dataSetPaymentMethods);
			}
		}

		System::Void fillFieldsFromDataSet(System::Data::DataSet^ dataSetPurchase, System::Data::DataSet^ dataSetPurchasedItems, System::Data::DataSet^ dataSetPaymentMethods) {
			if (dataSetPurchase->Tables->Count > 0 && dataSetPurchase->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSetPurchase->Tables[0]->Rows[0];
				// 0,            1,          2,       3,            4,              5,              6,                7,               8,           9,        
				// p.idPurchase, p.idClient, cl.name, cl.firstName, p.purchaseDate, p.deliveryDate, p.discountAmount, p.dutyFreePrice, p.vatAmount, p.ttcPrice
				// 10,                  11,           12,             13
				// p.idDeliveryAddress, a.streetName, a.streetNumber, ci.cityName
				this->numIdClient->Value = System::Convert::ToInt32(row[1]);
				this->txtName->Text = System::Convert::ToString(row[2]);
				this->txtFirstName->Text = System::Convert::ToString(row[3]);
				this->dtpOrder->Value = System::Convert::ToDateTime(row[4]);
				this->dtpDelivery->Value = System::Convert::ToDateTime(row[5]);
				this->txtFloatDiscountAmount->Text = System::Convert::ToString(row[6]);
				this->txtFloatDutyFreePrice->Text = System::Convert::ToString(row[7]);
				this->txtFloatVatAmount->Text = System::Convert::ToString(row[8]);
				this->txtFloatTtcPrice->Text = System::Convert::ToString(row[9]);
				this->txtDeliveryStreet->Text = System::Convert::ToString(row[11]);
				this->numDeliveryStreetNumber->Value = System::Convert::ToInt32(row[12]);
				this->txtDeliveryCity->Text = System::Convert::ToString(row[13]);
			}

			if (dataSetPurchasedItems->Tables->Count > 0 && dataSetPurchasedItems->Tables[0]->Rows->Count > 0) {
				this->dgvPurchasedItems->DataSource = dataSetPurchasedItems->Tables[0];
			}

			if (dataSetPaymentMethods->Tables->Count > 0 && dataSetPaymentMethods->Tables[0]->Rows->Count > 0) {
				this->dgvPaymentMethods->DataSource = dataSetPaymentMethods->Tables[0];
			}
		}
	};
}
