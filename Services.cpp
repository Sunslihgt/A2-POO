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

System::Data::DataSet^ NS_Services::Services::searchPurchases(int idClient, System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate) {
	System::String^ sql = NS_DB::Mapper::searchPurchases(idClient, clientName, clientFirstName, purchaseDate, deliveryDate);
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

System::Data::DataSet^ NS_Services::Services::searchPaymentMethods(int idPaymentAddress, int idPurchase, int idPaymentType) {
	System::String^ sql = NS_DB::Mapper::searchPaymentMethods(idPaymentAddress, idPurchase, idPaymentType);
	System::Data::DataSet^ data = this->dbController->getRows(sql);
	return data;
}

System::Data::DataSet^ NS_Services::Services::searchPurchasedItems(int idPurchase, int idItem) {
	System::String^ sql = NS_DB::Mapper::searchPurchasedItems(idPurchase, idItem);
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
	return this->getEmployeeById(id);
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
	return this->getClientById(id);
}

System::Data::DataSet^ NS_Services::Services::createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, int idDeliveryAddress) {
	System::String^ sql = NS_DB::Mapper::createPurchase(purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, idDeliveryAddress);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return this->getPurchaseById(id);
}

// Crée un achat à l'aide d'une adresse (si l'adresse n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, int idCity) {
	System::Data::DataSet^ dataSetSearchAddress = this->searchAddresses(streetName, streetNumber, idCity);
	if (dataSetSearchAddress->Tables->Count == 0 || dataSetSearchAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'existe pas
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress == nullptr || dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->createPurchase(purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, idAddress);
	} else {  // Si l'adresse existe
		System::Data::DataRow^ row = dataSetSearchAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->createPurchase(purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, idAddress);
	}
}

// Crée un achat à l'aide d'une adresse et d'un nom de ville (si l'adresse ou la ville n'existe pas, elle est créée)
System::Data::DataSet^ NS_Services::Services::createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->createPurchase(purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, streetName, streetNumber, idCity);
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->createPurchase(purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, streetName, streetNumber, idCity);
	}
}

System::Data::DataSet^ NS_Services::Services::createPurchasedItem(int itemAmount, int idPurchase, int idItem) {
	System::Data::DataSet^ dataSetItem = this->getItemById(idItem);
	if (dataSetItem->Tables->Count == 0 || dataSetItem->Tables[0]->Rows->Count == 0) {  // Si l'item n'existe pas
		return nullptr;
	}
	System::Data::DataRow^ rowItem = dataSetItem->Tables[0]->Rows[0];

	float totalPrice = itemAmount * System::Convert::ToSingle(rowItem[7]->ToString());  // Quantité * prix unitaire
	float vatAmount = totalPrice * System::Convert::ToSingle(rowItem[8]->ToString()) / 100;  // Prix total * pourcentage de TVA / 100

	if (itemAmount > (int) rowItem[4]) {  // Si la quantité demandée est supérieure à la quantité disponible
		return nullptr;  // Impossible de commander plus d'items que la quantité disponible
	}

	System::String^ sql = NS_DB::Mapper::createPurchasedItem(itemAmount, totalPrice, vatAmount, idPurchase, idItem);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return this->getPurchasedItemById(id);
}

System::Data::DataSet^ NS_Services::Services::createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, int idPaymentAddress) {
	System::String^ sql = NS_DB::Mapper::createPaymentMethod(name, firstName, amount, payDate, idPaymentType, idPurchase, idPaymentAddress);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return this->getPaymentMethodById(id);
}

System::Data::DataSet^ NS_Services::Services::createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, System::String^ streetName, int streetNumber, int idCity) {
	System::Data::DataSet^ dataSetSearchAddress = this->searchAddresses(streetName, streetNumber, idCity);
	if (dataSetSearchAddress->Tables->Count == 0 || dataSetSearchAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'existe pas
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress == nullptr || dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->createPaymentMethod(name, firstName, amount, payDate, idPaymentType, idPurchase, idAddress);
	} else {  // Si l'adresse existe
		System::Data::DataRow^ row = dataSetSearchAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->createPaymentMethod(name, firstName, amount, payDate, idPaymentType, idPurchase, idAddress);
	}
}

