#include "Client.h"

namespace NS_Services {
	Client::Client(int id, bool isCreated, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate, array<Address^>^ deliveryAddresses, array<Address^>^ billingAddresses, array<Purchase^>^ purchases) {
		this->id = id;
		this->isCreated = isCreated;
		this->name = name;
		this->firstName = firstName;
		this->birthDate = birthDate;
		this->firstOrderDate = firstOrderDate;
		this->deliveryAddresses = deliveryAddresses;
		this->billingAddresses = billingAddresses;
		this->purchases = purchases;
	}

	Client^ Client::getClientByid(int id) {
		throw gcnew System::NotImplementedException();
	}

	array<Client^>^ Client::getClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate, array<Address^>^ deliveryAddresses, array<Address^>^ billingAddresses, array<Purchase^>^ purchases) {
		throw gcnew System::NotImplementedException();
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
}