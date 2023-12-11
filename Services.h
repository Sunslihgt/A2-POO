#pragma once

#include "DBController.h"
#include "Mapper.h"

namespace NS_Services {
	public ref class Services {
	private:
		NS_DB::DBController^ dbController = gcnew NS_DB::DBController();

	public:
		Services();

		bool connectDB(System::String^ login, System::String^ password);

		System::Data::DataSet^ searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		System::Data::DataSet^ searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ searchItems(System::String^ name, System::String^ reference);
		System::Data::DataSet^ searchPurchases(int idClient, System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ deliveryDate);
		System::Data::DataSet^ searchAddresses(System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ searchCities(System::String^ cityName);
		System::Data::DataSet^ searchPaymentMethods(int idPaymentAddress, int idPurchase, int idPaymentType);
		System::Data::DataSet^ searchPurchasedItems(int idPurchase, int idItem);

		System::Data::DataSet^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		// Crée un employé à l'aide d'une adresse (si l'adresse n'existe pas, elle est créée)
		System::Data::DataSet^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		// Crée un employé à l'aide d'une adresse et d'un nom de ville (si l'adresse ou la ville n'existe pas, elle est créée)
		System::Data::DataSet^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		System::Data::DataSet^ createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, int idDeliveryAddress);
		System::Data::DataSet^ createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ createPurchase(System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ createPurchasedItem(int itemAmount, int idPurchase, int idItem);
		System::Data::DataSet^ createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, int idPaymentAddress);
		System::Data::DataSet^ createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ createPaymentMethod(System::String^ name, System::String^ firstName, float amount, System::DateTime^ payDate, int idPaymentType, int idPurchase, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ createCity(System::String^ cityName);
		System::Data::DataSet^ createAddress(System::String^ streetName, int streetNumber, int idCity);
		// Crée une adresse à l'aide d'un nom de ville (si la ville n'existe pas, elle est créée)
		System::Data::DataSet^ createAddress(System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ createItem(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);

		
		System::Data::DataSet^ getEmployeeById(int idEmployee);
		System::Data::DataSet^ getClientById(int idClient);
		System::Data::DataSet^ getCityById(int idCity);
		System::Data::DataSet^ getAddressById(int idAddress);
		System::Data::DataSet^ getItemById(int idItem);
		System::Data::DataSet^ getPurchaseById(int idPurchase);
		System::Data::DataSet^ getPurchasedItemById(int idPurchasedItem);
		System::Data::DataSet^ getPaymentMethodById(int idPaymentMethod);

		System::Data::DataSet^ updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		System::Data::DataSet^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		System::Data::DataSet^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ updateItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);
		System::Data::DataSet^ updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, int idDeliveryAddress);
		System::Data::DataSet^ updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ updatePurchase(int idPurchase, System::DateTime^ purchaseDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatAmount, float ttcPrice, int idClient, System::String^ streetName, int streetNumber, System::String^ cityName);
		bool updatePurchasePrices(int idPurchase);


		// Ahoute à la quantité totale et disponible d'un item la quantité passée en paramètre
		System::Data::DataSet^ modifyItemQuantity(int idItem, int quantity);

		bool deleteEmployee(int idEmployee);
		bool deleteClient(int idClient);
		bool deleteItem(int idItem);
		bool deletePurchasedItem(int idItem);
		bool deletePurchase(int idPurchase);

		float calculateAveragePurchasePrice();
		float calculateStoredSupplierPrice();
		float calculateStoredSellPrice();
		float calculateClientTotalSpendingPurchases(int idClient);
		float calculateClientTotalSpendingPaymentMethods(int idClient);
		float calculateTurnOverMonth(int month, int year);
		float calculateStoredValueManual(float profitPercent, float vatPercent, float unknownShrinkagePercent);
		System::Data::DataSet^ getItemsUnderThreshold();
		System::Data::DataSet^ getItemsMostSold();
		System::Data::DataSet^ getItemsLeastSold();
	
		// Date minimale pour qu'une date soit valide dans la base de données (01/01/1900)
		const static System::DateTime^ MIN_DATETIME = NS_DB::Mapper::MIN_DATETIME;
		const static System::DateTime^ MIN_PURCHASE_DATE = NS_DB::Mapper::MIN_PURCHASE_DATE;
	
	};
}