System::Data::DataSet^ NS_Services::Services::createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->createPaymentMethod(name, firstName, amount, payDate, idPaymentType, idPurchase, streetName, streetNumber, idCity);
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->createPaymentMethod(name, firstName, amount, payDate, idPaymentType, idPurchase, streetName, streetNumber, idCity);
	}
}

System::Data::DataSet^ NS_Services::Services::createCity(System::String^ cityName) {
	System::String^ sql = NS_DB::Mapper::createCity(cityName);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return this->getCityById(id);
}

System::Data::DataSet^ NS_Services::Services::createAddress(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ sql = NS_DB::Mapper::createAddress(streetName, streetNumber, idCity);
	int id = this->dbController->createObject(sql);
	if (id < 0) {
		return nullptr;
	}
	return this->getAddressById(id);
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

System::Data::DataSet^ NS_Services::Services::getPurchaseById(int idPurchase) {
	System::String^ sql = NS_DB::Mapper::selectPurchaseById(idPurchase);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getPurchasedItemById(int idPurchasedItem) {
	System::String^ sql = NS_DB::Mapper::selectPurchasedItemById(idPurchasedItem);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);
	return dataSet;
}

System::Data::DataSet^ NS_Services::Services::getPaymentMethodById(int idPaymentMethod) {
	System::String^ sql = NS_DB::Mapper::selectPaymentMethodById(idPaymentMethod);
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

System::Data::DataSet^ NS_Services::Services::updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, int idDeliveryAddress) {
	System::String^ sql = NS_DB::Mapper::updatePurchase(idPurchase, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idDeliveryAddress, idClient);
	this->dbController->actionRows(sql);
	return this->getPurchaseById(idPurchase);
}

System::Data::DataSet^ NS_Services::Services::updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, int idCity) {
	System::Data::DataSet^ dataSetSearchAddress = this->searchAddresses(streetName, streetNumber, idCity);
	int idAddress = -1;
	if (dataSetSearchAddress->Tables->Count == 0 || dataSetSearchAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'existe pas
		System::Data::DataSet^ dataSetCreateAddress = this->createAddress(streetName, streetNumber, idCity);
		if (dataSetCreateAddress->Tables->Count == 0 || dataSetCreateAddress->Tables[0]->Rows->Count == 0) {  // Si l'adresse n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->updatePurchase(idPurchase, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, idAddress);
	} else {  // Si l'adresse existe
		System::Data::DataRow^ row = dataSetSearchAddress->Tables[0]->Rows[0];
		int idAddress = (int) row[0];
		return this->updatePurchase(idPurchase, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, idAddress);
	}
}

System::Data::DataSet^ NS_Services::Services::updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::Data::DataSet^ dataSetSearchCity = this->searchCities(cityName);
	int idCity = -1;
	if (dataSetSearchCity->Tables->Count == 0 || dataSetSearchCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'existe pas
		System::Data::DataSet^ dataSetCreateCity = this->createCity(cityName);
		if (dataSetCreateCity->Tables->Count == 0 || dataSetCreateCity->Tables[0]->Rows->Count == 0) {  // Si la ville n'a pas pu être créée
			return nullptr;
		}
		System::Data::DataRow^ row = dataSetCreateCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->updatePurchase(idPurchase, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, streetName, streetNumber, idCity);
	} else {  // Si la ville existe
		System::Data::DataRow^ row = dataSetSearchCity->Tables[0]->Rows[0];
		int idCity = (int) row[0];
		return this->updatePurchase(idPurchase, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idClient, streetName, streetNumber, idCity);
	}
}


