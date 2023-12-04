#pragma once

#include "ItemEditorForm.h"
#include "Services.h"

namespace IHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ItemList
	/// </summary>
	public ref class ItemListForm : public System::Windows::Forms::Form {
	public:
		ItemListForm(Services::Services^ services) {
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
		~ItemListForm() {
			if (components) {
				delete components;
			}
		}

	private:
		Services::Services^ services;

	private: System::Windows::Forms::DataGridView^ dgvItems;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnOpenEmployee;
	private: System::Windows::Forms::GroupBox^ gpbSearch;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblReference;
	private: System::Windows::Forms::TextBox^ txtReference;
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
			this->dgvItems = (gcnew System::Windows::Forms::DataGridView());
			this->gpbSearch = (gcnew System::Windows::Forms::GroupBox());
			this->btnSearchEmployees = (gcnew System::Windows::Forms::Button());
			this->lblReference = (gcnew System::Windows::Forms::Label());
			this->txtReference = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->gpbCreate = (gcnew System::Windows::Forms::GroupBox());
			this->btnCreateEmployee = (gcnew System::Windows::Forms::Button());
			this->gpbOpen = (gcnew System::Windows::Forms::GroupBox());
			this->numIdEmployee = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->btnOpenEmployee = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItems))->BeginInit();
			this->gpbSearch->SuspendLayout();
			this->gpbCreate->SuspendLayout();
			this->gpbOpen->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvItems
			// 
			this->dgvItems->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvItems->Location = System::Drawing::Point(12, 93);
			this->dgvItems->Name = L"dgvItems";
			this->dgvItems->Size = System::Drawing::Size(690, 275);
			this->dgvItems->TabIndex = 0;
			// 
			// gpbSearch
			// 
			this->gpbSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gpbSearch->Controls->Add(this->btnSearchEmployees);
			this->gpbSearch->Controls->Add(this->lblReference);
			this->gpbSearch->Controls->Add(this->txtReference);
			this->gpbSearch->Controls->Add(this->lblName);
			this->gpbSearch->Controls->Add(this->txtName);
			this->gpbSearch->Location = System::Drawing::Point(12, 35);
			this->gpbSearch->Name = L"gpbSearch";
			this->gpbSearch->Size = System::Drawing::Size(858, 52);
			this->gpbSearch->TabIndex = 4;
			this->gpbSearch->TabStop = false;
			this->gpbSearch->Text = L"Rechercher";
			// 
			// btnSearchEmployees
			// 
			this->btnSearchEmployees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSearchEmployees->Location = System::Drawing::Point(702, 17);
			this->btnSearchEmployees->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btnSearchEmployees->Name = L"btnSearchEmployees";
			this->btnSearchEmployees->Size = System::Drawing::Size(150, 23);
			this->btnSearchEmployees->TabIndex = 6;
			this->btnSearchEmployees->Text = L"Chercher";
			this->btnSearchEmployees->UseVisualStyleBackColor = true;
			// 
			// lblReference
			// 
			this->lblReference->AutoSize = true;
			this->lblReference->Location = System::Drawing::Point(179, 22);
			this->lblReference->Margin = System::Windows::Forms::Padding(15, 0, 3, 0);
			this->lblReference->Name = L"lblReference";
			this->lblReference->Size = System::Drawing::Size(57, 13);
			this->lblReference->TabIndex = 4;
			this->lblReference->Text = L"Référence";
			// 
			// txtReference
			// 
			this->txtReference->Location = System::Drawing::Point(242, 19);
			this->txtReference->Name = L"txtReference";
			this->txtReference->Size = System::Drawing::Size(120, 20);
			this->txtReference->TabIndex = 3;
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
			this->txtName->Size = System::Drawing::Size(120, 20);
			this->txtName->TabIndex = 1;
			// 
			// gpbCreate
			// 
			this->gpbCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbCreate->Controls->Add(this->btnCreateEmployee);
			this->gpbCreate->Location = System::Drawing::Point(708, 186);
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
			this->btnCreateEmployee->Click += gcnew System::EventHandler(this, &ItemListForm::btnCreateItemClick);
			// 
			// gpbOpen
			// 
			this->gpbOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->gpbOpen->Controls->Add(this->numIdEmployee);
			this->gpbOpen->Controls->Add(this->lblId);
			this->gpbOpen->Controls->Add(this->btnOpenEmployee);
			this->gpbOpen->Location = System::Drawing::Point(708, 93);
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
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(858, 23);
			this->lblTitle->TabIndex = 12;
			this->lblTitle->Text = L"Gestion du stock";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ItemListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 380);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->gpbCreate);
			this->Controls->Add(this->gpbOpen);
			this->Controls->Add(this->gpbSearch);
			this->Controls->Add(this->dgvItems);
			this->Name = L"ItemListForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stock";
			this->Load += gcnew System::EventHandler(this, &ItemListForm::itemListLoad);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvItems))->EndInit();
			this->gpbSearch->ResumeLayout(false);
			this->gpbSearch->PerformLayout();
			this->gpbCreate->ResumeLayout(false);
			this->gpbOpen->ResumeLayout(false);
			this->gpbOpen->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numIdEmployee))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void itemListLoad(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnCreateItemClick(System::Object^ sender, System::EventArgs^ e) {
		ItemEditorForm^ itemEditorForm = gcnew ItemEditorForm(services, false);
		itemEditorForm->ShowDialog();
	}
	};
}
