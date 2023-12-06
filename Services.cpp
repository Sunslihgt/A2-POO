#include "Services.h"
#include "Mapper.h"

Services::Services::Services() {
	this->dbController = gcnew DB::DBController();
}

bool Services::Services::connectDB(System::String^ login, System::String^ password) {
	return dbController->connect(login, password);
}

System::Data::DataSet^ Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = DB::Mapper::searchClients(name, firstName, birthDate, firstPurchaseDate);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ Services::Services::searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::String^ sql = DB::Mapper::searchEmployees(name, firstName, streetName, streetNumber, cityName);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ Services::Services::searchItems(System::String^ name, System::String^ reference) {
	System::String^ sql = DB::Mapper::searchItems(name, reference);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ Services::Services::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate) {
	System::String^ sql = DB::Mapper::searchPurchases(clientName, clientFirstName, purchaseDate, payDate, deliveryDate);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}