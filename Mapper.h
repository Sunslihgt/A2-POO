#pragma once
// namespace NS_Comp_Mappage {
	using namespace System::IO;
	using namespace System;

	ref class Mapper {
	public: 
		String selectEmployeeById(int id);
		String selectClientById(int id);
		String selectItemById(int id);
		String selectPurchasedItemById(int id);
		String selectPurchaseById(int id);
		String selectAdressById(int id);
		String selectCityById(int id);
		String selectPaymentMethodById(int id);
		String selectPaymentTypeById(int id);

		String searchEmployee(name, firtName, streetName, streetNumber, cityName);
		String searchClients(name, firstName, birthDate, firstPurchaseDate);
		String searchItems(name, reference);
		String searchPurchasedItems(item_id, name, reference);
		String searchPurchases(clientName, clientFirstName, orderData, payDate, deliveryDate);
		String searchAddresses(streetName, streetNumber, cityName);
		String searchCities(cityName);
		String searchPaymentMethods(name, firstName);
		String searchPaymentTypes(typeName);

		String createEmployee(name, fistName, startDate, streetName, streetNumber, cityId);
		String createEmployeeCity(name, firstName, startDate, streetName, streetNumber, cityName);
		String createClient(name, firstName, birthDate, firstPurchaseDate);
		String createItem(name, reference, quantify, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate);
		String createPurchasedItem(itemid, purchasedQuantity, totalPrice, vatAmount);
		// String createPurchasedItemToPurchase(purchaseID, purchaseItemId);
		String createPurchase(clientId, paymentMethodId, purchaseDate, payDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice);
		String createPurchaseNoPayment(clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice);
		String createAddress(streetName, streetNumber, cityId);
		String createAddressCity(streetName, streetNumber, cityName);
		String createCity(cityName);
		String createPaymentMethod(purchaseId, name, firstName, amount, paymentTypeId);
		String createPaymentMethodPaymentType(purchaseId, name, firstName, amount, paymentTypeName);
		String createPaymentType(paymentTypeName);

		String updadeEmployee(employeeId, name, firstName, startDate, streetName, streetNumber, cityId);
		String updadeClient(clientId, name, firstName, birthDate, firstPurchaseDate);
		String updadeItem(itemId, name, reference, quantity, availableQuantity, quantityThreshold, supplierPrice, unitPrice, vatRate);
		String updadePurchaseItem(purchasedItemId, itemId, purchasedQuantity, totalPrice, vatAmount);
		String updadePurchase(purshaseId, clientId, paymentMethodId, purchaseDate, payDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice);
		String updadePurchaseNoPayment(purchaseId, clientId, purchaseDate, deliveryDate, discountAmount, dutyFreePrice, vatAmount, ttcPrice);
		String updadeAddress(addressId, StreetName, StreetNumber, cityId);
		String updadeAddressCity(addressId, streetName, streetNumber, cityName);
		String updadeCity(cityId, cityName);
		String updadePaymentMethod(paymentMethodId, purchaseId, name, firstName, amount, paymentTypeId);
		String updadePaymentType(paymentTypeId, paymentTypeName);

		String deleteEmployee(employeeId);
		String deleteClient(clientId);
		String deleteItem(itemId);
		String deletePurchasedItem(purchasedItemId);
		String deletePurchase(purchaseId);
		String deletePurchaseNoPayment(purchaseNoPaymentId);
		String deleteAddress(addressId);
		String deleteAddressCity(addressCityId);
		String deleteCity(cityId);
		String deletePaymentMethod(paymentMethodId);
		String deletePaymentType(paymentTypeId);






	/*private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};*/
// }