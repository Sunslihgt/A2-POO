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
	/// Summary for ItemEditorForm
	/// </summary>
	public ref class ItemEditorForm : public System::Windows::Forms::Form {
	public:
		ItemEditorForm(NS_Services::Services^ services, bool alreadyExists, int id) {
			InitializeComponent();
			addFloatTextBoxConstraints();

			this->services = services;
			this->alreadyExists = alreadyExists;
			this->id = id;

			fillFieldsFromId();  // Remplissage des champs � partir de l'id
			enableButtons();  // Activation des boutons
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
		NS_Services::Services^ services;
		bool alreadyExists;
		int id;

	private: System::Windows::Forms::Button^ btnDeleteItem;
	private: System::Windows::Forms::Button^ btnUpdateItem;
	private: System::Windows::Forms::Button^ btnCreateItem;
	private: System::Windows::Forms::GroupBox^ gpbQuantity;
	private: System::Windows::Forms::Label^ lblAvailableQuantity;
	private: System::Windows::Forms::NumericUpDown^ numQuantity;
	private: System::Windows::Forms::Label^ lblQauntity;
	private: System::Windows::Forms::GroupBox^ gpbInfos;
	private: System::Windows::Forms::TextBox^ txtReference;
	private: System::Windows::Forms::Label^ lblFirstName;
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
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
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
			this->btnDeleteItem->Location = System::Drawing::Point(75, 389);
			this->btnDeleteItem->Name = L"btnDeleteItem";
			this->btnDeleteItem->Size = System::Drawing::Size(220, 23);
			this->btnDeleteItem->TabIndex = 32;
			this->btnDeleteItem->Text = L"Supprimer";
			this->btnDeleteItem->UseVisualStyleBackColor = true;
			// 
			// btnUpdateItem
			// 
			this->btnUpdateItem->Location = System::Drawing::Point(75, 360);
			this->btnUpdateItem->Name = L"btnUpdateItem";
			this->btnUpdateItem->Size = System::Drawing::Size(220, 23);
			this->btnUpdateItem->TabIndex = 31;
			this->btnUpdateItem->Text = L"Modifier";
			this->btnUpdateItem->UseVisualStyleBackColor = true;
			// 
			// btnCreateItem
			// 
			this->btnCreateItem->Location = System::Drawing::Point(75, 331);
			this->btnCreateItem->Name = L"btnCreateItem";
			this->btnCreateItem->Size = System::Drawing::Size(220, 23);
			this->btnCreateItem->TabIndex = 30;
			this->btnCreateItem->Text = L"Cr�er";
			this->btnCreateItem->UseVisualStyleBackColor = true;
			this->btnCreateItem->Click += gcnew System::EventHandler(this, &ItemEditorForm::btnCreateItem_Click);
			// 
			// gpbQuantity
			// 
			this->gpbQuantity->Controls->Add(this->numQuantityThreshold);
			this->gpbQuantity->Controls->Add(this->lblQuantityThreshold);
			this->gpbQuantity->Controls->Add(this->numAvailableQuantity);
			this->gpbQuantity->Controls->Add(this->lblAvailableQuantity);
			this->gpbQuantity->Controls->Add(this->numQuantity);
			this->gpbQuantity->Controls->Add(this->lblQauntity);
			this->gpbQuantity->Location = System::Drawing::Point(75, 125);
			this->gpbQuantity->Name = L"gpbQuantity";
			this->gpbQuantity->Size = System::Drawing::Size(220, 95);
			this->gpbQuantity->TabIndex = 29;
			this->gpbQuantity->TabStop = false;
			this->gpbQuantity->Text = L"Quantit�";
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
			this->numAvailableQuantity->TextChanged += gcnew System::EventHandler(this, &ItemEditorForm::numQuantityChanged);
			// 
			// lblAvailableQuantity
			// 
			this->lblAvailableQuantity->AutoSize = true;
			this->lblAvailableQuantity->Location = System::Drawing::Point(6, 45);
			this->lblAvailableQuantity->Name = L"lblAvailableQuantity";
			this->lblAvailableQuantity->Size = System::Drawing::Size(97, 13);
			this->lblAvailableQuantity->TabIndex = 20;
			this->lblAvailableQuantity->Text = L"Quantit� disponible";
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
			this->numQuantity->TextChanged += gcnew System::EventHandler(this, &ItemEditorForm::numQuantityChanged);
			// 
			// lblQauntity
			// 
			this->lblQauntity->AutoSize = true;
			this->lblQauntity->Location = System::Drawing::Point(6, 19);
			this->lblQauntity->Name = L"lblQauntity";
			this->lblQauntity->Size = System::Drawing::Size(76, 13);
			this->lblQauntity->TabIndex = 18;
			this->lblQauntity->Text = L"Quantit� totale";
			// 
			// gpbInfos
			// 
			this->gpbInfos->Controls->Add(this->txtReference);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Location = System::Drawing::Point(75, 47);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 72);
			this->gpbInfos->TabIndex = 28;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Informations personnelles";
			// 
			// txtReference
			// 
			this->txtReference->Location = System::Drawing::Point(91, 45);
			this->txtReference->MaxLength = 50;
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(123, 20);
			this->txtReference->TabIndex = 17;
			// 
			// lblFirstName
			// 
			this->lblFirstName->Location = System::Drawing::Point(6, 48);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(59, 13);
			this->lblFirstName->TabIndex = 18;
			this->lblFirstName->Text = L"R�f�rence";
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
			this->groupBox1->Location = System::Drawing::Point(75, 226);
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
			// txtFloatVatRate
			// 
			this->txtFloatVatRate->Location = System::Drawing::Point(112, 71);
			this->txtFloatVatRate->MaxLength = 10;
			this->txtFloatVatRate->Name = L"txtFloatVatRate";
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
			this->ClientSize = System::Drawing::Size(370, 431);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnDeleteItem);
			this->Controls->Add(this->btnUpdateItem);
			this->Controls->Add(this->btnCreateItem);
			this->Controls->Add(this->gpbQuantity);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MaximumSize = System::Drawing::Size(386, 470);
			this->MinimumSize = System::Drawing::Size(386, 470);
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

		}
