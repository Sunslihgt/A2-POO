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


NS_Services::Client^ NS_Services::Services::createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = DB::Mapper::createClient(name, firstName, birthDate, firstPurchaseDate);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getClientById(id);
}

NS_Services::Client^ NS_Services::Services::getClientById(int idClient) {
	System::String^ sql = DB::Mapper::selectClientById(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
		return nullptr;
	}
	System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];

	try {
		int id = (int) row[0];
		System::String^ name = (System::String^) row[1];
		System::String^ firstName = (System::String^) row[2];
		System::DateTime^ birthDate = System::DateTime::Parse(System::Convert::ToString(row[3]));
		System::DateTime^ firstOrderDate = System::DateTime::Parse(System::Convert::ToString(row[4]));;
		return gcnew NS_Services::Client(id, name, firstName, birthDate, firstOrderDate);
	} catch (System::Exception^ ex) {
		return nullptr;
	}
}

System::Data::DataSet^ NS_Services::Services::selectClientDeliveryAddressesByIdClient(int idClient) {
	System::String^ sql = DB::Mapper::selectClientDeliveryAddressesByIdClient(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::selectClientBillingAddressesByIdClient(int idClient) {
	System::String^ sql = DB::Mapper::selectClientBillingAddressesByIdClient(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}
