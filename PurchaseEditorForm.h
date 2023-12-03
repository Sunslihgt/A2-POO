#pragma once

namespace IHM {

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
		PurchaseEditorForm(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ btnDeletePurchase;
	private: System::Windows::Forms::Button^ btnCreatePurchase;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblOrder;
	private: System::Windows::Forms::DateTimePicker^ dtpOrder;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblPayment;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::DateTimePicker^ dtpPayment;
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
	private: System::Windows::Forms::GroupBox^ gpbPaymentAddress;
	private: System::Windows::Forms::Label^ lblPaymentCity;
	private: System::Windows::Forms::TextBox^ txtPaymentCity;
	private: System::Windows::Forms::TextBox^ txtPaymentStreet;
	private: System::Windows::Forms::Label^ lblPaymentStreet;
	private: System::Windows::Forms::NumericUpDown^ numPaymentStreetNumber;
	private: System::Windows::Forms::Label^ lblPaymentStreetNumber;
	private: System::Windows::Forms::GroupBox^ gpbPayment;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;

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
			this->lblPayment = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->dtpPayment = (gcnew System::Windows::Forms::DateTimePicker());
			this->dgvPurchasedItems = (gcnew System::Windows::Forms::DataGridView());
			this->btnUpdatePurchase = (gcnew System::Windows::Forms::Button());
			this->gpbInfos = (gcnew System::Windows::Forms::GroupBox());
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
			this->gpbPaymentAddress = (gcnew System::Windows::Forms::GroupBox());
			this->lblPaymentCity = (gcnew System::Windows::Forms::Label());
			this->txtPaymentCity = (gcnew System::Windows::Forms::TextBox());
			this->txtPaymentStreet = (gcnew System::Windows::Forms::TextBox());
			this->lblPaymentStreet = (gcnew System::Windows::Forms::Label());
			this->numPaymentStreetNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblPaymentStreetNumber = (gcnew System::Windows::Forms::Label());
			this->gpbPayment = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchasedItems))->BeginInit();
			this->gpbInfos->SuspendLayout();
			this->gpbPrice->SuspendLayout();
			this->gpbDeliveryAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDeliveryStreetNumber))->BeginInit();
			this->gpbPaymentAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPaymentStreetNumber))->BeginInit();
			this->gpbPayment->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnDeletePurchase
			// 
			this->btnDeletePurchase->Location = System::Drawing::Point(40, 392);
			this->btnDeletePurchase->Name = L"btnDeletePurchase";
			this->btnDeletePurchase->Size = System::Drawing::Size(220, 23);
			this->btnDeletePurchase->TabIndex = 8;
			this->btnDeletePurchase->Text = L"Supprimer";
			this->btnDeletePurchase->UseVisualStyleBackColor = true;
			// 
			// btnCreatePurchase
			// 
			this->btnCreatePurchase->Location = System::Drawing::Point(40, 334);
			this->btnCreatePurchase->Name = L"btnCreatePurchase";
			this->btnCreatePurchase->Size = System::Drawing::Size(220, 23);
			this->btnCreatePurchase->TabIndex = 6;
			this->btnCreatePurchase->Text = L"Créer";
			this->btnCreatePurchase->UseVisualStyleBackColor = true;
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(55, 45);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->ReadOnly = true;
			this->txtFirstName->Size = System::Drawing::Size(159, 20);
			this->txtFirstName->TabIndex = 2;
			// 
			// lblFirstName
			// 
			this->lblFirstName->Location = System::Drawing::Point(6, 48);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(43, 13);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"Prénom";
			// 
			// lblOrder
			// 
			this->lblOrder->Location = System::Drawing::Point(6, 74);
			this->lblOrder->Name = L"lblOrder";
			this->lblOrder->Size = System::Drawing::Size(106, 13);
			this->lblOrder->TabIndex = 20;
			this->lblOrder->Text = L"Date de commande";
			// 
			// dtpOrder
			// 
			this->dtpOrder->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpOrder->Location = System::Drawing::Point(118, 71);
			this->dtpOrder->Name = L"dtpOrder";
			this->dtpOrder->Size = System::Drawing::Size(96, 20);
			this->dtpOrder->TabIndex = 3;
			this->dtpOrder->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblName
			// 
			this->lblName->Location = System::Drawing::Point(6, 22);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(29, 13);
			this->lblName->TabIndex = 16;
			this->lblName->Text = L"Nom";
			// 
			// lblPayment
			// 
			this->lblPayment->Location = System::Drawing::Point(6, 100);
			this->lblPayment->Name = L"lblPayment";
			this->lblPayment->Size = System::Drawing::Size(106, 13);
			this->lblPayment->TabIndex = 22;
			this->lblPayment->Text = L"Date de paiement";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(55, 19);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->ReadOnly = true;
			this->txtName->Size = System::Drawing::Size(159, 20);
			this->txtName->TabIndex = 1;
			// 
			// dtpPayment
			// 
			this->dtpPayment->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpPayment->Location = System::Drawing::Point(118, 97);
			this->dtpPayment->Name = L"dtpPayment";
			this->dtpPayment->Size = System::Drawing::Size(96, 20);
			this->dtpPayment->TabIndex = 4;
			this->dtpPayment->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// dgvPurchasedItems
			// 
			this->dgvPurchasedItems->AllowUserToAddRows = false;
			this->dgvPurchasedItems->AllowUserToDeleteRows = false;
			this->dgvPurchasedItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvPurchasedItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPurchasedItems->Location = System::Drawing::Point(492, 48);
			this->dgvPurchasedItems->Name = L"dgvPurchasedItems";
			this->dgvPurchasedItems->ReadOnly = true;
			this->dgvPurchasedItems->Size = System::Drawing::Size(425, 430);
			this->dgvPurchasedItems->TabIndex = 39;
			// 
			// btnUpdatePurchase
			// 
			this->btnUpdatePurchase->Location = System::Drawing::Point(40, 363);
			this->btnUpdatePurchase->Name = L"btnUpdatePurchase";
			this->btnUpdatePurchase->Size = System::Drawing::Size(220, 23);
			this->btnUpdatePurchase->TabIndex = 7;
			this->btnUpdatePurchase->Text = L"Modifier";
			this->btnUpdatePurchase->UseVisualStyleBackColor = true;
			// 
			// gpbInfos
			// 
			this->gpbInfos->Controls->Add(this->lblDelivery);
			this->gpbInfos->Controls->Add(this->dtpDelivery);
			this->gpbInfos->Controls->Add(this->txtFirstName);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblOrder);
			this->gpbInfos->Controls->Add(this->dtpOrder);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->lblPayment);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Controls->Add(this->dtpPayment);
			this->gpbInfos->Location = System::Drawing::Point(40, 48);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 150);
			this->gpbInfos->TabIndex = 35;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Informations personnelles";
			// 
			// lblDelivery
			// 
			this->lblDelivery->Location = System::Drawing::Point(6, 126);
			this->lblDelivery->Name = L"lblDelivery";
			this->lblDelivery->Size = System::Drawing::Size(106, 13);
			this->lblDelivery->TabIndex = 24;
			this->lblDelivery->Text = L"Date de livraison";
			// 
			// dtpDelivery
			// 
			this->dtpDelivery->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDelivery->Location = System::Drawing::Point(118, 123);
			this->dtpDelivery->Name = L"dtpDelivery";
			this->dtpDelivery->Size = System::Drawing::Size(96, 20);
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
			this->lblTitle->Size = System::Drawing::Size(933, 23);
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
			this->gpbPrice->Location = System::Drawing::Point(40, 204);
			this->gpbPrice->Name = L"gpbPrice";
			this->gpbPrice->Size = System::Drawing::Size(220, 124);
			this->gpbPrice->TabIndex = 41;
			this->gpbPrice->TabStop = false;
			this->gpbPrice->Text = L"Prix";
			// 
			// txtFloatTtcPrice
			// 
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
			this->lblFloatTtcPrice->Size = System::Drawing::Size(48, 13);
			this->lblFloatTtcPrice->TabIndex = 25;
			this->lblFloatTtcPrice->Text = L"Prix TTC";
			// 
			// textFloatDiscountAmount
			// 
			this->txtFloatDiscountAmount->Location = System::Drawing::Point(112, 19);
			this->txtFloatDiscountAmount->MaxLength = 10;
			this->txtFloatDiscountAmount->Name = L"textFloatDiscountAmount";
			this->txtFloatDiscountAmount->Size = System::Drawing::Size(102, 20);
			this->txtFloatDiscountAmount->TabIndex = 22;
			this->txtFloatDiscountAmount->Text = L"0";
			// 
			// txtFloatDutyFreePrice
			// 
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
			this->lblFloatVatAmount->Size = System::Drawing::Size(28, 13);
			this->lblFloatVatAmount->TabIndex = 17;
			this->lblFloatVatAmount->Text = L"TVA";
			// 
			// txtFloatVatAmount
			// 
			this->txtFloatVatAmount->Location = System::Drawing::Point(112, 71);
			this->txtFloatVatAmount->MaxLength = 10;
			this->txtFloatVatAmount->Name = L"txtFloatVatAmount";
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
			this->lblFloatDutyFreePrice->Size = System::Drawing::Size(75, 13);
			this->lblFloatDutyFreePrice->TabIndex = 20;
			this->lblFloatDutyFreePrice->Text = L"Prix hors taxes";
			// 
			// lblFloatDiscountAmount
			// 
			this->lblFloatDiscountAmount->AutoSize = true;
			this->lblFloatDiscountAmount->Location = System::Drawing::Point(6, 22);
			this->lblFloatDiscountAmount->Name = L"lblFloatDiscountAmount";
			this->lblFloatDiscountAmount->Size = System::Drawing::Size(61, 13);
			this->lblFloatDiscountAmount->TabIndex = 18;
			this->lblFloatDiscountAmount->Text = L"Réductions";
			// 
			// gpbDeliveryAddress
			// 
			this->gpbDeliveryAddress->Controls->Add(this->lblDeliveryCity);
			this->gpbDeliveryAddress->Controls->Add(this->txtDeliveryCity);
			this->gpbDeliveryAddress->Controls->Add(this->txtDeliveryStreet);
			this->gpbDeliveryAddress->Controls->Add(this->lblDeliveryStreet);
			this->gpbDeliveryAddress->Controls->Add(this->numDeliveryStreetNumber);
			this->gpbDeliveryAddress->Controls->Add(this->lblDeliveryStreetNumber);
			this->gpbDeliveryAddress->Location = System::Drawing::Point(266, 158);
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
			// gpbPaymentAddress
			// 
			this->gpbPaymentAddress->Controls->Add(this->lblPaymentCity);
			this->gpbPaymentAddress->Controls->Add(this->txtPaymentCity);
			this->gpbPaymentAddress->Controls->Add(this->txtPaymentStreet);
			this->gpbPaymentAddress->Controls->Add(this->lblPaymentStreet);
			this->gpbPaymentAddress->Controls->Add(this->numPaymentStreetNumber);
			this->gpbPaymentAddress->Controls->Add(this->lblPaymentStreetNumber);
			this->gpbPaymentAddress->Location = System::Drawing::Point(266, 48);
			this->gpbPaymentAddress->Name = L"gpbPaymentAddress";
			this->gpbPaymentAddress->Size = System::Drawing::Size(220, 104);
			this->gpbPaymentAddress->TabIndex = 43;
			this->gpbPaymentAddress->TabStop = false;
			this->gpbPaymentAddress->Text = L"Adresse de paiement";
			// 
			// lblPaymentCity
			// 
			this->lblPaymentCity->AutoSize = true;
			this->lblPaymentCity->Location = System::Drawing::Point(5, 77);
			this->lblPaymentCity->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblPaymentCity->Name = L"lblPaymentCity";
			this->lblPaymentCity->Size = System::Drawing::Size(26, 13);
			this->lblPaymentCity->TabIndex = 17;
			this->lblPaymentCity->Text = L"Ville";
			// 
			// txtPaymentCity
			// 
			this->txtPaymentCity->Location = System::Drawing::Point(54, 74);
			this->txtPaymentCity->MaxLength = 50;
			this->txtPaymentCity->Name = L"txtPaymentCity";
			this->txtPaymentCity->Size = System::Drawing::Size(160, 20);
			this->txtPaymentCity->TabIndex = 15;
			// 
			// txtPaymentStreet
			// 
			this->txtPaymentStreet->Location = System::Drawing::Point(54, 48);
			this->txtPaymentStreet->MaxLength = 50;
			this->txtPaymentStreet->Name = L"txtPaymentStreet";
			this->txtPaymentStreet->Size = System::Drawing::Size(160, 20);
			this->txtPaymentStreet->TabIndex = 19;
			// 
			// lblPaymentStreet
			// 
			this->lblPaymentStreet->AutoSize = true;
			this->lblPaymentStreet->Location = System::Drawing::Point(5, 51);
			this->lblPaymentStreet->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblPaymentStreet->Name = L"lblPaymentStreet";
			this->lblPaymentStreet->Size = System::Drawing::Size(27, 13);
			this->lblPaymentStreet->TabIndex = 20;
			this->lblPaymentStreet->Text = L"Rue";
			// 
			// numPaymentStreetNumber
			// 
			this->numPaymentStreetNumber->AllowDrop = true;
			this->numPaymentStreetNumber->Location = System::Drawing::Point(118, 20);
			this->numPaymentStreetNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
			this->numPaymentStreetNumber->Name = L"numPaymentStreetNumber";
			this->numPaymentStreetNumber->Size = System::Drawing::Size(96, 20);
			this->numPaymentStreetNumber->TabIndex = 16;
			// 
			// lblPaymentStreetNumber
			// 
			this->lblPaymentStreetNumber->AutoSize = true;
			this->lblPaymentStreetNumber->Location = System::Drawing::Point(6, 22);
			this->lblPaymentStreetNumber->Name = L"lblPaymentStreetNumber";
			this->lblPaymentStreetNumber->Size = System::Drawing::Size(42, 13);
			this->lblPaymentStreetNumber->TabIndex = 18;
			this->lblPaymentStreetNumber->Text = L"N° Rue";
			// 
			// gpbPayment
			// 
			this->gpbPayment->Controls->Add(this->textBox6);
			this->gpbPayment->Controls->Add(this->label7);
			this->gpbPayment->Controls->Add(this->textBox5);
			this->gpbPayment->Controls->Add(this->textBox3);
			this->gpbPayment->Controls->Add(this->label6);
			this->gpbPayment->Controls->Add(this->label4);
			this->gpbPayment->Controls->Add(this->label5);
			this->gpbPayment->Controls->Add(this->textBox4);
			this->gpbPayment->Controls->Add(this->label1);
			this->gpbPayment->Controls->Add(this->textBox1);
			this->gpbPayment->Controls->Add(this->textBox2);
			this->gpbPayment->Controls->Add(this->label2);
			this->gpbPayment->Controls->Add(this->numericUpDown1);
			this->gpbPayment->Controls->Add(this->label3);
			this->gpbPayment->Location = System::Drawing::Point(266, 268);
			this->gpbPayment->Name = L"gpbPayment";
			this->gpbPayment->Size = System::Drawing::Size(220, 210);
			this->gpbPayment->TabIndex = 43;
			this->gpbPayment->TabStop = false;
			this->gpbPayment->Text = L"Paiement";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(98, 179);
			this->textBox6->MaxLength = 10;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(116, 20);
			this->textBox6->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Type de paiment";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(118, 153);
			this->textBox5->MaxLength = 10;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(96, 20);
			this->textBox5->TabIndex = 28;
			this->textBox5->Text = L"0,00";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(61, 45);
			this->textBox3->MaxLength = 50;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Montant";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(6, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Prénom";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(6, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Nom";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(61, 19);
			this->textBox4->MaxLength = 50;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(153, 20);
			this->textBox4->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 130);
			this->label1->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Ville";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(54, 127);
			this->textBox1->MaxLength = 50;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 20);
			this->textBox1->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(54, 101);
			this->textBox2->MaxLength = 50;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(160, 20);
			this->textBox2->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 104);
			this->label2->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Rue";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->AllowDrop = true;
			this->numericUpDown1->Location = System::Drawing::Point(118, 71);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(96, 20);
			this->numericUpDown1->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"N° Rue";
			// 
			// PurchaseEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(957, 485);
			this->Controls->Add(this->gpbPayment);
			this->Controls->Add(this->gpbPaymentAddress);
			this->Controls->Add(this->gpbDeliveryAddress);
			this->Controls->Add(this->gpbPrice);
			this->Controls->Add(this->btnDeletePurchase);
			this->Controls->Add(this->btnCreatePurchase);
			this->Controls->Add(this->dgvPurchasedItems);
			this->Controls->Add(this->btnUpdatePurchase);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MinimumSize = System::Drawing::Size(973, 394);
			this->Name = L"PurchaseEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PurchaseEditorForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchasedItems))->EndInit();
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			this->gpbPrice->ResumeLayout(false);
			this->gpbPrice->PerformLayout();
			this->gpbDeliveryAddress->ResumeLayout(false);
			this->gpbDeliveryAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDeliveryStreetNumber))->EndInit();
			this->gpbPaymentAddress->ResumeLayout(false);
			this->gpbPaymentAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPaymentStreetNumber))->EndInit();
			this->gpbPayment->ResumeLayout(false);
			this->gpbPayment->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

			addFloatTextBoxConstraints();
		}
#pragma endregion
	private:

		System::Void addFloatTextBoxConstraints();
	//private: System::Void a(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {}
};
}
