#pragma once

namespace DB {
	ref class Mapper {
	public:
		
		/*static System::String^ selectEmployeeById(int id);
		static System::String^ selectClientById(int id);
		static System::String^ selectItemById(int id);
		static System::String^ selectPurchasedItemById(int id);
		static System::String^ selectPurchaseById(int id);
		static System::String^ selectAdressById(int id);
		static System::String^ selectCityById(int id);
		static System::String^ selectPaymentMethodById(int id);
		static System::String^ selectPaymentTypeById(int id);*/

		static System::String^ searchEmployee(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ searchItems(System::String^ name, System::String^ reference);
		static System::String^ searchPurchasedItems(int idItem, System::String^ name, System::String^ reference);
		static System::String^ searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate);
		static System::String^ searchAddresses(System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ searchCities(System::String^ cityName);
		static System::String^ searchPaymentMethods(System::String^ name, System::String^ firstName);
		static System::String^ searchPaymentTypes(System::String^ typeName);

		/*static System::String^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		static System::String^ createEmployeeCity(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ createItem(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ createPurchasedItem(int idItem, int purchasedQuantity, float totalPrice, float vatAmount);
		// static System::String^ createPurchasedItemToPurchase(idPurchase, idPurchaseItem);
		static System::String^ createPurchase(int idClient, int idPaymentMethod, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ createPurchaseNoPayment(int idClient, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ createAddress(System::String^ streetName, int streetNumber, int idCity);
		static System::String^ createAddressCity(System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ createCity(System::String^ cityName);
		static System::String^ createPaymentMethod(int idPurchase, System::String^ name, System::String^ firstName, float amount, int idPaymentType);
		static System::String^ createPaymentMethodPaymentType(int idPurchase, System::String^ name, System::String^ firstName, float amount, int paymentTypeName);
		static System::String^ createPaymentType(System::String^ paymentTypeName);*/
						 
		static System::String^ updadeEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		static System::String^ updadeClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ updadeItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ updadePurchasedItem(int idPurchasedItem, int idItem, int purchasedQuantity, float totalPrice, float vatAmount);
		static System::String^ updadePurchase(int idPurchase, int idClient, int idPaymentMethod, System::DateTime^ purchaseDate, System::DateTime^ payDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ updadePurchaseNoPayment(int idPurchase, int idClient, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ updadeAddress(int idAddress, System::String^ streetName, int streetNumber, int idCity);
		static System::String^ updadeAddressCity(int idAddress, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ updadeCity(int idCity, System::String^ cityName);
		static System::String^ updadePaymentMethod(int idPaymentMethod, int idPurchase, System::String^ name, System::String^ firstName, float amount, int idPaymentType);
		static System::String^ updadePaymentType(int idPaymentType, System::String^ paymentTypeName);

		/*static System::String^ deleteEmployee(int idEmployee);
		static System::String^ deleteClient(int idClient);
		static System::String^ deleteItem(int idItem);
		static System::String^ deletePurchasedItem(int idPurchasedItem);
		static System::String^ deletePurchase(int idPurchase);
		static System::String^ deletePurchaseNoPayment(int idPurchaseNoPayment);
		static System::String^ deleteAddress(int idAddress);
		static System::String^ deleteAddressCity(int idCity);
		static System::String^ deleteCity(int idCity);
		static System::String^ deletePaymentMethod(int idPaymentMethod);
		static System::String^ deletePaymentType(int idPaymentType);*/
		





		/*private:
			System::System::String^ sSql;
			int Id;
			System::System::String^ nom;
			System::System::String^ prenom;
		public:
			System::System::String^ Select(void);
			System::System::String^ Insert(void);
			System::System::String^ Delete(void);
			System::System::String^ Update(void);
			void setId(int);
			void setNom(System::System::String^);
			void setPrenom(System::System::String^);
			int getId(void);
			System::System::String^ getNom(void);
			System::System::String^ getPrenom(void);
		*/

	private:
		const static int MIN_BIRTHYEAR = 1901;
		const static int MIN_PURCHASEYEAR = 2000;
	};
}