/* AGGREGATE */
// Met à jour le prix total d'une commande
bool NS_Services::Services::updatePurchasePrices(int idPurchase) {
	System::String^ sqlTotalPrice = NS_DB::Mapper::calculatePurchaseTotalPrice(idPurchase);
	System::Data::DataSet^ dataSetTotalPrice = this->dbController->getRows(sqlTotalPrice);
	if (dataSetTotalPrice == nullptr || dataSetTotalPrice->Tables->Count == 0 || dataSetTotalPrice->Tables[0]->Rows->Count == 0) {
		return nullptr;
	}
	System::Data::DataRow^ rowTotalPrice = dataSetTotalPrice->Tables[0]->Rows[0];
	float totalPrice = -1;
	float totalVatAmount = -1;
	try {
		totalPrice = System::Convert::ToSingle(rowTotalPrice[0]->ToString());
		totalVatAmount = System::Convert::ToSingle(rowTotalPrice[1]->ToString());
	} catch (System::Exception^ ex) {  // Pas de PurchasedItem dans la commande
		return false;  // Impossible de calculer le prix total
	}
	System::String^ sqlPurchase = NS_DB::Mapper::selectPurchaseById(idPurchase);
	System::Data::DataSet^ dataSetPurchase = this->dbController->getRows(sqlPurchase);
	if (dataSetPurchase == nullptr || dataSetPurchase->Tables->Count == 0 || dataSetPurchase->Tables[0]->Rows->Count == 0) {
		return nullptr;
	}
	System::Data::DataRow^ rowPurchase = dataSetPurchase->Tables[0]->Rows[0];
	float discountAmount = System::Convert::ToSingle(rowPurchase[6]->ToString());
	float dutyFreePrice = totalPrice - discountAmount;
	float vatAmount = dutyFreePrice * totalVatAmount / totalPrice;
	float ttcPrice = dutyFreePrice + vatAmount;

	System::String^ sqlUpdatePurchase = NS_DB::Mapper::updatePurchase(idPurchase, gcnew System::DateTime(1, 1, 1), gcnew System::DateTime(1, 1, 1), discountAmount, dutyFreePrice, vatAmount, ttcPrice, -1, -1);
	return this->dbController->actionRows(sqlUpdatePurchase);
}

System::Data::DataSet^ NS_Services::Services::modifyItemQuantity(int idItem, int quantity) {
	System::Data::DataSet^ dataSetItem = this->getItemById(idItem);
	if (dataSetItem->Tables->Count == 0 || dataSetItem->Tables[0]->Rows->Count == 0) {
		return nullptr;
	}
	System::Data::DataRow^ rowItem = dataSetItem->Tables[0]->Rows[0];

	int totalQuantity = (int) rowItem[3] + quantity;
	int availableQuantity = (int) rowItem[4] + quantity;

	System::String^ sql = NS_DB::Mapper::updateItem(idItem, gcnew System::String(""), gcnew System::String(""), totalQuantity, availableQuantity, -1, (float) -1, (float) -1, (float) -1);
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
	System::DateTime^ defaultDateTime = gcnew System::DateTime(1, 1, 1);  // Date par défaut (01/01/0001) pour éviter ce critère dans la recherche
	System::String^ sqlSearchPurchases = NS_DB::Mapper::searchPurchases(idClient, gcnew System::String(""), gcnew System::String(""), defaultDateTime, defaultDateTime);
	System::Data::DataSet^ dataSetPurchases = this->dbController->getRows(sqlSearchPurchases);

	if (dataSetPurchases->Tables->Count == 0 || dataSetPurchases->Tables[0]->Rows->Count == 0) {
		System::String^ sqlDelete = NS_DB::Mapper::deleteClient(idClient);
		return this->dbController->actionRows(sqlDelete);
	} else {  // Si le client a des achats (référence au client dans la table Purchase)
		return false;  // Le client ne peut pas être supprimé (car référence étrangère)
	}
}

