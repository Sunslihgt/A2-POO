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

		static System::String^ searchEmployee(System::String^ name, System::String^ firstName, System::String^ streetName, System::String^ streetNumber, System::String^ cityName);
		static System::String^ searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ searchItems(System::String^ name, System::String^ reference);
		static System::String^ searchPurchasedItems(int item_id, System::String^ name, System::String^ reference);
		static System::String^ searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate);
		static System::String^ searchAddresses(System::String^ streetName, System::String^ streetNumber, System::String^ cityName);
		//static System::String^ searchCities(System::String^ cityName);
		//static System::String^ searchPaymentMethods(System::String^ name, System::String^ firstName);
		//static System::String^ searchPaymentTypes(System::String^ typeName);

		/*static System::String^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int cityId);
		static System::String^ createEmployeeCity(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ createItem(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ createPurchasedItem(int itemId, int purchasedQuantity, float totalPrice, float vatAmount);
		// static System::String^ createPurchasedItemToPurchase(purchaseID, purchaseItemId);
		static System::String^ createPurchase(int clientId, int paymentMethodId, System::DateTime^ purchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ createPurchaseNoPayment(int clientId, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ createAddress(System::String^ streetName, int streetNumber, int cityId);
		static System::String^ createAddressCity(System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ createCity(System::String^ cityName);
		static System::String^ createPaymentMethod(int purchaseId, System::String^ name, System::String^ firstName, float amount, int paymentTypeId);
		static System::String^ createPaymentMethodPaymentType(int purchaseId, System::String^ name, System::String^ firstName, float amount, int paymentTypeName);
		static System::String^ createPaymentType(System::String^ paymentTypeName);
							 
		static System::String^ updadeEmployee(int employeeId, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int cityId);
		static System::String^ updadeClient(int clientId, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		static System::String^ updadeItem(int itemId, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		static System::String^ updadePurchaseItem(int purchasedItemId, int itemId, int purchasedQuantity, float totalPrice, float vatAmount);
		static System::String^ updadePurchase(int purshaseId, int clientId, int paymentMethodId, System::DateTime^ purchaseDate, System::DateTime^ payDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ updadePurchaseNoPayment(int purchaseId, int clientId, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice);
		static System::String^ updadeAddress(int addressId, System::String^ streetName, int streetNumber, int cityId);
		static System::String^ updadeAddressCity(int addressId, System::String^ streetName, int streetNumber, System::String^ cityName);
		static System::String^ updadeCity(int cityId, System::String^ cityName);
		static System::String^ updadePaymentMethod(int paymentMethodId, int purchaseId, System::String^ name, System::String^ firstName, float amount, int paymentTypeId);
		static System::String^ updadePaymentType(int paymentTypeId, int paymentTypeName);

		static System::String^ deleteEmployee(int employeeId);
		static System::String^ deleteClient(int clientId);
		static System::String^ deleteItem(int itemId);
		static System::String^ deletePurchasedItem(int purchasedItemId);
		static System::String^ deletePurchase(int purchaseId);
		static System::String^ deletePurchaseNoPayment(int purchaseNoPaymentId);
		static System::String^ deleteAddress(int addressId);
		static System::String^ deleteAddressCity(int addressCityId);
		static System::String^ deleteCity(int cityId);
		static System::String^ deletePaymentMethod(int paymentMethodId);
		static System::String^ deletePaymentType(int paymentTypeId);*/
		





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
		const static int MIN_YEAR = 1901;
	};
}