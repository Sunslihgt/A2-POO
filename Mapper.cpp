#include "Mapper.h"

/*System::String^ NS_Comp_Mappage::Mapper::Select(void) {
	return " SELECT c.id IdClient, c.nom Nom, c.prenom Prenom, a.id IdAdresse, a.rue nomRue, a.numero numero, a.ville nomVille " +
		" FROM [A2POO-AzureDB].[dbo].[Clients] c " +
		" INNER JOIN [A2POO-AzureDB].[dbo].[Adresses] a " +
		" ON c.IdAdresse = a.Id";
}

System::String^ NS_Comp_Mappage::Mapper::Insert(void) {
	return "INSERT INTO [A2POO-AzureDB].[dbo].[Clients] (id, nom, prenom) VALUES(" + this->Id + ", '" + this->nom + "','" + this->prenom + "');";
}

System::String^ NS_Comp_Mappage::Mapper::Delete(void) {
	return "DELETE FROM [A2POO-AzureDB].[dbo].[Clients] WHERE id = " + this->Id + ";";
}

System::String^ NS_Comp_Mappage::Mapper::Update(void) {
	return "UPDATE [A2POO-AzureDB].[dbo].[Clients] SET nom = '" + this->nom + "', prenom = '" + this->prenom + "' WHERE id = " + this->Id + ";";
}

void NS_Comp_Mappage::Mapper::setId(int Id) {
	this->Id = Id;
}

void NS_Comp_Mappage::Mapper::setNom(System::String^ nom) {
	this->nom = nom;
}

void NS_Comp_Mappage::Mapper::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}

int NS_Comp_Mappage::Mapper::getId(void) {
	return this->Id;
}

System::String^ NS_Comp_Mappage::Mapper::getNom(void) {
	return this->nom;
}

System::String^ NS_Comp_Mappage::Mapper::getPrenom(void) {
	return this->prenom;
}*/

/*
System::String Mapper::selectEmployeeById(int id)
{
	 
}

System::String Mapper::selectClientById(int id) {

}

System::String Mapper::selectItemById(int id) {

}

System::String Mapper::selectPurchasedItemById(int id) {

}

System::String Mapper::selectPurchaseById(int id) {

}

System::String Mapper::selectAdressById(int id) {

}

System::String Mapper::selectCityById(int id) {

}

System::String Mapper::selectPaymentMethodById(int id) {

}

System::String Mapper::selectPaymentTypeById(int id) {

}

System::String Mapper::searchEmployee(name, firtName, streetName, streetNumber, cityName) {

}

System::String Mapper::searchClients(name, firstName, birthDate, firstPurchaseDate) {

}

System::String Mapper::searchItems(name, reference) {

}

System::String Mapper::searchPurchasedItems(item_id, name, reference) {

}

System::String Mapper::searchPurchases(clientName, clientFirstName, orderData, payDate, deliveryDate) {

}

System::String Mapper::searchAddresses(streetName, streetNumber, cityName) {

}

System::String Mapper::searchCities(cityName) {

}

System::String Mapper::searchPaymentMethods(name, firstName) {

}

System::String Mapper::searchPaymentTypes(typeName) {

}

System::String Mapper::createEmployee(name, fistName, startDate, streetName, streetNumber, cityId) {
	 
}

System::String Mapper::createEmployeeCity(name, firstName, startDate, streetName, streetNumber, cityName) {
	 
}

System::String Mapper::createClient(name, firstName, birthDate, firstPurchaseDate) {
	 
}

System::String Mapper::createItem(name, reference, quantify, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) {
	 
}

System::String Mapper::createPurchasedItem(itemid, purchasedQuantity, totalPrice, vatAmount) {
	 
}

System::String Mapper::createPurchase(clientId, paymentMethodId, purchaseDate, payDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice)
{
	 
}

System::String Mapper::createPurchaseNoPayment(clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {
	 
}

System::String Mapper::createAddress(streetName, streetNumber, cityId) {
	 
}

System::String Mapper::createAddressCity(streetName, streetNumber, cityName) {
	 
}

System::String Mapper::createCity(cityName) {
	 
}

System::String Mapper::createPaymentMethod(purchaseId, name, firstName, amount, paymentTypeId) {
	 
}

System::String Mapper::createPaymentMethodPaymentType(purchaseId, name, firstName, amount, paymentTypeName) {

}

System::String Mapper::createPaymentType(paymentTypeName) {

}

System::String Mapper::updadeEmployee(employeeId, name, firstName, startDate, streetName, streetNumber, cityId) {

}

System::String Mapper::updadeClient(clientId, name, firstName, birthDate, firstPurchaseDate) {

}

System::String Mapper::updadeItem(itemId, name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) {

}

System::String Mapper::updadePurchaseItem(purchasedItemId, itemId, purchasedQuantity, totalPrice, vatAmount) {

}

System::String Mapper::updadePurchase(purshaseId, clientId, paymentMethodId, purchaseDate, payDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String Mapper::updadePurchaseNoPayment(purchaseId, clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

System::String Mapper::updadeAddress(addressId, StreetName, StreetNumber, cityId) {

}

System::String Mapper::updadeAddressCity(addressId, streetName, streetNumber, cityName) {

}

System::String Mapper::updadeCity(cityId, cityName) {

}

System::String Mapper::updadePaymentMethod(paymentMethodId, purchaseId, name, firstName, amount, paymentTypeId) {

}

System::String Mapper::updadePaymentType(paymentTypeId, paymentTypeName) {

}

System::String Mapper::deleteEmployee(employeeId) {

}

System::String Mapper::deleteClient(clientId) {

}

System::String Mapper::deleteItem(itemId) {

}

System::String Mapper::deletePurchasedItem(purchasedItemId) {

}

System::String Mapper::deletePurchase(purchaseId) {

}

System::String Mapper::deletePurchaseNoPayment(purchaseNoPaymentId) {

}

System::String Mapper::deleteAddress(addressId) {

}

System::String Mapper::deleteAddressCity(addressCityId) {

}

System::String Mapper::deleteCity(cityId) {

}

System::String Mapper::deletePaymentMethod(paymentMethodId) {

}

System::String Mapper::deletePaymentType(paymentTypeId) {

}
*/
