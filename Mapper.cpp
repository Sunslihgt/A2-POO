#include "Mapper.h"

/*System::String^ NS_Comp_Mappage::Mapper::Select(void) {
	return " SELECT c.id IdClient, c.nom Nom, c.prenom Prenom, a.id IdAdresse, a.rue nomRue, a.numero numero, a.ville nomVille " +
		" FROM [A2POO-AzureDB].[dbo].[Clients] c " +
		" INNER JOIN [A2POO-AzureDB].[dbo].[Adresses] a " +
		" ON c.IdAdresse = a.Id";
}

System::String^ NS_Comp_Mappage::DB::Mapper::Insert(void) {
	return "INSERT INTO [A2POO-AzureDB].[dbo].[Clients] (id, nom, prenom) VALUES(" + this->Id + ", '" + this->nom + "','" + this->prenom + "');";
}

System::String^ NS_Comp_Mappage::DB::Mapper::Delete(void) {
	return "DELETE FROM [A2POO-AzureDB].[dbo].[Clients] WHERE id = " + this->Id + ";";
}

System::String^ NS_Comp_Mappage::DB::Mapper::Update(void) {
	return "UPDATE [A2POO-AzureDB].[dbo].[Clients] SET nom = '" + this->nom + "', prenom = '" + this->prenom + "' WHERE id = " + this->Id + ";";
}

void NS_Comp_Mappage::DB::Mapper::setId(int Id) {
	this->Id = Id;
}

void NS_Comp_Mappage::DB::Mapper::setNom(System::String^ nom) {
	this->nom = nom;
}

void NS_Comp_Mappage::DB::Mapper::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}

int NS_Comp_Mappage::DB::Mapper::getId(void) {
	return this->Id;
}

System::String^ NS_Comp_Mappage::DB::Mapper::getNom(void) {
	return this->nom;
}

System::String^ NS_Comp_Mappage::DB::Mapper::getPrenom(void) {
	return this->prenom;
}*/

/*System::String^ DB::Mapper::selectEmployeeById(int id) {

}

System::String^ DB::Mapper::selectClientById(int id) {

}

System::String^ DB::Mapper::selectItemById(int id) {

}

System::String^ DB::Mapper::selectPurchasedItemById(int id) {

}

System::String^ DB::Mapper::selectPurchaseById(int id) {

}

System::String^ DB::Mapper::selectAdressById(int id) {

}

System::String^ DB::Mapper::selectCityById(int id) {

}

System::String^ DB::Mapper::selectPaymentMethodById(int id) {

}

System::String^ DB::Mapper::selectPaymentTypeById(int id) {

}*/

