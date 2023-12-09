#pragma once

#include "EmployeeEditorForm.h"
#include "Services.h"

namespace NS_IHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de EmployeeList
	/// </summary>
	public ref class EmployeeListForm : public System::Windows::Forms::Form {
	public:
		EmployeeListForm(NS_Services::Services^ services) {
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
		~EmployeeListForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;

	private: System::Windows::Forms::DataGridView^ dgvEmployees;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnOpenEmployee;
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
	private: System::Windows::Forms::GroupBox^ gpbOpen;
	private: System::Windows::Forms::NumericUpDown^ numIdEmployee;
	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::GroupBox^ gpbCreate;
	private: System::Windows::Forms::Button^ btnCreateEmployee;
	private: System::Windows::Forms::Button^ btnSearchEmployees;
	private: System::Windows::Forms::Label^ lblTitle;

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
			this->gpbCreate = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateEmployee = (gcnew System::Windows::Forms::Button());
			this->gpbOpen = (gcnew System::Windows::Forms::GroupBox());
			this->numIdEmployee = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btnOpenEmployee = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmployees))->BeginInit();
			this->gpbSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->BeginInit();
			this->gpbCreate->SuspendLayout();
			this->gpbOpen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvEmployees
			// 
			this->dgvEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvEmployees->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvEmployees->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dgvEmployees->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dgvEmployees->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEmployees->Location = System::Drawing::Point(12, 131);
			this->dgvEmployees->Name = L"dgvEmployees";
			this->dgvEmployees->ReadOnly = true;
			this->dgvEmployees->RowHeadersVisible = false;
			this->dgvEmployees->Size = System::Drawing::Size(513, 294);
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
			this->gpbSearch->Size = System::Drawing::Size(681, 90);
			this->gpbSearch->TabIndex = 4;
			this->gpbSearch->TabStop = false;
			this->gpbSearch->Text = L"Rechercher";
			// 
			// btnSearchEmployees
			// 
			this->btnSearchEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearchEmployees->Location = System::Drawing::Point(525, 55);
			this->btnSearchEmployees->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnSearchEmployees->Name = L"btnSearchEmployees";
			this->btnSearchEmployees->Size = System::Drawing::Size(150, 23);
			this->btnSearchEmployees->TabIndex = 6;
			this->btnSearchEmployees->Text = L"Chercher";
			this->btnSearchEmployees->UseVisualStyleBackColor = true;
			this->btnSearchEmployees->Click += gcnew System::EventHandler(this, &EmployeeListForm::btnSearchEmployeesClick);
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
			this->txtCityName->MaxLength = 50;
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
			this->txtStreetName->MaxLength = 50;
			this->txtStreetName->Name = L"txtStreetName";
			this->txtStreetName->Size = System::Drawing::Size(163, 20);
			this->txtStreetName->TabIndex = 7;
			// 
			// numStreetNumber
			// 
			this->numStreetNumber->AllowDrop = true;
			this->numStreetNumber->Location = System::Drawing::Point(54, 58);
			this->numStreetNumber->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				999999, 0, 0, 0
			});
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
			this->gpbCreate->Location = System::Drawing::Point(531, 224);
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
			this->btnCreateEmployee->Click += gcnew System::EventHandler(this, &EmployeeListForm::btnCreateEmployeeClick);
			// 
			// gpbOpen
			// 
			this->gpbOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbOpen->Controls->Add(this->numIdEmployee);
			this->gpbOpen->Controls->Add(this->lblId);
			this->gpbOpen->Controls->Add(this->btnOpenEmployee);
			this->gpbOpen->Location = System::Drawing::Point(531, 131);
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
				999999, 0, 0, 0
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
			this->btnOpenEmployee->Click += gcnew System::EventHandler(this, &EmployeeListForm::btnOpenEmployeeClick);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(681, 23);
			this->lblTitle->TabIndex = 12;
			this->lblTitle->Text = L"Gestion des employés";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// EmployeeListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 437);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbCreate);
			this->Controls->Add(this->gpbOpen);
			this->Controls->Add(this->gpbSearch);
			this->Controls->Add(this->dgvEmployees);
			this->MinimumSize = System::Drawing::Size(700, 325);
			this->Name = L"EmployeeListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Employés";
			this->Load += gcnew System::EventHandler(this, &EmployeeListForm::employeeListLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEmployees))->EndInit();
			this->gpbSearch->ResumeLayout(false);
			this->gpbSearch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numStreetNumber))->EndInit();
			this->gpbCreate->ResumeLayout(false);
			this->gpbOpen->ResumeLayout(false);
			this->gpbOpen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void employeeListLoad(System::Object^ sender, System::EventArgs^ e) {
		updateDgv();
	}
	private: System::Void btnSearchEmployeesClick(System::Object^ sender, System::EventArgs^ e) {
		updateDgv();
	}

	private: System::Void btnCreateEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
		EmployeeEditorForm^ employeeEditorForm = gcnew EmployeeEditorForm(services, false, -1);
		employeeEditorForm->ShowDialog();
		updateDgv();
	}

	private: System::Void btnOpenEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
		int idEmployee = Decimal::ToInt32(this->numIdEmployee->Value);
		if (idEmployee > 0) {
			System::Data::DataSet^ dataSet = services->getEmployeeById(idEmployee);
			if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
				MessageBox::Show("L'employé n'existe pas", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			} else {
				EmployeeEditorForm^ employeeEditorForm = gcnew EmployeeEditorForm(services, true, idEmployee);
				employeeEditorForm->ShowDialog();
				updateDgv();
			}
		} else {
			MessageBox::Show("L'id doit être supérieur ou égal à 0", "Erreur", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}

	private:
		// Fait une recherche dans la base de données à l'aide des critères de recherche et met à jour le DataGridView
		System::Void updateDgv() {
			DataSet^ data = services->searchEmployees(this->txtName->Text, this->txtFirstName->Text, this->txtStreetName->Text, System::Convert::ToInt32(this->numStreetNumber->Value), this->txtCityName->Text);
			this->dgvEmployees->DataSource = data->Tables[0];
		}
	};

}
