#include "DBController.h"

namespace NS_DB {
	DBController::DBController() {
		this->connected = false;
	}

	bool DBController::connect(System::String^ login, System::String^ password) {
		System::String^ connectionString = "Data Source = samuel-deschamps-serveur1.database.windows.net;Initial Catalog=A2POO-AzureDB;User ID=" + login + ";Password=" + password + "; Connect Timeout = 30; ";

		this->sqlConnection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
		this->sqlCommand = gcnew System::Data::SqlClient::SqlCommand(gcnew System::String("Rien"), this->sqlConnection);
		this->sqlDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();

		this->sqlCommand->CommandType = System::Data::CommandType::Text;

		try {
			this->sqlConnection->Open();
			this->connected = true;
			this->sqlConnection->Close();
			return true;
		} catch (System::Exception^ ex) {
			this->connected = false;
			return false;
		}

		return this->connected;
	}

	System::Data::DataSet^ DBController::getRows(System::String^ sql) {
		System::Data::DataSet^ dataSet = gcnew System::Data::DataSet();
		this->sqlCommand->CommandText = sql;
		this->sqlDataAdapter->SelectCommand = this->sqlCommand;
		this->sqlDataAdapter->Fill(dataSet);

		return dataSet;
	}

	// Exécute une requête de type "INSERT INTO"
	// Renvoit l'id de l'objet créé ou -1 en cas d'erreur
	int DBController::createObject(System::String^ sql) {
		this->sqlCommand->CommandText = sql;
		this->sqlDataAdapter->SelectCommand = this->sqlCommand;
		int newId = -1;
		try {
			this->sqlConnection->Open();
			newId = System::Convert::ToInt32(this->sqlCommand->ExecuteScalar());
			this->sqlConnection->Close();
		} catch (System::Exception^ ex) {
			return -1;
		}

		return newId;
	}

	// Exécute une requête de type "INSERT INTO" ou "UPDATE"
	// Renvoit false en cas d'erreur
	bool DBController::actionRows(System::String^ sql) {
		this->sqlCommand->CommandText = sql;
		this->sqlDataAdapter->SelectCommand = this->sqlCommand;
		try {
			this->sqlConnection->Open();
			this->sqlCommand->ExecuteNonQuery();
			this->sqlConnection->Close();
		} catch (System::Exception^ ex) {
			return false;
		}
		return true;
	}

	bool DBController::isConnected() {
		return this->connected;
	}
}