System::String^ DB::Mapper::searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::String^ query = gcnew System::String(" SELECT e.idEmployee, e.name, e.firstName, e.startDate, a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Employee] e INNER JOIN [A2POO-AzureDB].[dbo].[Address] a ON e.idAddress = a.idAddress INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (name != nullptr && name != "") {
		filters += "e.name = '" + name + "'";
		conditions = true;
	}
	if (firstName != nullptr && firstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "e.firstName = '" + firstName + "'";
		conditions = true;
	}
	if (streetName != nullptr && streetName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "a.streetName = '" + streetName + "'";
		conditions = true;
	}
	if (streetNumber >= 1) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "a.streetNumber = '" + streetNumber + "'";
		conditions = true;
	}

	if (cityName != nullptr && cityName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "ci.cityName = '" + cityName + "'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ query = gcnew System::String(" SELECT cl.idClient, cl.name , cl.firstName, cl.birthDate, cl.firstOrderDate FROM [A2POO-AzureDB].[dbo].[Client] cl ");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (name != nullptr && name != "") {
		filters += "cl.name LIKE '%" + name + "%'";
		conditions = true;
	}
	if (firstName != nullptr && firstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "cl.firstName LIKE '%" + firstName + "%'";
		conditions = true;
	}
	if (birthDate != nullptr && birthDate->Year > MIN_BIRTHYEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "cl.birthDate = '" + birthDate + "'";
		conditions = true;
	}
	if (firstPurchaseDate != nullptr && firstPurchaseDate->Year > MIN_BIRTHYEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "cl.firstOrderDate = '" + firstPurchaseDate + "'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchItems(System::String^ name, System::String^ reference) {
	System::String^ query = gcnew System::String(" SELECT i.name, i.reference, i.quantity, i.availableQuantity, i.quantityThreshold, i.supplierPrice, i.unitPrice, i.vatRate FROM [A2POO-AzureDB].[dbo].[Item] i");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (name != nullptr && name != "") {
		filters += "i.name LIKE '%" + name + "%'";
		conditions = true;
	}
	if (reference != nullptr && reference != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "i.reference LIKE '%" + reference + "%'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchPurchasedItems(int idItem, System::String^ name, System::String^ reference) {
	System::String^ query = gcnew System::String(" SELECT pi.idPurchasedItem, pi.idItem, i.name, i.reference, pi.itemAmount, pi.totalPrice, pi.vatAmount, pi.idPurchase FROM [A2POO-AzureDB].[dbo].[PurchasedItem] pi INNER JOIN [A2POO-AzureDB].[dbo].[Item] i ON pi.idItem = i.idItem");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (idItem >= 1) {
		filters += "pi.idItem LIKE '%" + idItem + "%'";
		conditions = true;
	}
	if (name != nullptr && name != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "i.name LIKE '%" + name + "%'";
		conditions = true;
	}
	if (reference != nullptr && reference != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "i.reference LIKE '%" + reference + "%'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate) {
	System::String^ query = gcnew System::String(" SELECT p.idPurchase, cl.name, cl.firstName, p.purchaseDate, p.payDate, p.deliveryDate, p.discountAmount, p.dutyFreePrice, p.vatAmount, p.ttcPrice, p.idPaymentAddress, p.idDeliveryAddress, p.idClient FROM [A2POO-AzureDB].[dbo].[Purchase] p INNER JOIN [A2POO-AzureDB].[dbo].[Client] cl ON p.idClient = cl.idClient");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (clientName != nullptr && clientName != "") {
		filters += "cl.name LIKE '%" + clientName + "%'";
		conditions = true;
	}
	if (clientFirstName != nullptr && clientFirstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "cl.firstName LIKE '%" + clientFirstName + "%'";
		conditions = true;
	}
	if (purchaseDate != nullptr && purchaseDate->Year > MIN_PURCHASEYEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "p.purchaseDate = '" + purchaseDate + "'";
		conditions = true;
	}
	if (payDate != nullptr && payDate->Year > MIN_PURCHASEYEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "p.payDate = '" + payDate + "'";
		conditions = true;
	}
	if (deliveryDate != nullptr && deliveryDate->Year > MIN_PURCHASEYEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "p.deliveryDate = '" + deliveryDate + "'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchAddresses(System::String^ streetName, int streetNumber, System::String^ cityName) {
	System::String^ query = gcnew System::String(" SELECT a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Address] a INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (streetName != nullptr && streetName != "") {
		filters += "a.streetName LIKE '%" + streetName + "%'";
		conditions = true;
	}
	if (streetNumber >= 1) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "a.streetNumber = '" + streetNumber + "'";
		conditions = true;
	}
	if (cityName != nullptr && cityName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "ci.cityName LIKE '%" + cityName + "%'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchCities(System::String^ cityName) {
	System::String^ query = gcnew System::String(" SELECT ci.cityName FROM [A2POO-AzureDB].[dbo].[City] ci");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (cityName != nullptr && cityName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "ci.cityName LIKE '%" + cityName + "%'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchPaymentMethods(System::String^ name, System::String^ firstName) {
	System::String^ query = gcnew System::String(" SELECT pm.name, pm.firstName FROM [A2POO-AzureDB].[dbo].[PaymentMethod] pm");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (name != nullptr && name != "") {
		filters += "pm.name LIKE '%" + name + "%'";
		conditions = true;
	}
	if (firstName != nullptr && firstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "pm.firstName LIKE '%" + firstName + "%'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchPaymentTypes(System::String^ typeName) {
	System::String^ query = gcnew System::String(" SELECT pt.typeName FROM [A2POO-AzureDB].[dbo].[PaymentType] pt");

	bool conditions = false;
	System::String^ filters = gcnew System::String(" WHERE ");
	if (typeName != nullptr && typeName != "") {
		filters += "pt.typeName LIKE '%" + typeName + "%'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity) {
	System::String^ query = gcnew System::String(" INSERT INTO Employee (name, firstName, startDate, streetName, streetNumber, idCity) OUTPUT Inserted.idEmployee VALUES('" + name +"', '" + firstName + "', '" + startDate + "', '" + streetName + "', " + streetNumber + ")");
	return query;
}

System::String^ DB::Mapper::createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ query = gcnew System::String(" INSERT INTO Client (name, firstName, birthDate, firstPurchaseDate) OUTPUT Inserted.idClient VALUES('" + name + "', '" + firstName + "', '" + birthDate->ToString("yyyy-MM-dd") + "', '" + firstPurchaseDate->ToString("yyyy-MM-dd") + "')");
	return query;
}

System::String^ DB::Mapper::createItem(System::String^ name, int reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
	System::String^ query = gcnew System::String(" INSERT INTO Item (name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) OUTPUT Inserted.idItem VALUES('" + name + "', " + reference + ", " + quantity + ", " + availableQuantity + ", " + availableQuantity + ", " + quantityThreshold + ", " + supplierPrice + ", " + unitPrice + ", " + vatRate + ")");
	return query;
}

System::String^ DB::Mapper::createPurchasedItem(int itemAmount, float totalPrice, float vatAmount, int idPurchase, int idItem) {
	System::String^ query = gcnew System::String(" INSERT INTO PurchasedItem (itemAmount, totalPrice, vatAmount, idPurchase, idItem) OUTPUT Inserted.idPurchasedItem VALUES(" + itemAmount + ", " + totalPrice + ", " + vatAmount + ", " + idPurchase + ", " + idItem + ")");
	return query;
}

System::String^ DB::Mapper::createPurchase(System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idPaymentMethod, int idClient){
	System::String^ query = gcnew System::String(" INSERT INTO Purchase (purchaseDate, payDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idPaymentMethod, idClient) OUTPUT Inserted.idPurchase VALUES(" + purchaseDate->ToString("yyyy-MM-dd") + ", " + payDate->ToString("yyyy-MM-dd") + ", " + deliveryDate->ToString("yyyy-MM-dd") + ", " + discountAmount + ", " + dutyFreePrice + ", " + vatAmount + ", " + ttcPrice + ", " + idPaymentMethod + ", " + idClient + ")");
	return query;
}

System::String^ DB::Mapper::createAddress(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ query = gcnew System::String(" INSERT INTO Address (streetName, streetNumber, idCity) OUTPUT Inserted.idAddress VALUES('" + streetName + "', " + streetNumber + ", " + idCity + ")");
	return query;
}

System::String^ DB::Mapper::createCity(System::String^ cityName) {
	System::String^ query = gcnew System::String(" INSERT INTO City (cityName) OUTPUT Inserted.idCity VALUES('" + cityName + "')");
	return query;
}

System::String^ DB::Mapper::createPaymentMethod(System::String^ name, System::String^ firstName, float amount, int idPaymentType) {
	System::String^ query = gcnew System::String(" INSERT INTO PaymentMethod (name, firstName, amount, idPaymentType) OUTPUT Inserted.idPaymentMethod VALUES('" + name + "', '" + firstName + "', " + amount + ", " + idPaymentType + ")");
	return query;
}

System::String^ DB::Mapper::createPaymentType(System::String^ typeName) {
	System::String^ query = gcnew System::String(" INSERT INTO PaymentType (typeName) OUTPUT Inserted.idPaymentType VALUES('" + typeName + "')");
	return query;
}

/*
System::String^ DB::Mapper::createEmployeeCity(System::String^ name, System::String^ firstName, startDate, System::String^ streetName, int streetNumber, cityName) {

}

System::String^ DB::Mapper::createPurchaseNoPayment(clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String^ DB::Mapper::createAddressCity(streetName, streetNumber, cityName) {

}

System::String^ DB::Mapper::createPaymentMethodPaymentType(purchaseId, name, firstName, amount, paymentTypeName) {

}*/









System::String^ DB::Mapper::updadeEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity) {
	bool ajout = false;
	System::String^ query = gcnew System::String(" UPDATE Employee ");

	query += "SET ";

	if (name != nullptr && name != "") {
		query += "name = '" + name + "'";
		ajout = true;
	}

	if (firstName != nullptr && firstName != "") {
		if (ajout) {
			query += ", ";
		}

		query += "firstName = '" + firstName + "'";
		ajout = true;
	}

	if (startDate != nullptr && (startDate->System::DateTime::Compare(*startDate, *MIN_DATETIME) > 0)) {
		if (ajout) {
			query += ", ";
		}

		query += "startDate = '" + startDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

	if (streetName != nullptr && streetName != "") {
		if (ajout) {
			query += ", ";
		}

		query += "streetName = '" + streetName + "'";
		ajout = true;
	}

	if (idCity >= 1) {
		if (ajout) {
			query += ", ";
		}

		query += "idCity = '" + idCity + "'";
	}

	query += "WHERE idEmployee = " + idEmployee;

	/*if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && startDate != nullptr && startDate != "01/01/1900" && streetName != nullptr && streetName != "" && idCity >= 1) {
		query = "";
	}*/

	return query;
}

System::String^ DB::Mapper::updadeClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	bool ajout = false;
	System::String^ query = gcnew System::String(" UPDATE Client ");

	query += "SET ";

	if (name != nullptr && name != "") {
		query += "name = '" + name + "'";
		ajout = true;
	}

	if (firstName != nullptr && firstName != "") {
		if (ajout) {
			query += ", ";
		}

		query += "firstName = '" + firstName + "'";
		ajout = true;
	}

	if (birthDate != nullptr && (birthDate->System::DateTime::Compare(*birthDate, *MIN_DATETIME) > 0) ){
		if (ajout) {
			query += ", ";
		}

		query += "birthDate = '" + birthDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

	if (firstPurchaseDate != nullptr && (firstPurchaseDate->System::DateTime::Compare(*firstPurchaseDate, *MIN_DATETIME) > 0)) {
		if (ajout) {
			query += ", ";
		}

		query += "firstPurchaseDate = '" + firstPurchaseDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

	query += "WHERE idClient = " + idClient;

	/*if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && birthDate != nullptr && birthDate != "01/01/1900" && firstPurchaseDate != nullptr && firstPurchaseDate != "01/01/1900") {
		query = "";
	}*/

	return query;
}

System::String^ DB::Mapper::updadeItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
	bool ajout = false;
	System::String^ query = gcnew System::String(" UPDATE Item ");

	query += "SET ";

	if (name != nullptr && name != "") {
		query += "name = '" + name + "'";
		ajout = true;
	}

	if (reference != nullptr && reference != "") {
		if (ajout) {
			query += ", ";
		}

		query += "reference = '" + reference + "'";
		ajout = true;
	}


	

	query += "WHERE idItem = " + idItem;

	/*if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && birthDate != nullptr && birthDate != "01/01/1900" && firstPurchaseDate != nullptr && firstPurchaseDate != "01/01/1900") {
		query = "";
	}*/

	return query;
}

System::String^ DB::Mapper::updadePurchasedItem(int idPurchasedItem, int idItem, int purchasedQuantity, float totalPrice, float vatAmount) {
	bool ajout = false;
	System::String^ query = gcnew System::String(" UPDATE PurchasedItem ");

	query += "SET ";

	if (idItem >= 1) {
		query += "idItem = '" + idItem + "'";
		ajout = true;
	}

	if (purchasedQuantity > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "purchasedQuantity = '" + purchasedQuantity + "'";
		ajout = true;
	}

	if (totalPrice > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "totalPrice = '" + totalPrice + "'";
		ajout = true;
	}

	if (vatAmount > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "vatAmount = '" + vatAmount + "'";
	}

	query += "WHERE idPurchasedItem = " + idPurchasedItem;

	/*if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && birthDate != nullptr && birthDate != "01/01/1900" && firstPurchaseDate != nullptr && firstPurchaseDate != "01/01/1900") {
		query = "";
	}*/

	return query;
}

System::String^ DB::Mapper::updadePurchase(int idPurchase, int idClient, int idPaymentMethod, System::DateTime^ purchaseDate, System::DateTime^ payDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice) {
	bool ajout = false;
	System::String^ query = gcnew System::String(" UPDATE Purchase ");

	query += "SET ";

	if (idClient >= 1) {
		query += "idCLient = '" + idClient + "'";
		ajout = true;
	}

	if (idPaymentMethod >= 1) {
		if (ajout) {
			query += ", ";
		}

		query += "idPaymentMethod = '" + idPaymentMethod + "'";
		ajout = true;
	}

	if (purchaseDate != nullptr && (purchaseDate->System::DateTime::Compare(*purchaseDate, *MIN_DATETIME) > 0)) {
		if (ajout) {
			query += ", ";
		}

		query += "purchaseDate = '" + purchaseDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

	if (payDate != nullptr && (payDate->System::DateTime::Compare(*payDate, *MIN_DATETIME) > 0)) {
		if (ajout) {
			query += ", ";
		}

		query += "payDate = '" + payDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

	if (discountAmount > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "discountAmount = '" + discountAmount + "'";
		ajout = true;
	}

	if (dutyFreePrice > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "dutyFreePrice = '" + dutyFreePrice + "'";
	}

	if (vatAmount > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "vatAmount = '" + vatAmount + "'";
	}

	if (ttcPrice > 0) {
		if (ajout) {
			query += ", ";
		}

		query += "ttcPrice = '" + ttcPrice + "'";
	}

	query += "WHERE idPurchase = " + idPurchase;

	/*if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && birthDate != nullptr && birthDate != "01/01/1900" && firstPurchaseDate != nullptr && firstPurchaseDate != "01/01/1900") {
		query = "";
	}*/

	return query;
}

/*System::String^ DB::Mapper::updadePurchaseNoPayment(int idPurchase, int idClient, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice) {
bool ajout = false;
	System::String^ query = gcnew System::String(" UPDATE Purchase ");

	query += "SET ";

	if (idClient >= 1) {
		query += "idCLient = '" + idClient + "'";
		ajout = true;
	}

	if (idPurchase >= 1) {
		if (ajout) {
			query += ", ";
		}

		query += "idPurchase = '" + idPurchase + "'";
		ajout = true;
	}

	if (purchaseDate != nullptr && (purchaseDate->System::DateTime::Compare(*purchaseDate, *MIN_DATETIME) > 0)) {
		if (ajout) {
			query += ", ";
		}

		query += "purchaseDate = '" + purchaseDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

	if (deliveryDate != nullptr && (deliveryDate->System::DateTime::Compare(*deliveryDate, *MIN_DATETIME) > 0)) {
		if (ajout) {
			query += ", ";
		}

		query += "deliveryDate = '" + deliveryDate->ToString("yyyy-MM-dd") + "'";
		ajout = true;
	}

if (discountAmount > 0) {
	if (ajout) {
		query += ", ";
	}

	query += "discountAmount = '" + discountAmount + "'";
	ajout = true;
}

if (dutyFreePrice > 0) {
	if (ajout) {
		query += ", ";
	}

	query += "dutyFreePrice = '" + dutyFreePrice + "'";
}

if (vatAmount > 0) {
	if (ajout) {
		query += ", ";
	}

	query += "vatAmount = '" + vatAmount + "'";
}

if (ttcPrice > 0) {
	if (ajout) {
		query += ", ";
	}

	query += "ttcPrice = '" + ttcPrice + "'";
}

query += "WHERE idPurchase = " + idPurchase;

//if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && birthDate != nullptr && birthDate != "01/01/1900" && firstPurchaseDate != nullptr && firstPurchaseDate != "01/01/1900") {
//	query = "";
//}

return query;
}*/

//System::String^ DB::Mapper::updadeAddress(int idAddress, System::String^ StreetName, int StreetNumber, int idCity) {
//
//}
//
//System::String^ DB::Mapper::updadeAddressCity(int idAddress, System::String^ streetName, int streetNumber, System::String^ cityName) {
//
//}
//
//System::String^ DB::Mapper::updadeCity(int idCity, System::String^ cityName) {
//
//}
//
//System::String^ DB::Mapper::updadePaymentMethod(int idPaymentMethod, int idPurchase, System::String^ name, System::String^ firstName, float amount, int idPaymentType) {
//
//}

//System::String^ DB::Mapper::updadePaymentType(int idPaymentType, System::String^ typeName) {
//	bool ajout = false;
//	System::String^ query = gcnew System::String(" UPDATE PaymentType ");
//
//	query += "SET ";
//
//	if (typeName != nullptr && typeName != "") {
//		query += "typeName = '" + typeName + "'";
//		ajout = true;
//	}
//
//	query += "WHERE idPaymentType = " + idPaymentType;
//
//	/*if (name != nullptr && name != "" && firstName != nullptr && firstName != "" && birthDate != nullptr && birthDate != "01/01/1900" && firstPurchaseDate != nullptr && firstPurchaseDate != "01/01/1900") {
//		query = "";
//	}*/
//
//	return query;
//}









System::String^ DB::Mapper::deleteEmployee(int idEmployee) {
	System::String^ query = gcnew System::String("DELETE FROM Employee WHERE idEmployee = " + idEmployee + " ; DELETE FROM manage WHERE subordinate = " + idEmployee + " ; DELETE FROM manage WHERE superior = " + idEmployee);
	return query;
}

System::String^ DB::Mapper::deleteClient(int idClient) {
	System::String^ query = gcnew System::String("DELETE FROM Client WHERE idClient = " + idClient + " ; DELETE FROM Purchase WHERE idClient = " + idClient + " ; DELETE FROM live WHERE idClient = " + idClient + " ; DELETE FROM billing_address WHERE idClient = " + idClient);
	return query;
}

System::String^ DB::Mapper::deleteItem(int idItem) {
	System::String^ query = gcnew System::String("DELETE FROM Item WHERE idItem = " + idItem + " ; DELETE FROM PurchasedItem WHERE idItem = " + idItem);
	return query;
}

System::String^ DB::Mapper::deletePurchasedItem(int idPurchasedItem) {
	System::String^ query = gcnew System::String("DELETE FROM PurchasedItem WHERE idPurchasedItem = " + idPurchasedItem);
	return query;
}

System::String^ DB::Mapper::deletePurchase(int idPurchase) {
	System::String^ query = gcnew System::String("DELETE FROM Purchase WHERE idPurchase = " + idPurchase + " ; DELETE FROM PurchasedItem WHERE idPurchase = " + idPurchase);
	return query;
}

System::String^ DB::Mapper::deletePurchaseNoPayment(int idPurchaseNoPayment) {
	System::String^ query = gcnew System::String("DELETE FROM ? WHERE ? = " + idPurchaseNoPayment);
	return query;
}

System::String^ DB::Mapper::deleteAddress(int idAddress) {
	System::String^ query = gcnew System::String("DELETE FROM Address WHERE idAddress = " + idAddress + " ; DELETE FROM Client WHERE idAddress = " + idAddress + " ; DELETE FROM Purchase WHERE idPaymentAddress = " + idAddress + " ; DELETE FROM Purchase WHERE idDeliveryAddress = " + idAddress + " ; DELETE FROM live WHERE idClient = " + idAddress + " ; DELETE FROM billing_address WHERE idClient = " + idAddress);
	return query;
}

System::String^ DB::Mapper::deleteAddressCity(int idAddressCity) {
	System::String^ query = gcnew System::String("DELETE FROM ? WHERE ? = " + idAddressCity);
	return query;
}

System::String^ DB::Mapper::deleteCity(int idCity) {
	System::String^ query = gcnew System::String("DELETE FROM City WHERE idCity = " + idCity + " ; DELETE FROM Address WHERE idCity = " + idCity);
	return query;
}

System::String^ DB::Mapper::deletePaymentMethod(int idPaymentMethod) {
	System::String^ query = gcnew System::String("DELETE FROM PaymentMethod WHERE idPaymentMethod = " + idPaymentMethod + "DELETE FROM Purchase WHERE idPaymentMethod = " + idPaymentMethod);
	return query;
}

System::String^ DB::Mapper::deletePaymentType(int idPaymentType) {
	System::String^ query = gcnew System::String("DELETE FROM PaymentType WHERE idPaymentType = " + idPaymentType + " ; DELETE FROM PaymentMethod WHERE idPaymentType = " + idPaymentType);
	return query;
}
