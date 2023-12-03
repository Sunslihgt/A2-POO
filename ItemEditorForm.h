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
	/// Summary for ItemEditorForm
	/// </summary>
	public ref class ItemEditorForm : public System::Windows::Forms::Form {
	public:
		ItemEditorForm(Services::Services^ services, bool alreadyExists) {
			this->services = services;
			this->alreadyExists = alreadyExists;

			InitializeComponent();

			if (alreadyExists) {
				this->btnUpdateItem->Enabled = false;
				this->btnDeleteItem->Enabled = false;
			} else {
				this->btnCreateItem->Enabled = false;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ItemEditorForm() {
			if (components) {
				delete components;
			}
		}

	private:
		Services::Services^ services = gcnew Services::Services();
		bool alreadyExists;

	private: System::Windows::Forms::Button^ btnDeleteItem;
	private: System::Windows::Forms::Button^ btnUpdateItem;
	private: System::Windows::Forms::Button^ btnCreateItem;
	private: System::Windows::Forms::GroupBox^ gpbQuantity;
	private: System::Windows::Forms::Label^ lblAvailableQuantity;
	private: System::Windows::Forms::NumericUpDown^ numQuantity;
	private: System::Windows::Forms::Label^ lblQauntity;
	private: System::Windows::Forms::GroupBox^ gpbInfos;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblStart;
	private: System::Windows::Forms::DateTimePicker^ dtpStart;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::NumericUpDown^ numAvailableQuantity;
	private: System::Windows::Forms::NumericUpDown^ numQuantityThreshold;
	private: System::Windows::Forms::Label^ lblQuantityThreshold;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtFloatSupplierPrice;
	private: System::Windows::Forms::TextBox^ txtFloatUnitPrice;
	private: System::Windows::Forms::Label^ lblVatRate;
	private: System::Windows::Forms::TextBox^ txtFloatVatRate;
	private: System::Windows::Forms::Label^ lblFloatUnitPrice;
	private: System::Windows::Forms::Label^ lblFloatSupplierPrice;

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
			this->btnDeleteItem = (gcnew System::Windows::Forms::Button());
			this->btnUpdateItem = (gcnew System::Windows::Forms::Button());
			this->btnCreateItem = (gcnew System::Windows::Forms::Button());
			this->gpbQuantity = (gcnew System::Windows::Forms::GroupBox());
			this->numQuantityThreshold = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblQuantityThreshold = (gcnew System::Windows::Forms::Label());
			this->numAvailableQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblAvailableQuantity = (gcnew System::Windows::Forms::Label());
			this->numQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblQauntity = (gcnew System::Windows::Forms::Label());
			this->gpbInfos = (gcnew System::Windows::Forms::GroupBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblStart = (gcnew System::Windows::Forms::Label());
			this->dtpStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtFloatSupplierPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtFloatUnitPrice = (gcnew System::Windows::Forms::TextBox());
			this->lblVatRate = (gcnew System::Windows::Forms::Label());
			this->txtFloatVatRate = (gcnew System::Windows::Forms::TextBox());
			this->lblFloatUnitPrice = (gcnew System::Windows::Forms::Label());
			this->lblFloatSupplierPrice = (gcnew System::Windows::Forms::Label());
			this->gpbQuantity->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantityThreshold))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAvailableQuantity))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->BeginInit();
			this->gpbInfos->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnDeleteItem
			// 
			this->btnDeleteItem->Location = System::Drawing::Point(75, 425);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(220, 23);
			this->btnDeleteItem->TabIndex = 32;
			this->btnDeleteItem->Text = L"Supprimer";
			this->btnDeleteItem->UseVisualStyleBackColor = true;
			// 
			// btnUpdateItem
			// 
			this->btnUpdateItem->Location = System::Drawing::Point(75, 396);
			this->btnUpdateItem->Name = L"btnUpdateItem";
			this->btnUpdateItem->Size = System::Drawing::Size(220, 23);
			this->btnUpdateItem->TabIndex = 31;
			this->btnUpdateItem->Text = L"Modifier";
			this->btnUpdateItem->UseVisualStyleBackColor = true;
			// 
			// btnCreateItem
			// 
			this->btnCreateItem->Location = System::Drawing::Point(75, 367);
			this->btnCreateItem->Name = L"btnCreateItem";
			this->btnCreateItem->Size = System::Drawing::Size(220, 23);
			this->btnCreateItem->TabIndex = 30;
			this->btnCreateItem->Text = L"Créer";
			this->btnCreateItem->UseVisualStyleBackColor = true;
			// 
			// gpbQuantity
			// 
			this->gpbQuantity->Controls->Add(this->numQuantityThreshold);
			this->gpbQuantity->Controls->Add(this->lblQuantityThreshold);
			this->gpbQuantity->Controls->Add(this->numAvailableQuantity);
			this->gpbQuantity->Controls->Add(this->lblAvailableQuantity);
			this->gpbQuantity->Controls->Add(this->numQuantity);
			this->gpbQuantity->Controls->Add(this->lblQauntity);
			this->gpbQuantity->Location = System::Drawing::Point(75, 152);
			this->gpbQuantity->Name = L"gpbQuantity";
			this->gpbQuantity->Size = System::Drawing::Size(220, 104);
			this->gpbQuantity->TabIndex = 29;
			this->gpbQuantity->TabStop = false;
			this->gpbQuantity->Text = L"Quantité";
			// 
			// numQuantityThreshold
			// 
			this->numQuantityThreshold->AllowDrop = true;
			this->numQuantityThreshold->Location = System::Drawing::Point(118, 69);
			this->numQuantityThreshold->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999999, 0, 0, 0
			});
			this->numQuantityThreshold->Name = L"numQuantityThreshold";
			this->numQuantityThreshold->Size = System::Drawing::Size(96, 20);
			this->numQuantityThreshold->TabIndex = 23;
			// 
			// lblQuantityThreshold
			// 
			this->lblQuantityThreshold->AutoSize = true;
			this->lblQuantityThreshold->Location = System::Drawing::Point(6, 71);
			this->lblQuantityThreshold->Name = L"lblQuantityThreshold";
			this->lblQuantityThreshold->Size = System::Drawing::Size(77, 13);
			this->lblQuantityThreshold->TabIndex = 22;
			this->lblQuantityThreshold->Text = L"Seuil stockage";
			// 
			// numAvailableQuantity
			// 
			this->numAvailableQuantity->AllowDrop = true;
			this->numAvailableQuantity->Location = System::Drawing::Point(118, 43);
			this->numAvailableQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999999, 0, 0, 0
			});
			this->numAvailableQuantity->Name = L"numAvailableQuantity";
			this->numAvailableQuantity->Size = System::Drawing::Size(96, 20);
			this->numAvailableQuantity->TabIndex = 21;
			// 
			// lblAvailableQuantity
			// 
			this->lblAvailableQuantity->AutoSize = true;
			this->lblAvailableQuantity->Location = System::Drawing::Point(6, 45);
			this->lblAvailableQuantity->Name = L"lblAvailableQuantity";
			this->lblAvailableQuantity->Size = System::Drawing::Size(97, 13);
			this->lblAvailableQuantity->TabIndex = 20;
			this->lblAvailableQuantity->Text = L"Quantité disponible";
			// 
			// numQuantity
			// 
			this->numQuantity->AllowDrop = true;
			this->numQuantity->Location = System::Drawing::Point(118, 17);
			this->numQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999999, 0, 0, 0
			});
			this->numQuantity->Name = L"numQuantity";
			this->numQuantity->Size = System::Drawing::Size(96, 20);
			this->numQuantity->TabIndex = 16;
			// 
			// lblQauntity
			// 
			this->lblQauntity->AutoSize = true;
			this->lblQauntity->Location = System::Drawing::Point(6, 19);
			this->lblQauntity->Name = L"lblQauntity";
			this->lblQauntity->Size = System::Drawing::Size(76, 13);
			this->lblQauntity->TabIndex = 18;
			this->lblQauntity->Text = L"Quantité totale";
			// 
			// gpbInfos
			// 
			this->gpbInfos->Controls->Add(this->txtFirstName);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblStart);
			this->gpbInfos->Controls->Add(this->dtpStart);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Location = System::Drawing::Point(75, 47);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 99);
			this->gpbInfos->TabIndex = 28;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Informations personnelles";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(91, 45);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(123, 20);
			this->txtFirstName->TabIndex = 17;
			// 
			// lblFirstName
			// 
			this->lblFirstName->Location = System::Drawing::Point(6, 48);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(59, 13);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"Référence";
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
			this->lblName->Size = System::Drawing::Size(59, 13);
			this->lblName->TabIndex = 16;
			this->lblName->Text = L"Nom";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(91, 19);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(123, 20);
			this->txtName->TabIndex = 15;
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 8);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(346, 23);
			this->lblTitle->TabIndex = 27;
			this->lblTitle->Text = L"Produit";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtFloatSupplierPrice);
			this->groupBox1->Controls->Add(this->txtFloatUnitPrice);
			this->groupBox1->Controls->Add(this->lblVatRate);
			this->groupBox1->Controls->Add(this->txtFloatVatRate);
			this->groupBox1->Controls->Add(this->lblFloatUnitPrice);
			this->groupBox1->Controls->Add(this->lblFloatSupplierPrice);
			this->groupBox1->Location = System::Drawing::Point(75, 262);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(220, 99);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Prix";
			// 
			// txtFloatSupplierPrice
			// 
			this->txtFloatSupplierPrice->Location = System::Drawing::Point(112, 19);
			this->txtFloatSupplierPrice->MaxLength = 10;
			this->txtFloatSupplierPrice->Name = L"txtFloatSupplierPrice";
			this->txtFloatSupplierPrice->Size = System::Drawing::Size(102, 20);
			this->txtFloatSupplierPrice->TabIndex = 22;
			this->txtFloatSupplierPrice->Text = L"0";
			// 
			// txtFloatUnitPrice
			// 
			this->txtFloatUnitPrice->Location = System::Drawing::Point(112, 45);
			this->txtFloatUnitPrice->MaxLength = 10;
			this->txtFloatUnitPrice->Name = L"txtFloatUnitPrice";
			this->txtFloatUnitPrice->Size = System::Drawing::Size(102, 20);
			this->txtFloatUnitPrice->TabIndex = 21;
			this->txtFloatUnitPrice->Text = L"0";
			// 
			// lblVatRate
			// 
			this->lblVatRate->AutoSize = true;
			this->lblVatRate->Location = System::Drawing::Point(5, 71);
			this->lblVatRate->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblVatRate->Name = L"lblVatRate";
			this->lblVatRate->Size = System::Drawing::Size(45, 13);
			this->lblVatRate->TabIndex = 17;
			this->lblVatRate->Text = L"TVA (%)";
			// 
			// txtVatRate
			// 
			this->txtFloatVatRate->Location = System::Drawing::Point(112, 71);
			this->txtFloatVatRate->MaxLength = 10;
			this->txtFloatVatRate->Name = L"txtVatRate";
			this->txtFloatVatRate->Size = System::Drawing::Size(102, 20);
			this->txtFloatVatRate->TabIndex = 15;
			this->txtFloatVatRate->Text = L"0";
			// 
			// lblFloatUnitPrice
			// 
			this->lblFloatUnitPrice->AutoSize = true;
			this->lblFloatUnitPrice->Location = System::Drawing::Point(5, 48);
			this->lblFloatUnitPrice->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFloatUnitPrice->Name = L"lblFloatUnitPrice";
			this->lblFloatUnitPrice->Size = System::Drawing::Size(91, 13);
			this->lblFloatUnitPrice->TabIndex = 20;
			this->lblFloatUnitPrice->Text = L"Prix vente unitaire";
			// 
			// lblFloatSupplierPrice
			// 
			this->lblFloatSupplierPrice->AutoSize = true;
			this->lblFloatSupplierPrice->Location = System::Drawing::Point(6, 22);
			this->lblFloatSupplierPrice->Name = L"lblFloatSupplierPrice";
			this->lblFloatSupplierPrice->Size = System::Drawing::Size(78, 13);
			this->lblFloatSupplierPrice->TabIndex = 18;
			this->lblFloatSupplierPrice->Text = L"Prix fournisseur";
			// 
			// ItemEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(370, 465);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnDeleteItem);
			this->Controls->Add(this->btnUpdateItem);
			this->Controls->Add(this->btnCreateItem);
			this->Controls->Add(this->gpbQuantity);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MaximumSize = System::Drawing::Size(386, 504);
			this->MinimumSize = System::Drawing::Size(386, 504);
			this->Name = L"ItemEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ItemEditorForm";
			this->gpbQuantity->ResumeLayout(false);
			this->gpbQuantity->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantityThreshold))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numAvailableQuantity))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numQuantity))->EndInit();
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			addFloatTextBoxConstraints();
		}
#pragma endregion
	private:
		System::Void IHM::ItemEditorForm::addFloatTextBoxConstraints();
	};
}
