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
	public ref class Statistics : public System::Windows::Forms::Form
	{
	public:
		Statistics(void)
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
		~Statistics()
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
	private: System::Windows::Forms::NumericUpDown^ numStreetNumber;
	private: System::Windows::Forms::Label^ lblStreetNumber;
	private: System::Windows::Forms::Label^ lblCityName;
	private: System::Windows::Forms::TextBox^ txtCityName;





	private: System::Windows::Forms::Button^ btnSearchEmployees;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ gpbTurnOverMonth;
	private: System::Windows::Forms::Label^ lblFirstPurchase;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;



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
			this->lblCityName = (gcnew System::Windows::Forms::Label());
			this->txtCityName = (gcnew System::Windows::Forms::TextBox());
			this->lblStreetName = (gcnew System::Windows::Forms::Label());
			this->txtStreetName = (gcnew System::Windows::Forms::TextBox());
			this->numStreetNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblStreetNumber = (gcnew System::Windows::Forms::Label());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->gpbTurnOverMonth = (gcnew System::Windows::Forms::GroupBox());
			this->lblFirstPurchase = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmployees))->BeginInit();
			this->gpbSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->BeginInit();
			this->gpbTurnOverMonth->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvEmployees
			// 
			this->dgvEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvEmployees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEmployees->Location = System::Drawing::Point(12, 131);
			this->dgvEmployees->Name = L"dgvEmployees";
			this->dgvEmployees->Size = System::Drawing::Size(510, 294);
			this->dgvEmployees->TabIndex = 0;
			// 
			// gpbSearch
			// 
			this->gpbSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbSearch->Controls->Add(this->btnSearchEmployees);
			this->gpbSearch->Controls->Add(this->lblCityName);
			this->gpbSearch->Controls->Add(this->txtCityName);
			this->gpbSearch->Controls->Add(this->lblStreetName);
			this->gpbSearch->Controls->Add(this->txtStreetName);
			this->gpbSearch->Controls->Add(this->numStreetNumber);
			this->gpbSearch->Controls->Add(this->lblStreetNumber);
			this->gpbSearch->Controls->Add(this->lblFirstName);
			this->gpbSearch->Controls->Add(this->txtFirstName);
			this->gpbSearch->Controls->Add(this->lblName);
			this->gpbSearch->Controls->Add(this->txtName);
			this->gpbSearch->Location = System::Drawing::Point(12, 35);
			this->gpbSearch->Name = L"gpbSearch";
			this->gpbSearch->Size = System::Drawing::Size(824, 90);
			this->gpbSearch->TabIndex = 4;
			this->gpbSearch->TabStop = false;
			this->gpbSearch->Text = L"Rechercher";
			// 
			// btnSearchEmployees
			// 
			this->btnSearchEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearchEmployees->Location = System::Drawing::Point(668, 55);
			this->btnSearchEmployees->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnSearchEmployees->Name = L"btnSearchEmployees";
			this->btnSearchEmployees->Size = System::Drawing::Size(150, 23);
			this->btnSearchEmployees->TabIndex = 6;
			this->btnSearchEmployees->Text = L"Chercher";
			this->btnSearchEmployees->UseVisualStyleBackColor = true;
			// 
			// lblCityName
			// 
			this->lblCityName->AutoSize = true;
			this->lblCityName->Location = System::Drawing::Point(326, 61);
			this->lblCityName->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblCityName->Name = L"lblCityName";
			this->lblCityName->Size = System::Drawing::Size(26, 13);
			this->lblCityName->TabIndex = 6;
			this->lblCityName->Text = L"Ville";
			// 
			// txtCityName
			// 
			this->txtCityName->Location = System::Drawing::Point(358, 58);
			this->txtCityName->Name = L"txtCityName";
			this->txtCityName->Size = System::Drawing::Size(139, 20);
			this->txtCityName->TabIndex = 5;
			// 
			// lblStreetName
			// 
			this->lblStreetName->AutoSize = true;
			this->lblStreetName->Location = System::Drawing::Point(115, 60);
			this->lblStreetName->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblStreetName->Name = L"lblStreetName";
			this->lblStreetName->Size = System::Drawing::Size(27, 13);
			this->lblStreetName->TabIndex = 8;
			this->lblStreetName->Text = L"Rue";
			// 
			// txtStreetName
			// 
			this->txtStreetName->Location = System::Drawing::Point(145, 58);
			this->txtStreetName->Name = L"txtStreetName";
			this->txtStreetName->Size = System::Drawing::Size(163, 20);
			this->txtStreetName->TabIndex = 7;
			// 
			// numStreetNumber
			// 
			this->numStreetNumber->AllowDrop = true;
			this->numStreetNumber->Location = System::Drawing::Point(54, 58);
			this->numStreetNumber->Name = L"numStreetNumber";
			this->numStreetNumber->Size = System::Drawing::Size(43, 20);
			this->numStreetNumber->TabIndex = 5;
			// 
			// lblStreetNumber
			// 
			this->lblStreetNumber->AutoSize = true;
			this->lblStreetNumber->Location = System::Drawing::Point(6, 60);
			this->lblStreetNumber->Name = L"lblStreetNumber";
			this->lblStreetNumber->Size = System::Drawing::Size(42, 13);
			this->lblStreetNumber->TabIndex = 6;
			this->lblStreetNumber->Text = L"N° Rue";
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
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(100, 20);
			this->txtName->TabIndex = 1;
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(824, 23);
			this->lblTitle->TabIndex = 12;
			this->lblTitle->Text = L"Statistiques";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(680, 163);
			this->button1->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Panier Moyen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(6, 72);
			this->button2->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Panier Moyen";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// gpbTurnOverMonth
			// 
			this->gpbTurnOverMonth->Controls->Add(this->numericUpDown2);
			this->gpbTurnOverMonth->Controls->Add(this->label1);
			this->gpbTurnOverMonth->Controls->Add(this->numericUpDown1);
			this->gpbTurnOverMonth->Controls->Add(this->lblFirstPurchase);
			this->gpbTurnOverMonth->Controls->Add(this->button2);
			this->gpbTurnOverMonth->Location = System::Drawing::Point(604, 286);
			this->gpbTurnOverMonth->Name = L"gpbTurnOverMonth";
			this->gpbTurnOverMonth->Size = System::Drawing::Size(164, 101);
			this->gpbTurnOverMonth->TabIndex = 14;
			this->gpbTurnOverMonth->TabStop = false;
			this->gpbTurnOverMonth->Text = L"Chiffre d\'affaires";
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
			// numericUpDown1
			// 
			this->numericUpDown1->AllowDrop = true;
			this->numericUpDown1->Location = System::Drawing::Point(50, 24);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 20);
			this->numericUpDown1->TabIndex = 9;
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
			// Statistics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 437);
			this->Controls->Add(this->gpbTurnOverMonth);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbSearch);
			this->Controls->Add(this->dgvEmployees);
			this->Name = L"Statistics";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statistiques";
			this->Load += gcnew System::EventHandler(this, &Statistics::statisticsLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmployees))->EndInit();
			this->gpbSearch->ResumeLayout(false);
			this->gpbSearch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->EndInit();
			this->gpbTurnOverMonth->ResumeLayout(false);
			this->gpbTurnOverMonth->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void statisticsLoad(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