bool NS_Services::Services::deleteItem(int idItem) {
	System::String^ sqlDeleteItem = NS_DB::Mapper::deleteItem(idItem);  // Supprime l'item
	return this->dbController->actionRows(sqlDeleteItem);
}

bool NS_Services::Services::deletePurchasedItem(int idPurchasedItem) {
	System::String^ sqlDeletePurchasedItem = NS_DB::Mapper::deletePurchasedItem(idPurchasedItem);  // Supprime l'item
	return this->dbController->actionRows(sqlDeletePurchasedItem);
}

bool NS_Services::Services::deletePurchase(int idPurchase) {
	System::String^ sqlSearchPurchasedItems = NS_DB::Mapper::searchPurchasedItems(idPurchase, -1);
	System::Data::DataSet^ dataSetPurchasedItems = this->dbController->getRows(sqlSearchPurchasedItems);
	if (dataSetPurchasedItems->Tables->Count > 0 && dataSetPurchasedItems->Tables[0]->Rows->Count > 0) {
		return false;  // La commande ne peut pas être supprimée (car référence étrangère)
	}

	System::String^ sqlSearchPaymentMethods = NS_DB::Mapper::searchPaymentMethods(-1, idPurchase, -1);
	System::Data::DataSet^ dataSetPaymentMethods = this->dbController->getRows(sqlSearchPaymentMethods);
	if (dataSetPaymentMethods->Tables->Count > 0 && dataSetPaymentMethods->Tables[0]->Rows->Count > 0) {
		return false;  // La commande ne peut pas être supprimée (car référence étrangère)
	}

	System::String^ sqlDeletePurchase = NS_DB::Mapper::deletePurchase(idPurchase);  // Supprime la commande
	return this->dbController->actionRows(sqlDeletePurchase);
}

float NS_Services::Services::calculateAveragePurchasePrice() {
	System::String^ sql = NS_DB::Mapper::calculateAveragePurchasePrice();
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);

	if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
		return -1;
	}

	try {
		System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
		return System::Convert::ToSingle(row[0]->ToString());
	} catch (System::Exception^ ex) {
		return -1;
	}
	return -1;
}

float NS_Services::Services::calculateStoredSupplierPrice() {
	System::String^ sql = NS_DB::Mapper::calculateStoredSupplierPrice();
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);

	if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
		return -1;
	}

	try {
		System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
		return System::Convert::ToSingle(row[0]->ToString());
	} catch (System::Exception^ ex) {
		return -1;
	}
	return -1;
}

float NS_Services::Services::calculateStoredSellPrice() {
	System::String^ sql = NS_DB::Mapper::calculateStoredSellPrice();
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);

	if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
		return -1;
	}

	try {
		System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
		return System::Convert::ToSingle(row[0]->ToString());
	} catch (System::Exception^ ex) {
		return -1;
	}
	return -1;
}

float NS_Services::Services::calculateClientTotalSpendingPurchases(int idClient) {
	System::String^ sql = NS_DB::Mapper::calculateClientTotalSpendingPurchases(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);

	if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
		return -1;
	}

	try {
		System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
		return System::Convert::ToSingle(row[0]->ToString());
	} catch (System::Exception^ ex) {
		return -1;
	}
	return -1;
}

float NS_Services::Services::calculateClientTotalSpendingPaymentMethods(int idClient) {
	System::String^ sql = NS_DB::Mapper::calculateClientTotalSpendingPaymentMethods(idClient);
	System::Data::DataSet^ dataSet = this->dbController->getRows(sql);

	if (dataSet->Tables->Count == 0 || dataSet->Tables[0]->Rows->Count == 0) {
		return -1;
	}

	try {
		System::Data::DataRow^ row = dataSet->Tables[0]->Rows[0];
		return System::Convert::ToSingle(row[0]->ToString());
	} catch (System::Exception^ ex) {
		return -1;
	}
	return -1;
}

