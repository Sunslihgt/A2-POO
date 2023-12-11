#pragma once

namespace NS_DB {
	public ref class Mapper {
	public:
		static System::String^ selectEmployeeById(int id);
		static System::String^ selectClientById(int id);
		static System::String^ selectItemById(int id);
		static System::String^ selectPurchasedItemById(int id);
		static System::String^ selectPurchaseById(int id);
		static System::String^ selectCityById(int id);
		static System::String^ selectAddressById(int id);
		static System::String^ selectPaymentMethodById(int id);
		static System::String^ selectPaymentTypeById(int id);

		static System::String^ searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ searchItems(System::String^ name, System::String^ reference);
		static System::String^ searchPurchasedItems(int idPurchase, int idItem);
		static System::String^ searchPurchases(int idClient, System::String^ clientName, System::String^ clientFirstName, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate);
		static System::String^ searchAddresses(System::String^ streetName, int streetNumber, int idCity);
		static System::String^ searchAddresses(System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ searchCities(System::String^ cityName);
		static System::String^ searchPaymentMethods(int idPaymentAddress, int idPurchase, int idPaymentType);
		static System::String^ searchPaymentTypes(System::String^ typeName);

		static System::String^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		static System::String^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate);
		static System::String^ createItem(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ createPurchasedItem(int itemAmount, float totalPrice, float vatAmount, int idPurchase, int idItem);
		static System::String^ createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, int idDeliveryAddress);
		static System::String^ createAddress(System::String^ streetName, int streetNumber, int idCity);
		static System::String^ createCity(System::String^ cityName);
		static System::String^ createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, int idPaymentAddress);
		static System::String^ createPaymentType(System::String^ paymentTypeName);

		static System::String^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		static System::String^ updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ updateItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ updatePurchasedItem(int idPurchasedItem, int idItem, int idPurchase, int itemAmount, float totalPrice, float vatAmount);
		static System::String^ updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idDeliveryAddress, int idClient);
		static System::String^ updateAddress(int idAddress, System::String^ streetName, int streetNumber, int idCity);
		static System::String^ updateCity(int idCity, System::String^ cityName);
		static System::String^ updatePaymentMethod(int idPaymentMethod, int idPaymentAddress, int idPaymentType, System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate);
		static System::String^ updatePaymentType(int idPaymentType, System::String^ paymentTypeName);

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
		static System::String^ deleteManage(int idEmployee, bool isSuperior);

		static System::String^ calculatePurchaseTotalPrice(int idPurchase);
		static System::String^ calculateAveragePurchasePrice();
		static System::String^ calculateStoredSupplierPrice();
		static System::String^ calculateStoredSellPrice();
		static System::String^ calculateClientTotalSpendingPurchases(int idClient);
		static System::String^ calculateClientTotalSpendingPaymentMethods(int idClient);
			

		// Date minimale pour qu'une date soit valide dans la base de données (01/01/1900)
		const static System::DateTime^ MIN_DATETIME = gcnew System::DateTime(1900, 01, 01);
		const static System::DateTime^ MIN_PURCHASE_DATE = gcnew System::DateTime(MIN_PURCHASEYEAR, 01, 01);

	private:
		const static int MIN_BIRTHYEAR = 1901;
		const static int MIN_PURCHASEYEAR = 2000;
	};
}