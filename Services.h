#pragma once
#include "Mapper.h"
#include "DBController.h"

namespace Services {
	public ref class Services {
	private:
		DB::DBController^ dbController;

	public:
		Services(System::String^ login, System::String^ password);
		System::Void Services::Services::searchClients(System::String^ name);
	};
}
