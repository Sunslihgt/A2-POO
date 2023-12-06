#include "Services.h"
#include "Mapper.h"

NS_Services::Services::Services() {
	this->dbController = gcnew DB::DBController();
}

bool NS_Services::Services::connectDB(System::String^ login, System::String^ password) {
	return dbController->connect(login, password);
}

System::Data::DataSet^ NS_Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = DB::Mapper::searchClients(name, firstName, birthDate, firstPurchaseDate);
	System::Data::DataSet^ data = this->dbController->getRows(sql, "Clients");
	return data;
}