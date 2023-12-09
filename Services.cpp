#include "Services.h"
#include "Mapper.h"

NS_Services::Services::Services() {
	this->dbController = gcnew NS_DB::DBController();
}

// Connection � la base de donn�es
bool NS_Services::Services::connectDB(System::String^ login, System::String^ password) {
	return dbController->connect(login, password);
}


/* SEARCH */
System::Data::DataSet^ NS_Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = DB::Mapper::searchClients(name, firstName, birthDate, firstPurchaseDate);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::String^ sql = DB::Mapper::searchEmployees(name, firstName, streetName, streetNumber, cityName);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchItems(System::String^ name, System::String^ reference) {
	System::String^ sql = DB::Mapper::searchItems(name, reference);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, int idClient) {
	System::String^ sql = DB::Mapper::searchPurchases(clientName, clientFirstName, purchaseDate, payDate, deliveryDate, idClient);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchAddresses(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ sql = DB::Mapper::searchAddresses(streetName, streetNumber, idCity);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchCities(System::String^ cityName) {
	System::String^ sql = DB::Mapper::searchCities(cityName);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}


/* CREATE */
System::Data::DataSet^ NS_Services::Services::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress) {
	System::String^ sql = DB::Mapper::createEmployee(name, firstName, startDate, idAddress);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getClientById(id);
}

// Cr�e un employ� � l'aide d'une adresse (si l'adresse n'existe pas, elle est cr��e)
System::Data::DataSet^ NS_Services::Services::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity) {
	System::Data::DataSet^ dataSetSearchAddress = this->searchAddresses(streetName, streetNumber, idCity);
	if (dataSetSearchAddress->Tables->Count == 0 || dataSetSearchAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'existe pas
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu �tre cr��e
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->createEmployee(name, firstName, startDate, idAddress);
	} else {  // Si l'adresse existe
		System::Data::DataRow^ row = dataSetSearchAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->createEmployee(name, firstName, startDate, idAddress);
	}
}

// Cr�e un employ� � l'aide d'une adresse et d'un nom de ville (si l'adresse ou la ville n'existe pas, elle est cr��e)
System::Data::DataSet^ NS_Services::Services::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu �tre cr��e
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->createEmployee(name, firstName, startDate, streetName, streetNumber, idCity);
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->createEmployee(name, firstName, startDate, streetName, streetNumber, idCity);
	}
}

System::Data::DataSet^ NS_Services::Services::createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = DB::Mapper::createClient(name, firstName, birthDate, firstPurchaseDate);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getClientById(id);
}

System::Data::DataSet^ NS_Services::Services::createCity(System::String^ cityName) {
	System::String^ sql = DB::Mapper::createCity(cityName);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getCityById(id);
}

System::Data::DataSet^ NS_Services::Services::createAddress(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ sql = DB::Mapper::createAddress(streetName, streetNumber, idCity);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getAddressById(id);
}

// Cr�e une adresse � l'aide d'un nom de ville (si la ville n'existe pas, elle est cr��e)
System::Data::DataSet^ NS_Services::Services::createAddress(System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu �tre cr��e
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu �tre cr��e
			return nullptr;
		}
		return dataSetCreateAddress;  // L'adresse a �t� cr��e et la ville n'existait pas d�j�
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu �tre cr��e
			return nullptr;
		}
		return dataSetCreateAddress;  // L'adresse a �t� cr��e et la ville existait d�j�
	}
}

/* GET BY ID */
System::Data::DataSet^ NS_Services::Services::getClientById(int idClient) {
	System::String^ sql = DB::Mapper::selectClientById(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getEmployeeById(int idEmployee) {
	System::String^ sql = DB::Mapper::selectEmployeeById(idEmployee);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getCityById(int idCity) {
	System::String^ sql = DB::Mapper::selectCityById(idCity);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getAddressById(int idAddress) {
	System::String^ sql = DB::Mapper::selectAddressById(idAddress);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

/* UPDATE */
System::Data::DataSet^ NS_Services::Services::updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = DB::Mapper::updateClient(idClient, name, firstName, birthDate,  firstPurchaseDate);
	bool updated = this->dbController->actionRows(sql);
	return this->getClientById(idClient);
}

/* DELETE */
bool NS_Services::Services::deleteClient(int idClient) {
	System::DateTime^ defaultDateTime = gcnew System::DateTime(1, 1, 1);

	System::String^ sqlSearchPurchases = DB::Mapper::searchPurchases(gcnew System::String(""), gcnew System::String(""), defaultDateTime, defaultDateTime, defaultDateTime, idClient);
	System::Data::DataSet^ dataSetPurchases = this->dbController->getRows(sqlSearchPurchases);

	if (dataSetPurchases->Tables->Count == 0 || dataSetPurchases->Tables[0]->Rows->Count == 0) {
		System::String^ sqlDelete = DB::Mapper::deleteClient(idClient);
		return this->dbController->actionRows(sqlDelete);
	} else {  // Si le client a des achats (r�f�rence au client dans la table Purchase)
		return false;  // Le client ne peut pas �tre supprim� (car r�f�rence �trang�re)
	}
}

//System::Data::DataSet^ NS_Services::Services::selectClientDeliveryAddressesByIdClient(int idClient) {
//	System::String^ sql = DB::Mapper::selectClientDeliveryAddressesByIdClient(idClient);
//	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
//	return dataSet;
//}

//System::Data::DataSet^ NS_Services::Services::selectClientBillingAddressesByIdClient(int idClient) {
//	System::String^ sql = DB::Mapper::selectClientBillingAddressesByIdClient(idClient);
//	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
//	return dataSet;
//}
