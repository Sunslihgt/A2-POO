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
		DB::DBController^ dbController = gcnew DB::DBController();

	public:
		Services();

		bool connectDB(System::String^ login, System::String^ password);

		System::Data::DataSet^ Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		NS_Services::Client^ createClient(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		NS_Services::Client^ getClientById(int idClient);
		System::Data::DataSet^ selectClientDeliveryAddressesByIdClient(int idClient);
		System::Data::DataSet^ selectClientBillingAddressesByIdClient(int idClient);

		
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
		const static System::DateTime^ MIN_DATETIME = DB::Mapper::MIN_DATETIME;
	};
}