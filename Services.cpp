#include "Services.h"
#include "Mapper.h"

NS_Services::Services::Services() {
	this->dbController = gcnew NS_DB::DBController();
}

// Connection à la base de données
bool NS_Services::Services::connectDB(System::String^ login, System::String^ password) {
	return dbController->connect(login, password);
}


/* SEARCH */
System::Data::DataSet^ NS_Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = NS_DB::Mapper::searchClients(name, firstName, birthDate, firstPurchaseDate);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::String^ sql = NS_DB::Mapper::searchEmployees(name, firstName, streetName, streetNumber, cityName);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchItems(System::String^ name, System::String^ reference) {
	System::String^ sql = NS_DB::Mapper::searchItems(name, reference);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, int idClient) {
	System::String^ sql = NS_DB::Mapper::searchPurchases(clientName, clientFirstName, purchaseDate, payDate, deliveryDate, idClient);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchAddresses(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ sql = NS_DB::Mapper::searchAddresses(streetName, streetNumber, idCity);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchCities(System::String^ cityName) {
	System::String^ sql = NS_DB::Mapper::searchCities(cityName);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}


/* CREATE */
System::Data::DataSet^ NS_Services::Services::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress) {
	System::String^ sql = NS_DB::Mapper::createEmployee(name, firstName, startDate, idAddress);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getEmployeeById(id);
}

// Crée un employé à l'aide d'une adresse (si l'adresse n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity) {
	System::Data::DataSet^ dataSetSearchAddress = this->searchAddresses(streetName, streetNumber, idCity);
	if (dataSetSearchAddress->Tables->Count == 0 || dataSetSearchAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'existe pas
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
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

// Crée un employé à l'aide d'une adresse et d'un nom de ville (si l'adresse ou la ville n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu être créée
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
	System::String^ sql = NS_DB::Mapper::createClient(name, firstName, birthDate, firstPurchaseDate);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getClientById(id);
}

System::Data::DataSet^ NS_Services::Services::createCity(System::String^ cityName) {
	System::String^ sql = NS_DB::Mapper::createCity(cityName);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getCityById(id);
}

System::Data::DataSet^ NS_Services::Services::createAddress(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ sql = NS_DB::Mapper::createAddress(streetName, streetNumber, idCity);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getAddressById(id);
}

// Crée une adresse à l'aide d'un nom de ville (si la ville n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::createAddress(System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
			return nullptr;
		}
		return dataSetCreateAddress;  // L'adresse a été créée et la ville n'existait pas déjà
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
			return nullptr;
		}
		return dataSetCreateAddress;  // L'adresse a été créée et la ville existait déjà
	}
}

