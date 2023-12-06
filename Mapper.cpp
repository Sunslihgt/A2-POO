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

System::String^ DB::Mapper::searchEmployee(System::String^ name, System::String^ firstName, System::String^ streetName, System::String^ streetNumber, System::String^ cityName) {
	System::String^ query = gcnew System::String(" SELECT e.idEmployee, e.name, e.firstName, e.startDate, a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Employee] e INNER JOIN [A2POO-AzureDB].[dbo].[Address] a ON e.idAddress = a.idAddress INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");
	
	bool conditions = false;
	System::String^ filters = gcnew System::String("WHERE ");
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
	if (streetNumber != nullptr && streetNumber != "") {
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
	System::String^ filters = gcnew System::String("WHERE ");
	if (name != nullptr && name != "") {
		filters += "cl.name = '" + name + "'";
		conditions = true;
	}
	if (firstName != nullptr && firstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "cl.firstName = '" + firstName + "'";
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
	System::String^ filters = gcnew System::String("WHERE ");
	if (name != nullptr && name != "") {
		filters += "i.name = '" + name + "'";
		conditions = true;
	}
	if (reference != nullptr && reference != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "i.reference = '" + reference + "'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchPurchasedItems(int item_id, System::String^ name, System::String^ reference) {
	System::String^ query = gcnew System::String(" SELECT pi.idPurchasedItem, pi.idItem, i.name, i.reference, pi.itemAmount, pi.totalPrice, pi.vatAmount, pi.idPurchase FROM [A2POO-AzureDB].[dbo].[PurchasedItem] pi INNER JOIN [A2POO-AzureDB].[dbo].[Item] i ON pi.idItem = i.idItem");

	bool conditions = false;
	System::String^ filters = gcnew System::String("WHERE ");
	if (item_id >= 0) {
		filters += "pi.item_id = '" + item_id + "'";
		conditions = true;
	}
	if (name != nullptr && name != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "i.name = '" + name + "'";
		conditions = true;
	}
	if (reference != nullptr && reference != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "i.reference = '" + reference + "'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate) {
	System::String^ query = gcnew System::String(" SELECT p.idPurchase, cl.name, cl.firstName, p.purchaseDate, p.payDate, p.deliveryDate, p.discountAmount, p.dutyFreePrice, p.vatAmount, p.ttcPrice, p.idPaymentAddress, p.idDeliveryAddress, p.idClient FROM [A2POO-AzureDB].[dbo].[Purchase] p INNER JOIN [A2POO-AzureDB].[dbo].[Client] cl ON p.idClient = cl.idClient");

	bool conditions = false;
	System::String^ filters = gcnew System::String("WHERE ");
	if (clientName != nullptr && clientName != "") {
		filters += "cl.name = '" + clientName + "'";
		conditions = true;
	}
	if (clientFirstName != nullptr && clientFirstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "cl.firstName = '" + clientFirstName + "'";
		conditions = true;
	}
	if (PurchaseDate != nullptr && PurchaseDate->Year > MIN_PURCHASEYEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "p.purchaseDate = '" + PurchaseDate + "'";
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

System::String^ DB::Mapper::searchAddresses(System::String^ streetName, System::String^ streetNumber, System::String^ cityName) {
	System::String^ query = gcnew System::String(" SELECT a.streetName, a.streetNumber, ci.cityName FROM [A2POO-AzureDB].[dbo].[Address] a INNER JOIN [A2POO-AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");

	bool conditions = false;
	System::String^ filters = gcnew System::String("WHERE ");
	if (streetName != nullptr && streetName != "") {
		filters += "a.streetName = '" + streetName + "'";
		conditions = true;
	}
	if (streetNumber != nullptr && streetNumber != "") {
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

System::String^ DB::Mapper::searchCities(System::String^ cityName) {
	System::String^ query = gcnew System::String(" SELECT ci.cityName FROM [A2POO-AzureDB].[dbo].[City] ci");

	bool conditions = false;
	System::String^ filters = gcnew System::String("WHERE ");
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

System::String^ DB::Mapper::searchPaymentMethods(System::String^ name, System::String^ firstName) {
	System::String^ query = gcnew System::String(" SELECT pm.name, pm.firstName FROM [A2POO-AzureDB].[dbo].[PaymentMethod] pm");

	bool conditions = false;
	System::String^ filters = gcnew System::String("WHERE ");
	if (name != nullptr && name != "") {
		filters += "c.name = '" + name + "'";
		conditions = true;
	}
	if (firstName != nullptr && firstName != "") {
		if (conditions) {
			filters += " AND ";
		}
		filters += "c.firstName = '" + firstName + "'";
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
	System::String^ filters = gcnew System::String("WHERE ");
	if (typeName != nullptr && typeName != "") {
		filters += "pt.typeName = '" + typeName + "'";
		conditions = true;
	}

	if (conditions) {
		query += filters;
	}

	return query;
}

System::String^ DB::Mapper::createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity) {
	System::String^ query = gcnew System::String(" INSERT INTO Employee (name, firstName, startDate, streetName, streetNumber, idCity) OUTPUT Inserted.idEmployee VALUES('" + name +"', '" + firstName + "', '" + startDate + "', '" + streetName + "', " + streetNumber + ")");
}

System::String^ DB::Mapper::createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ query = gcnew System::String(" INSERT INTO Client (name, firstName, birthDate, firstPurchaseDate) OUTPUT Inserted.idClient VALUES('" + name + "', '" + firstName + "', '" + birthDate->ToString("yyyy-MM-dd") + "', '" + firstPurchaseDate->ToString("yyyy-MM-dd") + "')");

}

System::String^ DB::Mapper::createItem(System::String^ name, int reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
	System::String^ query = gcnew System::String(" INSERT INTO Item (name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) OUTPUT Inserted.idItem VALUES('" + name + "', " + reference + ", " + quantity + ", " + availableQuantity + ", " + availableQuantity + ", " + quantityThreshold + ", " + supplierPrice + ", " + unitPrice + ", " + vatRate + ")");

}

System::String^ DB::Mapper::createPurchasedItem(int itemAmount, float totalPrice, float vatAmount, int idPurchase, int idItem) {
	System::String^ query = gcnew System::String(" INSERT INTO PurchasedItem (itemAmount, totalPrice, vatAmount, idPurchase, idItem) OUTPUT Inserted.idPurchasedItem VALUES(" + itemAmount + ", " + totalPrice + ", " + vatAmount + ", " + idPurchase + ", " + idItem + ")");

}

System::String^ DB::Mapper::createPurchase(System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idPaymentMethod, int idClient){
	System::String^ query = gcnew System::String(" INSERT INTO Purchase (purchaseDate, payDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice, idPaymentMethod, idClient) OUTPUT Inserted.idPurchase VALUES(" + purchaseDate->ToString("yyyy-MM-dd") + ", " + payDate->ToString("yyyy-MM-dd") + ", " + deliveryDate->ToString("yyyy-MM-dd") + ", " + discountAmount + ", " + dutyFreePrice + ", " + vatAmount + ", " + ttcPrice + ", " + idPaymentMethod + ", " + idClient + ")");

}

System::String^ DB::Mapper::createAddress(System::String^ streetName, int streetNumber, int idCity) {
	System::String^ query = gcnew System::String(" INSERT INTO Address (streetName, streetNumber, idCity) OUTPUT Inserted.idAddress VALUES('" + streetName + "', " + streetNumber + ", " + idCity + ")");

}

System::String^ DB::Mapper::createCity(System::String^ cityName) {
	System::String^ query = gcnew System::String(" INSERT INTO City (cityName) OUTPUT Inserted.idCity VALUES('" + cityName + "')");
 
}

System::String^ DB::Mapper::createPaymentMethod(System::String^ name, System::String^ firstName, float amount, int idPaymentType) {
	System::String^ query = gcnew System::String(" INSERT INTO PaymentMethod (name, firstName, amount, idPaymentType) OUTPUT Inserted.idPaymentMethod VALUES('" + name + "', '" + firstName + "', " + amount + ", " + idPaymentType + ")");

}

System::String^ DB::Mapper::createPaymentType(System::String^ typeName) {
	System::String^ query = gcnew System::String(" INSERT INTO PaymentType (typeName) OUTPUT Inserted.idPaymentType VALUES('" + typeName + "')");

}

/*
System::String^ DB::Mapper::createEmployeeCity(System::String^ name, System::String^ firstName, startDate, System::String^ streetName, int streetNumber, cityName) {

}

System::String^ DB::Mapper::createPurchaseNoPayment(clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String^ DB::Mapper::createAddressCity(streetName, streetNumber, cityName) {

}

System::String^ DB::Mapper::createPaymentMethodPaymentType(purchaseId, name, firstName, amount, paymentTypeName) {

}
*/

/*
System::String^ DB::Mapper::updadeEmployee(employeeId, name, firstName, startDate, streetName, streetNumber, cityId) {

}

System::String^ DB::Mapper::updadeClient(clientId, name, firstName, birthDate, firstPurchaseDate) {

}

System::String^ DB::Mapper::updadeItem(itemId, name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) {

}

System::String^ DB::Mapper::updadePurchaseItem(purchasedItemId, itemId, purchasedQuantity, totalPrice, vatAmount) {

}

System::String^ DB::Mapper::updadePurchase(purshaseId, clientId, paymentMethodId, purchaseDate, payDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String^ DB::Mapper::updadePurchaseNoPayment(purchaseId, clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String^ DB::Mapper::updadeAddress(addressId, StreetName, StreetNumber, cityId) {

}

System::String^ DB::Mapper::updadeAddressCity(addressId, streetName, streetNumber, cityName) {

}

System::String^ DB::Mapper::updadeCity(cityId, cityName) {

}

System::String^ DB::Mapper::updadePaymentMethod(paymentMethodId, purchaseId, name, firstName, amount, paymentTypeId) {

}

System::String^ DB::Mapper::updadePaymentType(paymentTypeId, paymentTypeName) {

}

System::String^ DB::Mapper::deleteEmployee(employeeId) {

}

System::String^ DB::Mapper::deleteClient(clientId) {

}

System::String^ DB::Mapper::deleteItem(itemId) {

}

System::String^ DB::Mapper::deletePurchasedItem(purchasedItemId) {

}

System::String^ DB::Mapper::deletePurchase(purchaseId) {

}

System::String^ DB::Mapper::deletePurchaseNoPayment(purchaseNoPaymentId) {

}

System::String^ DB::Mapper::deleteAddress(addressId) {

}

System::String^ DB::Mapper::deleteAddressCity(addressCityId) {

}

System::String^ DB::Mapper::deleteCity(cityId) {

}

System::String^ DB::Mapper::deletePaymentMethod(paymentMethodId) {

}

System::String^ DB::Mapper::deletePaymentType(paymentTypeId) {

}
*/
