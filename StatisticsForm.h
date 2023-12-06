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
	/// Description résumée de Statistics
	/// </summary>
	public ref class StatisticsForm : public System::Windows::Forms::Form {
	public:
		StatisticsForm(NS_Services::Services^ services) {
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
		~StatisticsForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;

	private: System::Windows::Forms::DataGridView^ dgvItems;
	private: System::Windows::Forms::TextBox^ txtFloatProfitPercent;
	private: System::Windows::Forms::GroupBox^ gpbStockValue;
	private: System::Windows::Forms::Label^ lblProfit;
	private: System::Windows::Forms::Label^ lblVatPercent;
	private: System::Windows::Forms::TextBox^ txtFloatVatPercent;
	private: System::Windows::Forms::Label^ lblUnknownShrinkage;
	private: System::Windows::Forms::TextBox^ txtFloatUnknownShrinkagePercent;
	private: System::Windows::Forms::Button^ btnStoredValue;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Button^ btnTurnOverMonth;
	private: System::Windows::Forms::GroupBox^ gpbTurnOverMonth;
	private: System::Windows::Forms::Label^ lblTurnOverMonth;
	private: System::Windows::Forms::NumericUpDown^ numTurnOverYear;
	private: System::Windows::Forms::Label^ lblTurnOverYear;
	private: System::Windows::Forms::NumericUpDown^ numTurnOverMonth;
	private: System::Windows::Forms::GroupBox^ gpbClientTotalSpending;
	private: System::Windows::Forms::Button^ btnThresholdWarning;
	private: System::Windows::Forms::NumericUpDown^ numClientId;
	private: System::Windows::Forms::Label^ lblClientId;
	private: System::Windows::Forms::Button^ btnClientTotalSpending;
	private: System::Windows::Forms::Button^ btnMostSoldItems;
	private: System::Windows::Forms::Button^ btnLeastSoldItems;
	private: System::Windows::Forms::Button^ btnStoredSupplierPrice;
	private: System::Windows::Forms::Button^ btnStoredSellPrice;
	private: System::Windows::Forms::GroupBox^ gpbStockStats;
	private: System::Windows::Forms::Button^ btnAveragePurchasePrice;
	private: System::Windows::Forms::GroupBox^ gpbItemsStock;

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
			this->dgvItems = (gcnew System::Windows::Forms::DataGridView());
			this->gpbStockValue = (gcnew System::Windows::Forms::GroupBox());
			this->btnStoredValue = (gcnew System::Windows::Forms::Button());
			this->lblUnknownShrinkage = (gcnew System::Windows::Forms::Label());
			this->txtFloatUnknownShrinkagePercent = (gcnew System::Windows::Forms::TextBox());
			this->lblVatPercent = (gcnew System::Windows::Forms::Label());
			this->txtFloatVatPercent = (gcnew System::Windows::Forms::TextBox());
			this->lblProfit = (gcnew System::Windows::Forms::Label());
			this->txtFloatProfitPercent = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnTurnOverMonth = (gcnew System::Windows::Forms::Button());
			this->gpbTurnOverMonth = (gcnew System::Windows::Forms::GroupBox());
			this->numTurnOverYear = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblTurnOverYear = (gcnew System::Windows::Forms::Label());
			this->numTurnOverMonth = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblTurnOverMonth = (gcnew System::Windows::Forms::Label());
			this->gpbClientTotalSpending = (gcnew System::Windows::Forms::GroupBox());
			this->numClientId = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblClientId = (gcnew System::Windows::Forms::Label());
			this->btnClientTotalSpending = (gcnew System::Windows::Forms::Button());
			this->btnThresholdWarning = (gcnew System::Windows::Forms::Button());
			this->btnMostSoldItems = (gcnew System::Windows::Forms::Button());
			this->btnLeastSoldItems = (gcnew System::Windows::Forms::Button());
			this->btnStoredSupplierPrice = (gcnew System::Windows::Forms::Button());
			this->btnStoredSellPrice = (gcnew System::Windows::Forms::Button());
			this->gpbStockStats = (gcnew System::Windows::Forms::GroupBox());
			this->btnAveragePurchasePrice = (gcnew System::Windows::Forms::Button());
			this->gpbItemsStock = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItems))->BeginInit();
			this->gpbStockValue->SuspendLayout();
			this->gpbTurnOverMonth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTurnOverYear))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTurnOverMonth))->BeginInit();
			this->gpbClientTotalSpending->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numClientId))->BeginInit();
			this->gpbStockStats->SuspendLayout();
			this->gpbItemsStock->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvItems
			// 
			this->dgvItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvItems->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvItems->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvItems->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvItems->Location = System::Drawing::Point(12, 151);
			this->dgvItems->Name = L"dgvItems";
			this->dgvItems->ReadOnly = true;
			this->dgvItems->RowHeadersVisible = false;
			this->dgvItems->Size = System::Drawing::Size(612, 274);
			this->dgvItems->TabIndex = 0;
			// 
			// gpbStockValue
			// 
			this->gpbStockValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbStockValue->Controls->Add(this->btnStoredValue);
			this->gpbStockValue->Controls->Add(this->lblUnknownShrinkage);
			this->gpbStockValue->Controls->Add(this->txtFloatUnknownShrinkagePercent);
			this->gpbStockValue->Controls->Add(this->lblVatPercent);
			this->gpbStockValue->Controls->Add(this->txtFloatVatPercent);
			this->gpbStockValue->Controls->Add(this->lblProfit);
			this->gpbStockValue->Controls->Add(this->txtFloatProfitPercent);
			this->gpbStockValue->Location = System::Drawing::Point(12, 35);
			this->gpbStockValue->Name = L"gpbStockValue";
			this->gpbStockValue->Size = System::Drawing::Size(612, 52);
			this->gpbStockValue->TabIndex = 4;
			this->gpbStockValue->TabStop = false;
			this->gpbStockValue->Text = L"Valeur de vente totale du stock (paramètres en %)";
			// 
			// btnStoredValue
			// 
			this->btnStoredValue->Location = System::Drawing::Point(457, 17);
			this->btnStoredValue->Margin = System::Windows::Forms::Padding(8, 2, 3, 3);
			this->btnStoredValue->Name = L"btnStoredValue";
			this->btnStoredValue->Size = System::Drawing::Size(149, 23);
			this->btnStoredValue->TabIndex = 6;
			this->btnStoredValue->Text = L"Calculer valeur stock";
			this->btnStoredValue->UseVisualStyleBackColor = true;
			// 
			// lblUnknownShrinkage
			// 
			this->lblUnknownShrinkage->AutoSize = true;
			this->lblUnknownShrinkage->Location = System::Drawing::Point(282, 22);
			this->lblUnknownShrinkage->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblUnknownShrinkage->Name = L"lblUnknownShrinkage";
			this->lblUnknownShrinkage->Size = System::Drawing::Size(103, 13);
			this->lblUnknownShrinkage->TabIndex = 8;
			this->lblUnknownShrinkage->Text = L"Démarque inconnue";
			// 
			// txtFloatUnknownShrinkagePercent
			// 
			this->txtFloatUnknownShrinkagePercent->Location = System::Drawing::Point(391, 19);
			this->txtFloatUnknownShrinkagePercent->MaxLength = 8;
			this->txtFloatUnknownShrinkagePercent->Name = L"txtFloatUnknownShrinkagePercent";
			this->txtFloatUnknownShrinkagePercent->Size = System::Drawing::Size(55, 20);
			this->txtFloatUnknownShrinkagePercent->TabIndex = 7;
			this->txtFloatUnknownShrinkagePercent->Text = L"5,0";
			// 
			// lblVatPercent
			// 
			this->lblVatPercent->AutoSize = true;
			this->lblVatPercent->Location = System::Drawing::Point(175, 22);
			this->lblVatPercent->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblVatPercent->Name = L"lblVatPercent";
			this->lblVatPercent->Size = System::Drawing::Size(28, 13);
			this->lblVatPercent->TabIndex = 4;
			this->lblVatPercent->Text = L"TVA";
			// 
			// txtFloatVatPercent
			// 
			this->txtFloatVatPercent->Location = System::Drawing::Point(209, 19);
			this->txtFloatVatPercent->MaxLength = 8;
			this->txtFloatVatPercent->Name = L"txtFloatVatPercent";
			this->txtFloatVatPercent->Size = System::Drawing::Size(55, 20);
			this->txtFloatVatPercent->TabIndex = 3;
			this->txtFloatVatPercent->Text = L"20,0";
			// 
			// lblProfit
			// 
			this->lblProfit->AutoSize = true;
			this->lblProfit->Location = System::Drawing::Point(6, 22);
			this->lblProfit->Name = L"lblProfit";
			this->lblProfit->Size = System::Drawing::Size(99, 13);
			this->lblProfit->TabIndex = 2;
			this->lblProfit->Text = L"Marge commerciale";
			// 
			// txtFloatProfitPercent
			// 
			this->txtFloatProfitPercent->Location = System::Drawing::Point(111, 19);
			this->txtFloatProfitPercent->MaxLength = 8;
			this->txtFloatProfitPercent->Name = L"txtFloatProfitPercent";
			this->txtFloatProfitPercent->Size = System::Drawing::Size(55, 20);
			this->txtFloatProfitPercent->TabIndex = 1;
			this->txtFloatProfitPercent->Text = L"15,00";
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(790, 23);
			this->lblTitle->TabIndex = 12;
			this->lblTitle->Text = L"Statistiques";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btnTurnOverMonth
			// 
			this->btnTurnOverMonth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnTurnOverMonth->Location = System::Drawing::Point(6, 79);
			this->btnTurnOverMonth->Margin = System::Windows::Forms::Padding(3, 10, 3, 5);
			this->btnTurnOverMonth->Name = L"btnTurnOverMonth";
			this->btnTurnOverMonth->Size = System::Drawing::Size(160, 23);
			this->btnTurnOverMonth->TabIndex = 13;
			this->btnTurnOverMonth->Text = L"Chiffre d\'affaires";
			this->btnTurnOverMonth->UseVisualStyleBackColor = true;
			// 
			// gpbTurnOverMonth
			// 
			this->gpbTurnOverMonth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbTurnOverMonth->Controls->Add(this->numTurnOverYear);
			this->gpbTurnOverMonth->Controls->Add(this->lblTurnOverYear);
			this->gpbTurnOverMonth->Controls->Add(this->numTurnOverMonth);
			this->gpbTurnOverMonth->Controls->Add(this->lblTurnOverMonth);
			this->gpbTurnOverMonth->Controls->Add(this->btnTurnOverMonth);
			this->gpbTurnOverMonth->Location = System::Drawing::Point(630, 35);
			this->gpbTurnOverMonth->Name = L"gpbTurnOverMonth";
			this->gpbTurnOverMonth->Size = System::Drawing::Size(172, 110);
			this->gpbTurnOverMonth->TabIndex = 14;
			this->gpbTurnOverMonth->TabStop = false;
			this->gpbTurnOverMonth->Text = L"Chiffre d\'affaires";
			// 
			// numTurnOverYear
			// 
			this->numTurnOverYear->AllowDrop = true;
			this->numTurnOverYear->Location = System::Drawing::Point(50, 47);
			this->numTurnOverYear->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				9999, 0, 0, 0
			});
			this->numTurnOverYear->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1900, 0, 0, 0
			});
			this->numTurnOverYear->Name = L"numTurnOverYear";
			this->numTurnOverYear->Size = System::Drawing::Size(54, 20);
			this->numTurnOverYear->TabIndex = 16;
			this->numTurnOverYear->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				2023, 0, 0, 0
			});
			// 
			// lblTurnOverYear
			// 
			this->lblTurnOverYear->AutoSize = true;
			this->lblTurnOverYear->Location = System::Drawing::Point(6, 49);
			this->lblTurnOverYear->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->lblTurnOverYear->Name = L"lblTurnOverYear";
			this->lblTurnOverYear->Size = System::Drawing::Size(38, 13);
			this->lblTurnOverYear->TabIndex = 17;
			this->lblTurnOverYear->Text = L"Année";
			// 
			// numTurnOverMonth
			// 
			this->numTurnOverMonth->AllowDrop = true;
			this->numTurnOverMonth->Location = System::Drawing::Point(50, 24);
			this->numTurnOverMonth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				12, 0, 0, 0
			});
			this->numTurnOverMonth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0, 0
			});
			this->numTurnOverMonth->Name = L"numTurnOverMonth";
			this->numTurnOverMonth->Size = System::Drawing::Size(54, 20);
			this->numTurnOverMonth->TabIndex = 9;
			this->numTurnOverMonth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0, 0
			});
			// 
			// lblTurnOverMonth
			// 
			this->lblTurnOverMonth->AutoSize = true;
			this->lblTurnOverMonth->Location = System::Drawing::Point(6, 26);
			this->lblTurnOverMonth->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->lblTurnOverMonth->Name = L"lblTurnOverMonth";
			this->lblTurnOverMonth->Size = System::Drawing::Size(29, 13);
			this->lblTurnOverMonth->TabIndex = 15;
			this->lblTurnOverMonth->Text = L"Mois";
			// 
			// gpbClientTotalSpending
			// 
			this->gpbClientTotalSpending->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbClientTotalSpending->Controls->Add(this->numClientId);
			this->gpbClientTotalSpending->Controls->Add(this->lblClientId);
			this->gpbClientTotalSpending->Controls->Add(this->btnClientTotalSpending);
			this->gpbClientTotalSpending->Location = System::Drawing::Point(352, 93);
			this->gpbClientTotalSpending->Name = L"gpbClientTotalSpending";
			this->gpbClientTotalSpending->Size = System::Drawing::Size(272, 52);
			this->gpbClientTotalSpending->TabIndex = 18;
			this->gpbClientTotalSpending->TabStop = false;
			this->gpbClientTotalSpending->Text = L"Dépenses client";
			// 
			// numClientId
			// 
			this->numClientId->AllowDrop = true;
			this->numClientId->Location = System::Drawing::Point(56, 24);
			this->numClientId->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				9999999, 0, 0, 0
			});
			this->numClientId->Name = L"numClientId";
			this->numClientId->Size = System::Drawing::Size(52, 20);
			this->numClientId->TabIndex = 18;
			// 
			// lblClientId
			// 
			this->lblClientId->AutoSize = true;
			this->lblClientId->Location = System::Drawing::Point(6, 26);
			this->lblClientId->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->lblClientId->Name = L"lblClientId";
			this->lblClientId->Size = System::Drawing::Size(44, 13);
			this->lblClientId->TabIndex = 19;
			this->lblClientId->Text = L"Id client";
			// 
			// btnClientTotalSpending
			// 
			this->btnClientTotalSpending->Location = System::Drawing::Point(114, 21);
			this->btnClientTotalSpending->Name = L"btnClientTotalSpending";
			this->btnClientTotalSpending->Size = System::Drawing::Size(152, 23);
			this->btnClientTotalSpending->TabIndex = 20;
			this->btnClientTotalSpending->Text = L"Calcul dépenses";
			this->btnClientTotalSpending->UseVisualStyleBackColor = true;
			// 
			// btnThresholdWarning
			// 
			this->btnThresholdWarning->Location = System::Drawing::Point(6, 19);
			this->btnThresholdWarning->Name = L"btnThresholdWarning";
			this->btnThresholdWarning->Size = System::Drawing::Size(157, 23);
			this->btnThresholdWarning->TabIndex = 17;
			this->btnThresholdWarning->Text = L"Produits sous approvisionnés";
			this->btnThresholdWarning->UseVisualStyleBackColor = true;
			this->btnThresholdWarning->Click += gcnew System::EventHandler(this, &StatisticsForm::button4_Click);
			// 
			// btnMostSoldItems
			// 
			this->btnMostSoldItems->Location = System::Drawing::Point(6, 48);
			this->btnMostSoldItems->Name = L"btnMostSoldItems";
			this->btnMostSoldItems->Size = System::Drawing::Size(157, 23);
			this->btnMostSoldItems->TabIndex = 17;
			this->btnMostSoldItems->Text = L"Produits les plus vendus";
			this->btnMostSoldItems->UseVisualStyleBackColor = true;
			this->btnMostSoldItems->Click += gcnew System::EventHandler(this, &StatisticsForm::button5_Click);
			// 
			// btnLeastSoldItems
			// 
			this->btnLeastSoldItems->Location = System::Drawing::Point(6, 77);
			this->btnLeastSoldItems->Name = L"btnLeastSoldItems";
			this->btnLeastSoldItems->Size = System::Drawing::Size(157, 23);
			this->btnLeastSoldItems->TabIndex = 19;
			this->btnLeastSoldItems->Text = L"Produits les moins vendus";
			this->btnLeastSoldItems->UseVisualStyleBackColor = true;
			this->btnLeastSoldItems->Click += gcnew System::EventHandler(this, &StatisticsForm::button6_Click);
			// 
			// btnStoredSupplierPrice
			// 
			this->btnStoredSupplierPrice->Location = System::Drawing::Point(102, 19);
			this->btnStoredSupplierPrice->Name = L"btnStoredSupplierPrice";
			this->btnStoredSupplierPrice->Size = System::Drawing::Size(110, 23);
			this->btnStoredSupplierPrice->TabIndex = 20;
			this->btnStoredSupplierPrice->Text = L"Prix d\'achat stock";
			this->btnStoredSupplierPrice->UseVisualStyleBackColor = true;
			// 
			// btnStoredSellPrice
			// 
			this->btnStoredSellPrice->Location = System::Drawing::Point(218, 19);
			this->btnStoredSellPrice->Name = L"btnStoredSellPrice";
			this->btnStoredSellPrice->Size = System::Drawing::Size(110, 23);
			this->btnStoredSellPrice->TabIndex = 21;
			this->btnStoredSellPrice->Text = L"Prix de vente stock";
			this->btnStoredSellPrice->UseVisualStyleBackColor = true;
			// 
			// gpbStockStats
			// 
			this->gpbStockStats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbStockStats->Controls->Add(this->btnAveragePurchasePrice);
			this->gpbStockStats->Controls->Add(this->btnStoredSellPrice);
			this->gpbStockStats->Controls->Add(this->btnStoredSupplierPrice);
			this->gpbStockStats->Location = System::Drawing::Point(12, 93);
			this->gpbStockStats->Name = L"gpbStockStats";
			this->gpbStockStats->Size = System::Drawing::Size(334, 52);
			this->gpbStockStats->TabIndex = 18;
			this->gpbStockStats->TabStop = false;
			this->gpbStockStats->Text = L"Statistiques stock";
			// 
			// btnAveragePurchasePrice
			// 
			this->btnAveragePurchasePrice->Location = System::Drawing::Point(6, 19);
			this->btnAveragePurchasePrice->Margin = System::Windows::Forms::Padding(3, 3, 3, 5);
			this->btnAveragePurchasePrice->Name = L"btnAveragePurchasePrice";
			this->btnAveragePurchasePrice->Size = System::Drawing::Size(90, 23);
			this->btnAveragePurchasePrice->TabIndex = 18;
			this->btnAveragePurchasePrice->Text = L"Panier Moyen";
			this->btnAveragePurchasePrice->UseVisualStyleBackColor = true;
			// 
			// gpbItemsStock
			// 
			this->gpbItemsStock->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbItemsStock->Controls->Add(this->btnMostSoldItems);
			this->gpbItemsStock->Controls->Add(this->btnThresholdWarning);
			this->gpbItemsStock->Controls->Add(this->btnLeastSoldItems);
			this->gpbItemsStock->Location = System::Drawing::Point(630, 151);
			this->gpbItemsStock->Name = L"gpbItemsStock";
			this->gpbItemsStock->Size = System::Drawing::Size(172, 107);
			this->gpbItemsStock->TabIndex = 21;
			this->gpbItemsStock->TabStop = false;
			this->gpbItemsStock->Text = L"Affichage produits";
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(814, 437);
			this->Controls->Add(this->gpbItemsStock);
			this->Controls->Add(this->gpbStockStats);
			this->Controls->Add(this->gpbClientTotalSpending);
			this->Controls->Add(this->gpbTurnOverMonth);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbStockValue);
			this->Controls->Add(this->dgvItems);
			this->MinimumSize = System::Drawing::Size(830, 308);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::statisticsLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItems))->EndInit();
			this->gpbStockValue->ResumeLayout(false);
			this->gpbStockValue->PerformLayout();
			this->gpbTurnOverMonth->ResumeLayout(false);
			this->gpbTurnOverMonth->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTurnOverYear))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTurnOverMonth))->EndInit();
			this->gpbClientTotalSpending->ResumeLayout(false);
			this->gpbClientTotalSpending->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numClientId))->EndInit();
			this->gpbStockStats->ResumeLayout(false);
			this->gpbItemsStock->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void statisticsLoad(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {}

	private:
		System::Void IHM::StatisticsForm::addFloatTextBoxConstraints();
	};
}
