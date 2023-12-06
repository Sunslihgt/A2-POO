#include "Client.h"

namespace NS_Services {
	Client::Client(int id, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate) {
		this->id = id;
		//this->isCreated = isCreated;
		this->name = name;
		this->firstName = firstName;
		this->birthDate = birthDate;
		this->firstOrderDate = firstOrderDate;
		//this->deliveryAddresses = deliveryAddresses;
		//this->billingAddresses = billingAddresses;
		//this->purchases = purchases;
	}

	bool Client::create() {
		throw gcnew System::NotImplementedException();
	}

	bool Client::update() {
		throw gcnew System::NotImplementedException();
	}

	bool Client::deleteObject() {
		throw gcnew System::NotImplementedException();
	}

	System::String^ Client::getName() {
		return name;
	};

	void Client::setName(System::String^ name) {
		this->name = name;
	};

	System::String^ Client::getFirstName() {
		return firstName;
	};

	void Client::setFirstName(System::String^ firstName) {
		this->firstName = firstName;
	};

	System::DateTime^ Client::getBirthDate() {
		return birthDate;
	};

	void Client::setBirthDate(System::DateTime^ birthDate) {
		this->birthDate = birthDate;
	};

	System::DateTime^ Client::getFirstOrderDate() {
		return firstOrderDate;
	};

	void Client::setFirstOrderDate(System::DateTime^ firstOrderDate) {
		this->firstOrderDate = firstOrderDate;
	};
}