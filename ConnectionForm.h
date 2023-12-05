#pragma once

#include "MainForm.h"
#include "Services.h"

namespace IHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConnectionForm
	/// </summary>
	public ref class ConnectionForm : public System::Windows::Forms::Form {
	public:
		ConnectionForm(void) {
			InitializeComponent();
			
			services = gcnew NS_Services::Services();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConnectionForm() {
			if (components) {
				delete components;
			}
		}

	private:
		NS_Services::Services^ services;

	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Button^ btnConnection;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblSecondTitle;
	private: System::Windows::Forms::GroupBox^ gpbConnection;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Label^ lblPassword;

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
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->btnConnection = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblSecondTitle = (gcnew System::Windows::Forms::Label());
			this->gpbConnection = (gcnew System::Windows::Forms::GroupBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->gpbConnection->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtLogin
			// 
			this->txtLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtLogin->Location = System::Drawing::Point(83, 19);
			this->txtLogin->MaxLength = 50;
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(141, 20);
			this->txtLogin->TabIndex = 0;
			this->txtLogin->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConnectionForm::txtLoginKeyDown);
			// 
			// lblLogin
			// 
			this->lblLogin->Location = System::Drawing::Point(6, 22);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(71, 17);
			this->lblLogin->TabIndex = 1;
			this->lblLogin->Text = L"Identifiant";
			// 
			// btnConnection
			// 
			this->btnConnection->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnConnection->Location = System::Drawing::Point(6, 83);
			this->btnConnection->Name = L"btnConnection";
			this->btnConnection->Size = System::Drawing::Size(218, 26);
			this->btnConnection->TabIndex = 2;
			this->btnConnection->Text = L"Connexion";
			this->btnConnection->UseVisualStyleBackColor = true;
			this->btnConnection->Click += gcnew System::EventHandler(this, &ConnectionForm::btnConnectionClick);
			// 
			// lblTitle
			// 
			this->lblTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(12, 9);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(296, 25);
			this->lblTitle->TabIndex = 3;
			this->lblTitle->Text = L"Projet POO";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// lblSecondTitle
			// 
			this->lblSecondTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblSecondTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSecondTitle->Location = System::Drawing::Point(13, 49);
			this->lblSecondTitle->Margin = System::Windows::Forms::Padding(3, 15, 3, 0);
			this->lblSecondTitle->Name = L"lblSecondTitle";
			this->lblSecondTitle->Size = System::Drawing::Size(296, 25);
			this->lblSecondTitle->TabIndex = 4;
			this->lblSecondTitle->Text = L"Connexion";
			this->lblSecondTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// gpbConnection
			// 
			this->gpbConnection->Controls->Add(this->txtPassword);
			this->gpbConnection->Controls->Add(this->lblPassword);
			this->gpbConnection->Controls->Add(this->txtLogin);
			this->gpbConnection->Controls->Add(this->btnConnection);
			this->gpbConnection->Controls->Add(this->lblLogin);
			this->gpbConnection->Location = System::Drawing::Point(45, 90);
			this->gpbConnection->Name = L"gpbConnection";
			this->gpbConnection->Size = System::Drawing::Size(230, 115);
			this->gpbConnection->TabIndex = 5;
			this->gpbConnection->TabStop = false;
			// 
			// txtPassword
			// 
			this->txtPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtPassword->Location = System::Drawing::Point(83, 52);
			this->txtPassword->MaxLength = 50;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(141, 20);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConnectionForm::txtPasswordKeyDown);
			// 
			// lblPassword
			// 
			this->lblPassword->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lblPassword->Location = System::Drawing::Point(6, 55);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(71, 17);
			this->lblPassword->TabIndex = 3;
			this->lblPassword->Text = L"Mot de passe";
			// 
			// ConnectionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 236);
			this->Controls->Add(this->gpbConnection);
			this->Controls->Add(this->lblSecondTitle);
			this->Controls->Add(this->lblTitle);
			this->Name = L"ConnectionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ConnectionForm";
			this->gpbConnection->ResumeLayout(false);
			this->gpbConnection->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void txtLoginKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {  // Démarre la connexion si l'utilisateur appuie sur la touche entrée
			connection();
		}
	}
	private: System::Void txtPasswordKeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {  // Démarre la connexion si l'utilisateur appuie sur la touche entrée
			connection();
		}
	}

	private: System::Void btnConnectionClick(System::Object^ sender, System::EventArgs^ e) {
		connection();  // Démarre la connexion
	}

		   // Se connecte à la base de données puis lance le MainForm
	private: System::Void connection() {
		//MessageBox::Show("Création de l'application en cours", "Connexion (WIP)", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Connexion à la base de données
		// DB::DBController dbController = gcnew DB::DBController(this->txtLogin->Text, this->txtPassword->Text);

		// Création du MainForm
		IHM::MainForm^ mainForm = gcnew MainForm(services);

		// Affichage du MainForm
		mainForm->ShowDialog();

		delete mainForm;  // Suppression du MainForm
	}

	};

}
