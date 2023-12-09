#include "City.h"

namespace NS_Services {
	City::City(int id, bool isCreated, System::String^ cityName) {
		this->id = id;
		this->isCreated = isCreated;
		this->cityName = cityName;
	}

	//System::Data::DataSet^ City::getDataSet() {
	//	System::Data::DataSet^ dataSet = gcnew System::Data::DataSet();
	//	System::Data::DataTable^ dataTable = gcnew System::Data::DataTable("City");
	//	dataTable->Columns->Add("idCity", System::Int32::typeid);
	//	dataTable->Columns->Add("cityName", System::Boolean::typeid);
	//	System::Data::DataRow^ dataRow = dataTable->NewRow();
	//	dataRow["idCity"] = this->id;
	//	dataRow["cityName"] = this->cityName;
	//	dataTable->Rows->Add(dataRow);
	//	dataSet->Tables->Add(dataTable);

	//	return dataSet;
	//}

	City^ City::getCityByid(int id) {
		throw gcnew System::NotImplementedException();
	}

	array<City^>^ City::getCities(System::String^ cityName) {
		throw gcnew System::NotImplementedException();
	}

	bool City::create() {
		throw gcnew System::NotImplementedException();
	}

	bool City::update() {
		throw gcnew System::NotImplementedException();
	}

	bool City::deleteObject() {
		throw gcnew System::NotImplementedException();
	}
}