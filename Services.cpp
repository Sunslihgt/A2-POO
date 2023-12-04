#include "Services.h"

namespace NS_Services {
	System::Data::DataSet^ searchEmployees(System::String^ name, System::String^ firstName, System::String^ streetName, int streetNumber, System::String^ cityName) {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ getEmployeeAdress(int employeeId) {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchClientDeliveryAdresses(int clientId) {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchClientBillingAdresses(int clientId) {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchItems() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchPurchases() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchAddresses() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchStatistics() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	float getAveragePurchasePrice() {
		return 0.0f;
	}

	float getTurnoverMonth(int year, int month) {
		return 0.0f;
	}

	float getClientTotalSpending(int clientId) {
		return 0.0f;
	}

	System::Data::DataSet^ searchThresholdItems() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchMostSoldItems() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	System::Data::DataSet^ searchLeastSoldItems() {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	float getStoredSupplierPrice() {
		return 0.0f;
	}

	float getStoredSellPrice() {
		return 0.0f;
	}

	float getStoredValue(float vatPercent, float profitPercent, float unknownShrinkagePercent) {
		return 0.0f;
	}
}
