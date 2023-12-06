#include "DBController.h"

DB::DBController::DBController() {
	this->connected = false;
}

bool DB::DBController::connect(System::String^ login, System::String^ password) {
	System::String^ connectionString = "Data Source = samuel-deschamps-serveur1.database.windows.net;Initial Catalog=A2POO-AzureDB;User ID=" + login + ";Password=" + password + "; Connect Timeout = 30; ";

	this->sqlConnection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
	this->sqlCommand = gcnew System::Data::SqlClient::SqlCommand(gcnew System::String("Rien"), this->sqlConnection);
	this->sqlDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
	this->sqlDataSet = gcnew System::Data::DataSet();

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

System::Data::DataSet^ DB::DBController::getRows(System::String^ sql, System::String^ dataTableName) {
	this->sqlDataSet->Clear();
	this->sqlCommand->CommandText = sql;
	this->sqlDataAdapter->SelectCommand = this->sqlCommand;
	this->sqlDataAdapter->Fill(this->sqlDataSet);
	
	return this->sqlDataSet;
}

//System::Data::DataSet^ DB::DBController::getRow(System::String^ sql) {
//	throw gcnew System::NotImplementedException();
//	// TODO: insérer une instruction return ici
//}

System::Void DB::DBController::actionRows(System::String^ sql) {
	this->sqlCommand->CommandText = sql;
	this->sqlDataAdapter->SelectCommand = this->sqlCommand;
	this->sqlConnection->Open();
	this->sqlCommand->ExecuteNonQuery();
	this->sqlConnection->Close();
}

bool DB::DBController::isConnected() {
	return this->connected;
}
