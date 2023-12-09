#pragma once

namespace DB {
	public ref class Mapper {
	public:
		static System::String^ selectEmployeeById(int id);
		static System::String^ selectClientById(int id);
		static System::String^ selectItemById(int id);
		static System::String^ selectPurchasedItemById(int id);
		static System::String^ selectPurchaseById(int id);
		static System::String^ selectAdressById(int id);
		static System::String^ selectCityById(int id);
		static System::String^ selectAddressById(int id);
		static System::String^ selectPaymentMethodById(int id);
		static System::String^ selectPaymentTypeById(int id);

		//static System::String^ selectClientDeliveryAddressesByIdClient(int idClient);
		//static System::String^ selectClientBillingAddressesByIdClient(int idClient);

		static System::String^ searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ searchItems(System::String^ name, System::String^ reference);
		static System::String^ searchPurchasedItems(int idItem, System::String^ name, System::String^ reference);
		static System::String^ searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, int idClient);
		static System::String^ searchAddresses(System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ searchCities(System::String^ cityName);
		static System::String^ searchPaymentMethods(System::String^ name, System::String^ firstName);
		static System::String^ searchPaymentTypes(System::String^ typeName);

		static System::String^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		static System::String^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate);
		static System::String^ createItem(System::String^ name, int reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ createPurchasedItem(int itemAmount, float totalPrice, float vatAmount, int idPurchase, int idItem);
		static System::String^ createPurchase(System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idPaymentMethod, int idClient);		
		static System::String^ createAddress(System::String^ streetName, int streetNumber, int idCity);
		static System::String^ createCity(System::String^ cityName);
		static System::String^ createPaymentMethod(System::String^ name, System::String^ firstName, float amount, int idPaymentType);
		static System::String^ createPaymentType(System::String^ paymentTypeName);
		//static System::String^ createEmployeeCity(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		//static System::String^ createPurchaseNoPayment(int clientId, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		//static System::String^ createAddressCity(System::String^ streetName, int streetNumber, System::String^ cityName);
		//static System::String^ createPaymentMethodPaymentType(int purchaseId, System::String^ name, System::String^ firstName, float amount, int paymentTypeName);

		static System::String^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		static System::String^ updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ updateItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ updatePurchasedItem(int idPurchasedItem, int idItem, int idPurchase, int itemAmount, float totalPrice, float vatAmount);
		static System::String^ updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ payDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idPaymentAddress, int idDeliveryAddress, int idClient);
		static System::String^ updateAddress(int idAddress, System::String^ streetName, int streetNumber, int idCity);
		static System::String^ updateCity(int idCity, System::String^ cityName);
		static System::String^ updatePaymentMethod(int idPaymentMethod, int idPaymentType, System::String^ name, System::String^ firstName, float amount);
		static System::String^ updatePaymentType(int idPaymentType, System::String^ paymentTypeName);
		//static System::String^ updatePurchaseNoPayment(int idPurchase, int idClient, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		//static System::String^ updadeAddressCity(int idAddress, System::String^ streetName, int streetNumber, System::String^ cityName);

		static System::String^ deleteEmployee(int idEmployee);
		static System::String^ deleteClient(int idClient);
		static System::String^ deleteItem(int idItem);
		static System::String^ deletePurchasedItem(int idPurchasedItem);
		static System::String^ deletePurchase(int idPurchase);
		//static System::String^ deletePurchaseNoPayment(int idPurchaseNoPayment);
		static System::String^ deleteAddress(int idAddress);
		//static System::String^ deleteAddressCity(int idCity);
		static System::String^ deleteCity(int idCity);
		static System::String^ deletePaymentMethod(int idPaymentMethod);
		static System::String^ deletePaymentType(int idPaymentType);

		// Date minimale pour qu'une date soit valide dans la base de données (01/01/1900)
		const static System::DateTime^ MIN_DATETIME = gcnew System::DateTime(1900, 01, 01);

	private:
		const static int MIN_BIRTHYEAR = 1901;
		const static int MIN_PURCHASEYEAR = 2000;
	};
}