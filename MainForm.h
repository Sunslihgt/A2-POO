#pragma once

#include "EmployeeListForm.h"
#include "ClientListForm.h"
#include "ItemListForm.h"
#include "PurchaseListForm.h"
#include "StatisticsForm.h"
#include "Services.h"

namespace NS_IHM {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form {
	public:
		MainForm(NS_Services::Services^ services) {
			this->services = services;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Button^ btnClient;
	private: System::Windows::Forms::Button^ btnItem;
	private: System::Windows::Forms::Button^ btnPurchase;
	private: System::Windows::Forms::Button^ btnStatistics;
	private: System::Windows::Forms::Label^ lblSuperior;
	private: System::Windows::Forms::Label^ lblEmployee;
	private: System::Windows::Forms::Button^ btnEmployee;

	protected:

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
			this->lblSuperior = (gcnew System::Windows::Forms::Label());
			this->lblEmployee = (gcnew System::Windows::Forms::Label());
			this->btnEmployee = (gcnew System::Windows::Forms::Button());
			this->btnClient = (gcnew System::Windows::Forms::Button());
			this->btnItem = (gcnew System::Windows::Forms::Button());
			this->btnPurchase = (gcnew System::Windows::Forms::Button());
			this->btnStatistics = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(364, 25);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Projet POO";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblSuperior
			// 
			this->lblSuperior->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblSuperior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSuperior->Location = System::Drawing::Point(13, 59);
			this->lblSuperior->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->lblSuperior->Name = L"lblSuperior";
			this->lblSuperior->Size = System::Drawing::Size(359, 23);
			this->lblSuperior->TabIndex = 6;
			this->lblSuperior->Text = L"Supérieur";
			this->lblSuperior->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblEmployee
			// 
			this->lblEmployee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmployee->Location = System::Drawing::Point(13, 136);
			this->lblEmployee->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->lblEmployee->Name = L"lblEmployee";
			this->lblEmployee->Size = System::Drawing::Size(359, 23);
			this->lblEmployee->TabIndex = 7;
			this->lblEmployee->Text = L"Employé";
			this->lblEmployee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnEmployee
			// 
			this->btnEmployee->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnEmployee->Location = System::Drawing::Point(154, 85);
			this->btnEmployee->Name = L"btnEmployee";
			this->btnEmployee->Size = System::Drawing::Size(75, 23);
			this->btnEmployee->TabIndex = 1;
			this->btnEmployee->Text = L"Employés";
			this->btnEmployee->UseVisualStyleBackColor = true;
			this->btnEmployee->Click += gcnew System::EventHandler(this, &MainForm::btnEmployeeClick);
			// 
			// btnClient
			// 
			this->btnClient->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnClient->Location = System::Drawing::Point(154, 162);
			this->btnClient->Name = L"btnClient";
			this->btnClient->Size = System::Drawing::Size(75, 23);
			this->btnClient->TabIndex = 2;
			this->btnClient->Text = L"Clients";
			this->btnClient->UseVisualStyleBackColor = true;
			this->btnClient->Click += gcnew System::EventHandler(this, &MainForm::btnClientClick);
			// 
			// btnItem
			// 
			this->btnItem->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnItem->Location = System::Drawing::Point(154, 191);
			this->btnItem->Name = L"btnItem";
			this->btnItem->Size = System::Drawing::Size(75, 23);
			this->btnItem->TabIndex = 3;
			this->btnItem->Text = L"Produits";
			this->btnItem->UseVisualStyleBackColor = true;
			this->btnItem->Click += gcnew System::EventHandler(this, &MainForm::btnItemClick);
			// 
			// btnPurchase
			// 
			this->btnPurchase->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnPurchase->Location = System::Drawing::Point(154, 220);
			this->btnPurchase->Name = L"btnPurchase";
			this->btnPurchase->Size = System::Drawing::Size(75, 23);
			this->btnPurchase->TabIndex = 4;
			this->btnPurchase->Text = L"Commandes";
			this->btnPurchase->UseVisualStyleBackColor = true;
			this->btnPurchase->Click += gcnew System::EventHandler(this, &MainForm::btnPurchaseClick);
			// 
			// btnStatistics
			// 
			this->btnStatistics->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btnStatistics->Location = System::Drawing::Point(154, 249);
			this->btnStatistics->Name = L"btnStatistics";
			this->btnStatistics->Size = System::Drawing::Size(75, 23);
			this->btnStatistics->TabIndex = 5;
			this->btnStatistics->Text = L"Statistiques";
			this->btnStatistics->UseVisualStyleBackColor = true;
			this->btnStatistics->Click += gcnew System::EventHandler(this, &MainForm::btnStatisticsClick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 407);
			this->Controls->Add(this->lblEmployee);
			this->Controls->Add(this->lblSuperior);
			this->Controls->Add(this->btnStatistics);
			this->Controls->Add(this->btnPurchase);
			this->Controls->Add(this->btnItem);
			this->Controls->Add(this->btnClient);
			this->Controls->Add(this->btnEmployee);
			this->Controls->Add(this->lblTitle);
			this->MinimumSize = System::Drawing::Size(265, 335);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Projet POO - Groupe 1";
			this->Load += gcnew System::EventHandler(this, &MainForm::mainFormLoad);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainFormLoad(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnEmployeeClick(System::Object^ sender, System::EventArgs^ e) {
		NS_IHM::EmployeeListForm^ employeeListForm = gcnew EmployeeListForm(services);
		employeeListForm->ShowDialog();
	}

	private: System::Void btnClientClick(System::Object^ sender, System::EventArgs^ e) {
		NS_IHM::ClientListForm^ clientListForm = gcnew ClientListForm(services);
		clientListForm->ShowDialog();
	}

	private: System::Void btnItemClick(System::Object^ sender, System::EventArgs^ e) {
		NS_IHM::ItemListForm^ itemList = gcnew ItemListForm(services);
		itemList->ShowDialog();
	}

	private: System::Void btnPurchaseClick(System::Object^ sender, System::EventArgs^ e) {
		NS_IHM::PurchaseListForm^ purchaseListForm = gcnew PurchaseListForm(services);
		purchaseListForm->ShowDialog();
	}

	private: System::Void btnStatisticsClick(System::Object^ sender, System::EventArgs^ e) {
		NS_IHM::StatisticsForm^ statisticsForm = gcnew StatisticsForm(services);
		statisticsForm->ShowDialog();
	}

	public:
		// Permet de limiter la saisie à un nombre à virgule (Code utilisé dans tout le projet)
		static System::Void txtFloatKeyDown(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			if (sender->GetType() != System::Windows::Forms::TextBox::typeid) {
				return;  // On ne fait rien si ce n'est pas un TextBox
			}

			// On récupère le TextBox
			TextBox^ txtBoxFloat = (TextBox^) sender;


			if (e->KeyChar == ',') {  // On vérifie si le TextBox contient déjà une virgule
				if (txtBoxFloat->Text->Length == 0 || txtBoxFloat->Text->IndexOf(",") >= 0) {
					e->Handled = true;  // On bloque la saisie si le champ est vide ou s'il y a déjà une virgule
				}
			} else if ((e->KeyChar < '0' || e->KeyChar > '9') && e->KeyChar != (wchar_t) Keys::Back && e->KeyChar != (wchar_t) Keys::Delete) {
				e->Handled = true;  // On bloque la saisie si ce n'est pas un chiffre ou la touche effacer/supprimer
			}
		}
	};
}