System::Data::DataSet^ NS_Services::Services::createItem(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
	System::String^ sql = NS_DB::Mapper::createItem(name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return NS_Services::Services::getItemById(id);
}

/* GET BY ID */
System::Data::DataSet^ NS_Services::Services::getClientById(int idClient) {
	System::String^ sql = NS_DB::Mapper::selectClientById(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getEmployeeById(int idEmployee) {
	System::String^ sql = NS_DB::Mapper::selectEmployeeById(idEmployee);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getCityById(int idCity) {
	System::String^ sql = NS_DB::Mapper::selectCityById(idCity);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getAddressById(int idAddress) {
	System::String^ sql = NS_DB::Mapper::selectAddressById(idAddress);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getItemById(int idItem) {
	System::String^ sql = NS_DB::Mapper::selectItemById(idItem);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

/* UPDATE */
System::Data::DataSet^ NS_Services::Services::updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ sql = NS_DB::Mapper::updateClient(idClient, name, firstName, birthDate, firstPurchaseDate);
	bool updated = this->dbController->actionRows(sql);
	return this->getClientById(idClient);
}

// Crée un client à l'aide d'une adresse
System::Data::DataSet^ NS_Services::Services::updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress) {
	System::String^ sql = NS_DB::Mapper::updateEmployee(idEmployee, name, firstName, startDate, idAddress);
	bool updated = this->dbController->actionRows(sql);
	return this->getEmployeeById(idEmployee);
}

// Crée un employé à l'aide d'une adresse (si l'adresse n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity) {
	System::Data::DataSet^ dataSetSearchAddress = this->searchAddresses(streetName, streetNumber, idCity);
	int idAddress = -1;
	if (dataSetSearchAddress->Tables->Count == 0 || dataSetSearchAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'existe pas
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->updateEmployee(idEmployee, name, firstName, startDate, idAddress);
	} else {  // Si l'adresse existe
		System::Data::DataRow^ row = dataSetSearchAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->updateEmployee(idEmployee, name, firstName, startDate, idAddress);
	}
}

// Crée un employé à l'aide d'une adresse et d'un nom de ville (si l'adresse ou la ville n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	int idCity = -1;
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->updateEmployee(idEmployee, name, firstName, startDate, streetName, streetNumber, idCity);
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->updateEmployee(idEmployee, name, firstName, startDate, streetName, streetNumber, idCity);
	}
}

System::Data::DataSet^ NS_Services::Services::updateItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
	System::String^ sql = NS_DB::Mapper::updateItem(idItem, name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate);
	this->dbController->actionRows(sql);
	return this->getItemById(idItem);
}

/* DELETE */
bool NS_Services::Services::deleteEmployee(int idEmployee) {
	System::String^ sqlDeleteManageSuperior = NS_DB::Mapper::deleteManage(idEmployee, true);  // Supprime les relations de chef de l'employé
	this->dbController->actionRows(sqlDeleteManageSuperior);
	System::String^ sqlDeleteManageSubordinate = NS_DB::Mapper::deleteManage(idEmployee, false);  // Supprime les relations de subordonné de l'employé
	this->dbController->actionRows(sqlDeleteManageSubordinate);

	System::String^ sqlDeleteEmployee = NS_DB::Mapper::deleteEmployee(idEmployee);  // Supprime l'employé
	return this->dbController->actionRows(sqlDeleteEmployee);
}

bool NS_Services::Services::deleteClient(int idClient) {
	System::DateTime^ defaultDateTime = gcnew System::DateTime(1, 1, 1);
	System::String^ sqlSearchPurchases = NS_DB::Mapper::searchPurchases(gcnew System::String(""), gcnew System::String(""), defaultDateTime, defaultDateTime, defaultDateTime, idClient);
	System::Data::DataSet^ dataSetPurchases = this->dbController->getRows(sqlSearchPurchases);

	if (dataSetPurchases->Tables->Count == 0 || dataSetPurchases->Tables[0]->Rows->Count == 0) {
		System::String^ sqlDelete = NS_DB::Mapper::deleteClient(idClient);
		return this->dbController->actionRows(sqlDelete);
	} else {  // Si le client a des achats (référence au client dans la table Purchase)
		return false;  // Le client ne peut pas être supprimé (car référence étrangère)
	}
}

bool NS_Services::Services::deleteItem(int idItem) {
	// Vérification que l'item ne soit pas référencé dans la table PurchasedItem
	System::String^ sqlSearchPurchasedItems = NS_DB::Mapper::searchPurchasedItems(-1, idItem);
	System::Data::DataSet^ dataSetSearchPurchasedItems = this->dbController->getRows(sqlSearchPurchasedItems);

	if (dataSetSearchPurchasedItems->Tables->Count == 0 || dataSetSearchPurchasedItems->Tables[0]->Rows->Count == 0) {
		System::String^ sqlDeleteItem = NS_DB::Mapper::deleteItem(idItem);  // Supprime l'item
		return this->dbController->actionRows(sqlDeleteItem);
	} else {  // Si l'item est référencé dans la table PurchasedItem
		return false;  // L'item ne peut pas être supprimé (car référence étrangère)
	}
}

//System::Data::DataSet^ NS_Services::Services::selectClientDeliveryAddressesByIdClient(int idClient) {
//	System::String^ sql = NS_DB::Mapper::selectClientDeliveryAddressesByIdClient(idClient);
//	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
//	return dataSet;
//}

//System::Data::DataSet^ NS_Services::Services::selectClientBillingAddressesByIdClient(int idClient) {
//	System::String^ sql = NS_DB::Mapper::selectClientBillingAddressesByIdClient(idClient);
//	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
//	return dataSet;
//}
