#pragma once

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
	public ref class StatisticsForm : public System::Windows::Forms::Form
	{
	public:
		StatisticsForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~StatisticsForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgvEmployees;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::GroupBox^ gpbSearch;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblStreetName;
	private: System::Windows::Forms::TextBox^ txtStreetName;









	private: System::Windows::Forms::Button^ btnSearchEmployees;
	private: System::Windows::Forms::Label^ lblTitle;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ gpbTurnOverMonth;
	private: System::Windows::Forms::Label^ lblFirstPurchase;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;



	private: System::Windows::Forms::GroupBox^ groupBox2;





	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ nudClientId;

	private: System::Windows::Forms::Label^ lblClientId;
	private: System::Windows::Forms::Button^ btnClientTotalSpending;
	private: System::Windows::Forms::Button^ btnMostSoldItems;




	private: System::Windows::Forms::Button^ btnLeastSoldItems;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;








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
			this->dgvEmployees = (gcnew System::Windows::Forms::DataGridView());
			this->gpbSearch = (gcnew System::Windows::Forms::GroupBox());
			this->btnSearchEmployees = (gcnew System::Windows::Forms::Button());
			this->lblStreetName = (gcnew System::Windows::Forms::Label());
			this->txtStreetName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gpbTurnOverMonth = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblFirstPurchase = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnMostSoldItems = (gcnew System::Windows::Forms::Button());
			this->btnLeastSoldItems = (gcnew System::Windows::Forms::Button());
			this->btnClientTotalSpending = (gcnew System::Windows::Forms::Button());
			this->nudClientId = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblClientId = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmployees))->BeginInit();
			this->gpbSearch->SuspendLayout();
			this->gpbTurnOverMonth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudClientId))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvEmployees
			// 
			this->dgvEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvEmployees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEmployees->Location = System::Drawing::Point(12, 151);
			this->dgvEmployees->Name = L"dgvEmployees";
			this->dgvEmployees->Size = System::Drawing::Size(612, 274);
			this->dgvEmployees->TabIndex = 0;
			// 
			// gpbSearch
			// 
			this->gpbSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbSearch->Controls->Add(this->btnSearchEmployees);
			this->gpbSearch->Controls->Add(this->lblStreetName);
			this->gpbSearch->Controls->Add(this->txtStreetName);
			this->gpbSearch->Controls->Add(this->lblFirstName);
			this->gpbSearch->Controls->Add(this->txtFirstName);
			this->gpbSearch->Controls->Add(this->lblName);
			this->gpbSearch->Controls->Add(this->txtName);
			this->gpbSearch->Location = System::Drawing::Point(12, 35);
			this->gpbSearch->Name = L"gpbSearch";
			this->gpbSearch->Size = System::Drawing::Size(612, 52);
			this->gpbSearch->TabIndex = 4;
			this->gpbSearch->TabStop = false;
			this->gpbSearch->Text = L"Statistiques stock (paramètres en %)";
			// 
			// btnSearchEmployees
			// 
			this->btnSearchEmployees->Location = System::Drawing::Point(457, 17);
			this->btnSearchEmployees->Margin = System::Windows::Forms::Padding(8, 2, 3, 3);
			this->btnSearchEmployees->Name = L"btnSearchEmployees";
			this->btnSearchEmployees->Size = System::Drawing::Size(149, 23);
			this->btnSearchEmployees->TabIndex = 6;
			this->btnSearchEmployees->Text = L"Chercher";
			this->btnSearchEmployees->UseVisualStyleBackColor = true;
			// 
			// lblStreetName
			// 
			this->lblStreetName->AutoSize = true;
			this->lblStreetName->Location = System::Drawing::Point(282, 22);
			this->lblStreetName->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblStreetName->Name = L"lblStreetName";
			this->lblStreetName->Size = System::Drawing::Size(103, 13);
			this->lblStreetName->TabIndex = 8;
			this->lblStreetName->Text = L"Démarque inconnue";
			// 
			// txtStreetName
			// 
			this->txtStreetName->Location = System::Drawing::Point(391, 19);
			this->txtStreetName->Name = L"txtStreetName";
			this->txtStreetName->Size = System::Drawing::Size(55, 20);
			this->txtStreetName->TabIndex = 7;
			this->txtStreetName->Text = L"5,0";
			// 
			// lblFirstName
			// 
			this->lblFirstName->AutoSize = true;
			this->lblFirstName->Location = System::Drawing::Point(175, 22);
			this->lblFirstName->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblFirstName->Name = L"lblFirstName";
			this->lblFirstName->Size = System::Drawing::Size(28, 13);
			this->lblFirstName->TabIndex = 4;
			this->lblFirstName->Text = L"TVA";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(209, 19);
			this->txtFirstName->MaxLength = 10;
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(55, 20);
			this->txtFirstName->TabIndex = 3;
			this->txtFirstName->Text = L"20,0";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(6, 22);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(99, 13);
			this->lblName->TabIndex = 2;
			this->lblName->Text = L"Marge commerciale";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(102, 19);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(55, 20);
			this->txtName->TabIndex = 1;
			this->txtName->Text = L"15,0";
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
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(6, 79);
			this->button2->Margin = System::Windows::Forms::Padding(3, 10, 3, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Chiffre d\'affaires";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// gpbTurnOverMonth
			// 
			this->gpbTurnOverMonth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbTurnOverMonth->Controls->Add(this->numericUpDown2);
			this->gpbTurnOverMonth->Controls->Add(this->label1);
			this->gpbTurnOverMonth->Controls->Add(this->numericUpDown1);
			this->gpbTurnOverMonth->Controls->Add(this->lblFirstPurchase);
			this->gpbTurnOverMonth->Controls->Add(this->button2);
			this->gpbTurnOverMonth->Location = System::Drawing::Point(630, 35);
			this->gpbTurnOverMonth->Name = L"gpbTurnOverMonth";
			this->gpbTurnOverMonth->Size = System::Drawing::Size(172, 110);
			this->gpbTurnOverMonth->TabIndex = 14;
			this->gpbTurnOverMonth->TabStop = false;
			this->gpbTurnOverMonth->Text = L"Chiffre d\'affaires";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->AllowDrop = true;
			this->numericUpDown2->Location = System::Drawing::Point(50, 47);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(54, 20);
			this->numericUpDown2->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 49);
			this->label1->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Année";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->AllowDrop = true;
			this->numericUpDown1->Location = System::Drawing::Point(50, 24);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 20);
			this->numericUpDown1->TabIndex = 9;
			// 
			// lblFirstPurchase
			// 
			this->lblFirstPurchase->AutoSize = true;
			this->lblFirstPurchase->Location = System::Drawing::Point(6, 26);
			this->lblFirstPurchase->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->lblFirstPurchase->Name = L"lblFirstPurchase";
			this->lblFirstPurchase->Size = System::Drawing::Size(29, 13);
			this->lblFirstPurchase->TabIndex = 15;
			this->lblFirstPurchase->Text = L"Mois";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->nudClientId);
			this->groupBox2->Controls->Add(this->lblClientId);
			this->groupBox2->Controls->Add(this->btnClientTotalSpending);
			this->groupBox2->Location = System::Drawing::Point(630, 264);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(172, 79);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dépenses client";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 19);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Produits sous approvisionnés";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StatisticsForm::button4_Click);
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
			// btnClientTotalSpending
			// 
			this->btnClientTotalSpending->Location = System::Drawing::Point(6, 50);
			this->btnClientTotalSpending->Name = L"btnClientTotalSpending";
			this->btnClientTotalSpending->Size = System::Drawing::Size(152, 23);
			this->btnClientTotalSpending->TabIndex = 20;
			this->btnClientTotalSpending->Text = L"Calcul dépenses";
			this->btnClientTotalSpending->UseVisualStyleBackColor = true;
			// 
			// nudClientId
			// 
			this->nudClientId->AllowDrop = true;
			this->nudClientId->Location = System::Drawing::Point(56, 24);
			this->nudClientId->Name = L"nudClientId";
			this->nudClientId->Size = System::Drawing::Size(54, 20);
			this->nudClientId->TabIndex = 18;
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
			// button7
			// 
			this->button7->Location = System::Drawing::Point(122, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(110, 23);
			this->button7->TabIndex = 20;
			this->button7->Text = L"Prix d\'achat stock";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(238, 19);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(110, 23);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Prix de vente stock";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Location = System::Drawing::Point(12, 93);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(612, 52);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Calcul rapide stock";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Margin = System::Windows::Forms::Padding(3, 3, 3, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Panier Moyen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->btnMostSoldItems);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->btnLeastSoldItems);
			this->groupBox1->Location = System::Drawing::Point(630, 151);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(172, 107);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Affichage produits";
			// 
			// StatisticsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(814, 437);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->gpbTurnOverMonth);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbSearch);
			this->Controls->Add(this->dgvEmployees);
			this->Name = L"StatisticsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &StatisticsForm::statisticsLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmployees))->EndInit();
			this->gpbSearch->ResumeLayout(false);
			this->gpbSearch->PerformLayout();
			this->gpbTurnOverMonth->ResumeLayout(false);
			this->gpbTurnOverMonth->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudClientId))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void statisticsLoad(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
