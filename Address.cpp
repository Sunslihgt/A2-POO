#include "Address.h"

namespace NS_Services {
	Address::Address(int id, bool isCreated, System::String^ streetName, int streetNumber) {
		this->id = id;
		this->isCreated = isCreated;
		this->streetName = streetName;
		this->streetNumber = streetNumber;
	}

	Address^ Address::getAddressByid(int id) {
		throw gcnew System::NotImplementedException();
	}

	array<Address^>^ Address::getAddresses(int id, System::String^ streetName, int streetNumber) {
		throw gcnew System::NotImplementedException();
	}
	bool Address::create() {
		throw gcnew System::NotImplementedException();
	}
	bool Address::update() {
		throw gcnew System::NotImplementedException();
	}
	bool Address::deleteObject() {
		throw gcnew System::NotImplementedException();
	}
}
