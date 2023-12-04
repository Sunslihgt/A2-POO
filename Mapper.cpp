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

System::String^ DB::Mapper::searchEmployee(System::String^ name, System::String^ firtName, System::String^ streetName, System::String^ streetNumber, System::String^ cityName) {
	throw gcnew System::NotImplementedException("A implémenter");
	return gcnew System::String(" SELECT e.idEmployee, e.name, e.firstName, e.startDate FROM [A2POO - AzureDB].[dbo].[Employee] e INNER JOIN [A2POO - AzureDB].[dbo].[Address] a ON e.idAddress = a.idAddress INNER JOIN [A2POO - AzureDB].[dbo].[City] c ON a.idCity = c.idCity");
}

System::String^ DB::Mapper::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate) {
	System::String^ select = gcnew System::String(" SELECT c.idClient, c.name , c.firstName, c.birthDate, c.firstOrderDate FROM [A2POO-AzureDB].[dbo].[Client] c ");

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
	if (birthDate != nullptr && birthDate->Year > MIN_YEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "c.birthDate = '" + birthDate + "'";
		conditions = true;
	}
	if (firstPurchaseDate != nullptr && firstPurchaseDate->Year > MIN_YEAR) {
		if (conditions) {
			filters += " AND ";
		}
		filters += "c.firstOrderDate = '" + firstPurchaseDate + "'";
		conditions = true;
	}

	if (conditions) {
		select += filters;
	}

	return select;
}

System::String^ DB::Mapper::searchItems(System::String^ name, System::String^ reference) {
	throw gcnew System::NotImplementedException("A implémenter");
	return gcnew System::String(" SELECT i.name, i.reference FROM [A2POO - AzureDB].[dbo].[Item] i");
}

System::String^ DB::Mapper::searchPurchasedItems(int item_id, System::String^ name, System::String^ reference) {
	throw gcnew System::NotImplementedException("A implémenter");
	return gcnew System::String(" SELECT i.item_id, i.name, i.reference FROM [A2POO - AzureDB].[dbo].[PurchasedItem] pi INNER JOIN [A2POO - AzureDB].[dbo].[Item] i ON pi.idItem = i.idItem");
}

System::String^ DB::Mapper::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate) {
	throw gcnew System::NotImplementedException("A implémenter");
	return gcnew System::String(" SELECT c.name, c.firstName, p.purchaseDate, p.payDate, p.deliveryDate FROM [A2POO - AzureDB].[dbo].[Purchase] p INNER JOIN [A2POO - AzureDB].[dbo].[Client] c ON p.idClient = c.idClient");
}

System::String^ DB::Mapper::searchAddresses(System::String^ streetName, System::String^ streetNumber, System::String^ cityName) {
	throw gcnew System::NotImplementedException("A implémenter");
	return gcnew System::String(" SELECT a.streetName, a.streetNumber, ci.cityName FROM [A2POO - AzureDB].[dbo].[Address] a INNER JOIN [A2POO - AzureDB].[dbo].[City] ci ON a.idCity = ci.idCity");
}

/*
System::String^ DB::Mapper::searchCities(cityName) {

}

System::String^ DB::Mapper::searchPaymentMethods(name, firstName) {

}

System::String^ DB::Mapper::searchPaymentTypes(typeName) {

}
*/

/*
System::String^ DB::Mapper::createEmployee(name, fistName, startDate, streetName, streetNumber, cityId) {

}

System::String^ DB::Mapper::createEmployeeCity(name, firstName, startDate, streetName, streetNumber, cityName) {

}

System::String^ DB::Mapper::createClient(name, firstName, birthDate, firstPurchaseDate) {

}

System::String^ DB::Mapper::createItem(name, reference, quantify, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) {

}

System::String^ DB::Mapper::createPurchasedItem(itemid, purchasedQuantity, totalPrice, vatAmount) {

}

System::String^ DB::Mapper::createPurchase(clientId, paymentMethodId, purchaseDate, payDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice)
{

}

System::String^ DB::Mapper::createPurchaseNoPayment(clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String^ DB::Mapper::createAddress(streetName, streetNumber, cityId) {

}

System::String^ DB::Mapper::createAddressCity(streetName, streetNumber, cityName) {

}

System::String^ DB::Mapper::createCity(cityName) {

}

System::String^ DB::Mapper::createPaymentMethod(purchaseId, name, firstName, amount, paymentTypeId) {

}

System::String^ DB::Mapper::createPaymentMethodPaymentType(purchaseId, name, firstName, amount, paymentTypeName) {

}

System::String^ DB::Mapper::createPaymentType(paymentTypeName) {

}

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
