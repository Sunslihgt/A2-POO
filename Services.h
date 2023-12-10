#pragma once

#include "DBController.h"
#include "Mapper.h"

#include "Address.h"
#include "BaseObject.h"
#include "City.h"
#include "Client.h"
#include "Employee.h"
#include "Item.h"
#include "PaymentMethod.h"
#include "PaymentType.h"
#include "Purchase.h"
#include "PurchasedItem.h"

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
		System::Data::DataSet^ searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, int idClient);
		System::Data::DataSet^ searchAddresses(System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ searchCities(System::String^ cityName);

		System::Data::DataSet^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		// Crée un employé à l'aide d'une adresse (si l'adresse n'existe pas, elle est créée)
		System::Data::DataSet^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		// Crée un employé à l'aide d'une adresse et d'un nom de ville (si l'adresse ou la ville n'existe pas, elle est créée)
		System::Data::DataSet^ createEmployee(System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
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

		System::Data::DataSet^ updateClient(int idClient, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		System::Data::DataSet^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, int idAddress);
		System::Data::DataSet^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, int idCity);
		System::Data::DataSet^ updateEmployee(int idEmployee, System::String^ name, System::String^ firstName, System::DateTime^ startDate, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ updateItem(int idItem, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);

		bool deleteEmployee(int idEmployee);
		bool deleteClient(int idClient);
		bool deleteItem(int idItem);

		//System::Data::DataSet^ selectClientDeliveryAddressesByIdClient(int idClient);
		//System::Data::DataSet^ selectClientBillingAddressesByIdClient(int idClient);

		
		/*
		DataSet^ searchEmployees(System::String name, System::String firstName, System::String streetName, int streetNumber, System::String cityName);
		DataSet^ getEmployeeAdress(int employeeId);
		DataSet^ searchClientDeliveryAdresses(int clientId);
		DataSet^ searchClientBillingAdresses(int clientId);
		DataSet^ searchItems();
		DataSet^ searchPurchases();
		DataSet^ searchAddresses();
		DataSet^ searchStatistics();
		float getAveragePurchasePrice();
		float getTurnoverMonth(int year, int month);
		float getClientTotalSpending(int clientId);
		DataSet^ searchThresholdItems();
		DataSet^ searchMostSoldItems();
		DataSet^ searchLeastSoldItems();
		float getStoredSupplierPrice();
		float getStoredSellPrice();
		float getStoredValue(float vatPercent, float profitPercent, float unknownShrinkagePercent);
		*/

	
	
		// Date minimale pour qu'une date soit valide dans la base de données (01/01/1900)
		const static System::DateTime^ MIN_DATETIME = NS_DB::Mapper::MIN_DATETIME;
	
	};
}