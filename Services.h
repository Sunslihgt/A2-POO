#pragma once
#include "Mapper.h"
#include "DBController.h"

namespace Services {
	public ref class Services {
	private:
		DB::DBController^ dbController;

	public:
		Services();

		bool connectDB(System::String^ login, System::String^ password);

		System::Data::DataSet^ Services::Services::searchClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstPurchaseDate);
		System::Data::DataSet^ Services::Services::searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName);
		System::Data::DataSet^ Services::Services::searchItems(System::String^ name, System::String^ reference);
		System::Data::DataSet^ Services::Services::searchPurchases(System::String^ clientName, System::String^ clientFirstName, System::DateTime^ PurchaseDate, System::DateTime^ payDate, System::DateTime^ deliveryDate);
	
	
	
	};
}
