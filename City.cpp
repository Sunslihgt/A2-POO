#include "City.h"

namespace NS_Services {
	City::City(int id, bool isCreated, System::String^ cityName) : BaseObject(id, isCreated) {
		this->cityName = cityName;
	}

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