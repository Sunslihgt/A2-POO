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
	/// Summary for EmployeeEditorForm
	/// </summary>
	public ref class EmployeeEditorForm : public System::Windows::Forms::Form {
	public:
		EmployeeEditorForm(NS_Services::Services^ services, bool alreadyExists, int id) {
			InitializeComponent();

			this->services = services;
			this->alreadyExists = alreadyExists;
			this->id = id;
			
			fillFieldsFromId();  // Remplissage des champs à partir de l'id
			enableButtons();  // Activation des boutons
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmployeeEditorForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;
		bool alreadyExists;
		int id;

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::GroupBox^ gpbInfos;
	private: System::Windows::Forms::TextBox^ txtFirstName;
	private: System::Windows::Forms::Label^ lblFirstName;
	private: System::Windows::Forms::Label^ lblStart;
	private: System::Windows::Forms::DateTimePicker^ dtpStart;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::GroupBox^ gpbAddress;
	private: System::Windows::Forms::Label^ lblCity;
	private: System::Windows::Forms::TextBox^ txtCity;
	private: System::Windows::Forms::TextBox^ txtStreet;
	private: System::Windows::Forms::Label^ lblStreet;
	private: System::Windows::Forms::NumericUpDown^ numStreetNumber;
	private: System::Windows::Forms::Label^ lblStreetNumber;
	private: System::Windows::Forms::Button^ btnCreateEmployee;
	private: System::Windows::Forms::Button^ btnUpdateEmployee;
	private: System::Windows::Forms::Button^ btnDeleteEmployee;

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
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->gpbInfos = (gcnew System::Windows::Forms::GroupBox());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->lblFirstName = (gcnew System::Windows::Forms::Label());
			this->lblStart = (gcnew System::Windows::Forms::Label());
			this->dtpStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->gpbAddress = (gcnew System::Windows::Forms::GroupBox());
			this->lblCity = (gcnew System::Windows::Forms::Label());
			this->txtCity = (gcnew System::Windows::Forms::TextBox());
			this->txtStreet = (gcnew System::Windows::Forms::TextBox());
			this->lblStreet = (gcnew System::Windows::Forms::Label());
			this->numStreetNumber = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblStreetNumber = (gcnew System::Windows::Forms::Label());
			this->btnCreateEmployee = (gcnew System::Windows::Forms::Button());
			this->btnUpdateEmployee = (gcnew System::Windows::Forms::Button());
			this->btnDeleteEmployee = (gcnew System::Windows::Forms::Button());
			this->gpbInfos->SuspendLayout();
			this->gpbAddress->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(346, 23);
			this->lblTitle->TabIndex = 13;
			this->lblTitle->Text = L"Employé";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// gpbInfos
			// 
			this->gpbInfos->Controls->Add(this->txtFirstName);
			this->gpbInfos->Controls->Add(this->lblFirstName);
			this->gpbInfos->Controls->Add(this->lblStart);
			this->gpbInfos->Controls->Add(this->dtpStart);
			this->gpbInfos->Controls->Add(this->lblName);
			this->gpbInfos->Controls->Add(this->txtName);
			this->gpbInfos->Location = System::Drawing::Point(75, 48);
			this->gpbInfos->Name = L"gpbInfos";
			this->gpbInfos->Size = System::Drawing::Size(220, 99);
			this->gpbInfos->TabIndex = 14;
			this->gpbInfos->TabStop = false;
			this->gpbInfos->Text = L"Informations personnelles";
			// 
			// txtFirstName
			// 
			this->txtFirstName->Location = System::Drawing::Point(55, 45);
			this->txtFirstName->MaxLength = 50;
			this->txtFirstName->Name = L"txtFirstName";
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
			this->dtpStart->TabIndex = 3;
			this->dtpStart->Value = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			// 
			// lblName
			// 
			this->lblName->Location = System::Drawing::Point(6, 22);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(29, 13);
			this->lblName->TabIndex = 16;
			this->lblName->Text = L"Nom";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(55, 19);
			this->txtName->MaxLength = 50;
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(159, 20);
			this->txtName->TabIndex = 1;
			// 
			// gpbAddress
			// 
			this->gpbAddress->Controls->Add(this->lblCity);
			this->gpbAddress->Controls->Add(this->txtCity);
			this->gpbAddress->Controls->Add(this->txtStreet);
			this->gpbAddress->Controls->Add(this->lblStreet);
			this->gpbAddress->Controls->Add(this->numStreetNumber);
			this->gpbAddress->Controls->Add(this->lblStreetNumber);
			this->gpbAddress->Location = System::Drawing::Point(75, 153);
			this->gpbAddress->Name = L"gpbAddress";
			this->gpbAddress->Size = System::Drawing::Size(220, 104);
			this->gpbAddress->TabIndex = 23;
			this->gpbAddress->TabStop = false;
			this->gpbAddress->Text = L"Adresse";
			// 
			// lblCity
			// 
			this->lblCity->AutoSize = true;
			this->lblCity->Location = System::Drawing::Point(5, 77);
			this->lblCity->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblCity->Name = L"lblCity";
			this->lblCity->Size = System::Drawing::Size(26, 13);
			this->lblCity->TabIndex = 17;
			this->lblCity->Text = L"Ville";
			// 
			// txtCity
			// 
			this->txtCity->Location = System::Drawing::Point(54, 74);
			this->txtCity->MaxLength = 50;
			this->txtCity->Name = L"txtCity";
			this->txtCity->Size = System::Drawing::Size(160, 20);
			this->txtCity->TabIndex = 6;
			// 
			// txtStreet
			// 
			this->txtStreet->Location = System::Drawing::Point(54, 48);
			this->txtStreet->MaxLength = 50;
			this->txtStreet->Name = L"txtStreet";
			this->txtStreet->Size = System::Drawing::Size(160, 20);
			this->txtStreet->TabIndex = 5;
			// 
			// lblStreet
			// 
			this->lblStreet->AutoSize = true;
			this->lblStreet->Location = System::Drawing::Point(5, 51);
			this->lblStreet->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblStreet->Name = L"lblStreet";
			this->lblStreet->Size = System::Drawing::Size(27, 13);
			this->lblStreet->TabIndex = 20;
			this->lblStreet->Text = L"Rue";
			// 
			// numStreetNumber
			// 
			this->numStreetNumber->AllowDrop = true;
			this->numStreetNumber->Location = System::Drawing::Point(118, 20);
			this->numStreetNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
			this->numStreetNumber->Name = L"numStreetNumber";
			this->numStreetNumber->Size = System::Drawing::Size(96, 20);
			this->numStreetNumber->TabIndex = 4;
			// 
			// lblStreetNumber
			// 
			this->lblStreetNumber->AutoSize = true;
			this->lblStreetNumber->Location = System::Drawing::Point(6, 22);
			this->lblStreetNumber->Name = L"lblStreetNumber";
			this->lblStreetNumber->Size = System::Drawing::Size(42, 13);
			this->lblStreetNumber->TabIndex = 18;
			this->lblStreetNumber->Text = L"N° Rue";
			// 
			// btnCreateEmployee
			// 
			this->btnCreateEmployee->Location = System::Drawing::Point(75, 263);
			this->btnCreateEmployee->Name = L"btnCreateEmployee";
			this->btnCreateEmployee->Size = System::Drawing::Size(220, 23);
			this->btnCreateEmployee->TabIndex = 7;
			this->btnCreateEmployee->Text = L"Créer";
			this->btnCreateEmployee->UseVisualStyleBackColor = true;
			this->btnCreateEmployee->Click += gcnew System::EventHandler(this, &EmployeeEditorForm::btnCreateEmployeeClick);
			// 
			// btnUpdateEmployee
			// 
			this->btnUpdateEmployee->Location = System::Drawing::Point(75, 292);
			this->btnUpdateEmployee->Name = L"btnUpdateEmployee";
			this->btnUpdateEmployee->Size = System::Drawing::Size(220, 23);
			this->btnUpdateEmployee->TabIndex = 8;
			this->btnUpdateEmployee->Text = L"Modifier";
			this->btnUpdateEmployee->UseVisualStyleBackColor = true;
			this->btnUpdateEmployee->Click += gcnew System::EventHandler(this, &EmployeeEditorForm::btnUpdateEmployeeClick);
			// 
			// btnDeleteEmployee
			// 
			this->btnDeleteEmployee->Location = System::Drawing::Point(75, 321);
			this->btnDeleteEmployee->Name = L"btnDeleteEmployee";
			this->btnDeleteEmployee->Size = System::Drawing::Size(220, 23);
			this->btnDeleteEmployee->TabIndex = 9;
			this->btnDeleteEmployee->Text = L"Supprimer";
			this->btnDeleteEmployee->UseVisualStyleBackColor = true;
			this->btnDeleteEmployee->Click += gcnew System::EventHandler(this, &EmployeeEditorForm::btnDeleteEmployeeClick);
			// 
			// EmployeeEditorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 351);
			this->Controls->Add(this->btnDeleteEmployee);
			this->Controls->Add(this->btnUpdateEmployee);
			this->Controls->Add(this->btnCreateEmployee);
			this->Controls->Add(this->gpbAddress);
			this->Controls->Add(this->gpbInfos);
			this->Controls->Add(this->lblTitle);
			this->MaximumSize = System::Drawing::Size(386, 390);
			this->MinimumSize = System::Drawing::Size(386, 390);
			this->Name = L"EmployeeEditorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EmployeeEditorForm";
			this->gpbInfos->ResumeLayout(false);
			this->gpbInfos->PerformLayout();
			this->gpbAddress->ResumeLayout(false);
			this->gpbAddress->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void btnCreateEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
			if (this->alreadyExists) {
				MessageBox::Show("Ouvrez l'éditeur d'employé en mode création pour créer un nouveu client", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la création si l'employé existe déjà
			}
			if (this->txtName->Text->Length == 0) {
				MessageBox::Show("Le nom ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtFirstName->Text->Length == 0) {
				MessageBox::Show("Le prénom ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtStreet->Text->Length == 0) {
				MessageBox::Show("La rue ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->numStreetNumber->Value <= 0) {
				MessageBox::Show("Le numéro de rue ne peut pas être inférieur ou égal à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtCity->Text->Length == 0) {
				MessageBox::Show("La ville ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (System::DateTime::Compare(this->dtpStart->Value, *NS_Services::Services::MIN_DATETIME) <= 0) {
				MessageBox::Show("La date d'embauche ne peut pas être antérieure au 01/01/1900.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Création de l'employé
			System::Data::DataSet^ dataSet = this->services->createEmployee(this->txtName->Text, this->txtFirstName->Text, this->dtpStart->Value, this->txtStreet->Text, (int) this->numStreetNumber->Value, this->txtCity->Text);
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				this->id = System::Convert::ToInt32(row[0]);  // Récupération de l'id de l'employé
				fillFieldsFromDataSet(dataSet);  // Update des champs
				alreadyExists = true;  // Le client existe maintenant
				enableButtons();  // Activation des boutons
			} else {
				MessageBox::Show("Une erreur est survenue lors de la création de l'employé.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		System::Void btnUpdateEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
			if (!this->alreadyExists) {
				MessageBox::Show("Ouvrez l'éditeur d'employé en mode modification pour modifier un employé", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la modification si l'employé n'existe pas
			}
			if (this->txtName->Text->Length == 0) {
				MessageBox::Show("Le nom ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtFirstName->Text->Length == 0) {
				MessageBox::Show("Le prénom ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtStreet->Text->Length == 0) {
				MessageBox::Show("La rue ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->numStreetNumber->Value <= 0) {
				MessageBox::Show("Le numéro de rue ne peut pas être inférieur ou égal à 0.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (this->txtCity->Text->Length == 0) {
				MessageBox::Show("La ville ne peut pas être vide.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			if (System::DateTime::Compare(this->dtpStart->Value, *NS_Services::Services::MIN_DATETIME) <= 0) {
				MessageBox::Show("La date d'embauche ne peut pas être antérieure au 01/01/1900.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Modification de l'employé
			System::Data::DataSet^ dataSet = this->services->updateEmployee(this->id, this->txtName->Text, this->txtFirstName->Text, this->dtpStart->Value, this->txtStreet->Text, (int) this->numStreetNumber->Value, this->txtCity->Text);
			fillFieldsFromDataSet(dataSet);  // Update des champs
		}

		System::Void btnDeleteEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
			if (!this->alreadyExists) {
				MessageBox::Show("Ouvrez l'éditeur d'employé en mode modification pour supprimer un employé", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;  // Ne pas permettre la suppression si l'employé n'existe pas
			}

			// Suppression de l'employé
			bool deleted = this->services->deleteEmployee(this->id);
			if (deleted) {
				MessageBox::Show("Employé supprimé.", "Ok", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Close();
			} else {
				MessageBox::Show("Une erreur est survenue lors de la suppression de l'employé.", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		// Désactive le bouton de création si l'employé existe déjà
		// Désactive les boutons de modification et de suppression si l'employé n'existe pas encore
		System::Void enableButtons() {
			if (alreadyExists) {
				this->btnCreateEmployee->Enabled = false;
				this->btnUpdateEmployee->Enabled = true;
				this->btnDeleteEmployee->Enabled = true;
			} else {
				this->btnCreateEmployee->Enabled = true;
				this->btnUpdateEmployee->Enabled = false;
				this->btnDeleteEmployee->Enabled = false;
			}
		}

		System::Void fillFieldsFromId() {
			if (alreadyExists && this->id >= 0) {
				System::Data::DataSet^ dataSet = this->services->getEmployeeById(this->id);
				fillFieldsFromDataSet(dataSet);
			}
		}

		System::Void fillFieldsFromDataSet(System::Data::DataSet^ dataSet) {
			if (dataSet != nullptr && dataSet->Tables->Count > 0 && dataSet->Tables[0]->Rows->Count > 0) {
				System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
				// e.idEmployee, e.name, e.firstName, e.startDate, e.idAddress, a.streetName, a.streetNumber, ci.cityName
				this->txtName->Text = row[1]->ToString();
				this->txtFirstName->Text = row[2]->ToString();
				this->dtpStart->Value = System::DateTime::Parse(System::Convert::ToString(row[3]));
				this->txtStreet->Text = row[5]->ToString();
				this->numStreetNumber->Value = System::Convert::ToInt32(row[6]);
				this->txtCity->Text = row[7]->ToString();
			}
		}
	};
}
