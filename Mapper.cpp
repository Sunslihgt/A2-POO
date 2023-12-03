#include "Mapper.h"

using namespace System::IO;
using namespace System;

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

String Mapper::selectEmployeeById(int id)
{
	 
}

String Mapper::selectClientById(int id) {

}

String Mapper::selectItemById(int id) {

}

String Mapper::selectPurchasedItemById(int id) {

}

String Mapper::selectPurchaseById(int id) {

}

String Mapper::selectAdressById(int id) {

}

String Mapper::selectCityById(int id) {

}

String Mapper::selectPaymentMethodById(int id) {

}

String Mapper::selectPaymentTypeById(int id) {

}

String Mapper::searchEmployee(name, firtName, streetName, streetNumber, cityName) {

}

String Mapper::searchClients(name, firstName, birthDate, firstPurchaseDate) {

}

String Mapper::searchItems(name, reference) {

}

String Mapper::searchPurchasedItems(item_id, name, reference) {

}

String Mapper::searchPurchases(clientName, clientFirstName, orderData, payDate, deliveryDate) {

}

String Mapper::searchAddresses(streetName, streetNumber, cityName) {

}

String Mapper::searchCities(cityName) {

}

String Mapper::searchPaymentMethods(name, firstName) {

}

String Mapper::searchPaymentTypes(typeName) {

}

String Mapper::createEmployee(name, fistName, startDate, streetName, streetNumber, cityId) {
	 
}

String Mapper::createEmployeeCity(name, firstName, startDate, streetName, streetNumber, cityName) {
	 
}

String Mapper::createClient(name, firstName, birthDate, firstPurchaseDate) {
	 
}

String Mapper::createItem(name, reference, quantify, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) {
	 
}

String Mapper::createPurchasedItem(itemid, purchasedQuantity, totalPrice, vatAmount) {
	 
}

String Mapper::createPurchase(clientId, paymentMethodId, purchaseDate, payDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice)
{
	 
}

String Mapper::createPurchaseNoPayment(clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {
	 
}

String Mapper::createAddress(streetName, streetNumber, cityId) {
	 
}

String Mapper::createAddressCity(streetName, streetNumber, cityName) {
	 
}

String Mapper::createCity(cityName) {
	 
}

String Mapper::createPaymentMethod(purchaseId, name, firstName, amount, paymentTypeId) {
	 
}

String Mapper::createPaymentMethodPaymentType(purchaseId, name, firstName, amount, paymentTypeName) {

}

String Mapper::createPaymentType(paymentTypeName) {

}

String Mapper::updadeEmployee(employeeId, name, firstName, startDate, streetName, streetNumber, cityId) {

}

String Mapper::updadeClient(clientId, name, firstName, birthDate, firstPurchaseDate) {

}

String Mapper::updadeItem(itemId, name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate) {

}

String Mapper::updadePurchaseItem(purchasedItemId, itemId, purchasedQuantity, totalPrice, vatAmount) {

}

String Mapper::updadePurchase(purshaseId, clientId, paymentMethodId, purchaseDate, payDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

String Mapper::updadePurchaseNoPayment(purchaseId, clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice) {

}

String Mapper::updadeAddress(addressId, StreetName, StreetNumber, cityId) {

}

String Mapper::updadeAddressCity(addressId, streetName, streetNumber, cityName) {

}

String Mapper::updadeCity(cityId, cityName) {

}

String Mapper::updadePaymentMethod(paymentMethodId, purchaseId, name, firstName, amount, paymentTypeId) {

}

String Mapper::updadePaymentType(paymentTypeId, paymentTypeName) {

}

String Mapper::deleteEmployee(employeeId) {

}

String Mapper::deleteClient(clientId) {

}

String Mapper::deleteItem(itemId) {

}

String Mapper::deletePurchasedItem(purchasedItemId) {

}

String Mapper::deletePurchase(purchaseId) {

}

String Mapper::deletePurchaseNoPayment(purchaseNoPaymentId) {

}

String Mapper::deleteAddress(addressId) {

}

String Mapper::deleteAddressCity(addressCityId) {

}

String Mapper::deleteCity(cityId) {

}

String Mapper::deletePaymentMethod(paymentMethodId) {

}

String Mapper::deletePaymentType(paymentTypeId) {

}
