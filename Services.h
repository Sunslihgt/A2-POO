#pragma once

#include "DBController.h"

namespace NS_Services {
	public ref class Services {
	private:
		DB::DBController^ dbController = gcnew DB::DBController();

	public:
		Services();

		bool connectDB(System::String^ login, System::String^ password);

		System::Data::DataSet^ Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
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
	};
}