#pragma endregion
	private:
		System::Void ItemEditorForm::addFloatTextBoxConstraints();

		System::Void btnCreateItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (this->txtName->Text->Length == 0 || this->txtReference->Text->Length == 0) {
				MessageBox::Show("Veuillez remplir tous les champs obligatoires.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			float supplierPrice = -1;
			float unitPrice = -1;
			float vatRate = -1;


			try {
				supplierPrice = float::Parse(this->txtFloatSupplierPrice->Text);
				unitPrice = float::Parse(this->txtFloatUnitPrice->Text);
				vatRate = float::Parse(this->txtFloatVatRate->Text);
			} catch (System::Exception^ ex) {
				MessageBox::Show("Veuillez entrer des nombres d�cimaux valides.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Cr�ation de l'item
			System::Data::DataSet^ dataSet = this->services->createItem(this->txtName->Text, this->txtReference->Text, (int) this->numQuantity->Value, (int) this->numAvailableQuantity->Value, (int) this->numQuantityThreshold->Value, supplierPrice, unitPrice, vatRate);
			if (dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				this->id = System::Convert::ToInt32(row[0]);  // R�cup�ration de l'id de l'item
				fillFieldsFromDataSet(dataSet);  // Update des champs
				alreadyExists = true;  // L'item existe maintenant
				enableButtons();  // Activation des boutons
			} else {
				MessageBox::Show("Une erreur est survenue lors de la cr�ation du produit.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		// D�sactive le bouton de cr�ation si l'employ� existe d�j�
		// D�sactive les boutons de modification et de suppression si l'employ� n'existe pas encore
		System::Void enableButtons() {
			if (alreadyExists) {
				this->btnCreateItem->Enabled = false;
				this->btnUpdateItem->Enabled = true;
				this->btnDeleteItem->Enabled = true;
				this->numAvailableQuantity->ReadOnly = false;
				this->numAvailableQuantity->Enabled = true;
				this->numQuantity->ReadOnly = true;
				this->numQuantity->Enabled = false;
			} else {
				this->btnCreateItem->Enabled = true;
				this->btnUpdateItem->Enabled = false;
				this->btnDeleteItem->Enabled = false;
				this->numAvailableQuantity->ReadOnly = true;
				this->numAvailableQuantity->Enabled = false;
				this->numQuantity->ReadOnly = false;
				this->numQuantity->Enabled = true;
			}
		}

		System::Void fillFieldsFromId() {
			if (alreadyExists && this->id >= 0) {
				System::Data::DataSet^ dataSet = this->services->getItemById(this->id);
				fillFieldsFromDataSet(dataSet);
			}
		}

		System::Void fillFieldsFromDataSet(System::Data::DataSet^ dataSet) {
			if (dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				// 0,        1,      2,           3,          4,                   5,                   6,               7,           8
				// i.idItem, i.name, i.reference, i.quantity, i.availableQuantity, i.quantityThreshold, i.supplierPrice, i.unitPrice, i.vatRate
				this->txtName->Text = row[1]->ToString();
				this->txtReference->Text = row[2]->ToString();
				this->numQuantity->Text = row[3]->ToString();
				this->numAvailableQuantity->Text = row[4]->ToString();
				this->numQuantityThreshold->Text = row[5]->ToString();
				this->txtFloatSupplierPrice->Text = row[6]->ToString();
				this->txtFloatUnitPrice->Text = row[7]->ToString();
				this->txtFloatVatRate->Text = row[8]->ToString();
			}
		}

		// Synchronisation des quantit�s
		System::Void numQuantityChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->alreadyExists) {
			//this->numQuantity->Value = this->numAvailableQuantity->Value;
		} else {
			this->numAvailableQuantity->Value = this->numQuantity->Value;
		} 
	}
};
}
