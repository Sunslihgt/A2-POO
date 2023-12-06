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
	};
}
