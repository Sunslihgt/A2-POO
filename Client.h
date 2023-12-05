#pragma once

#include "BaseObject.h"
#include "Address.h"
#include "Purchase.h"

namespace NS_Services {
	ref class Client : public BaseObject {
	private:
		System::String^ name;
		System::String^ firstName;

		System::DateTime^ birthDate;
		System::DateTime^ firstOrderDate;

		array<Address^>^ deliveryAddresses;
		array<Address^>^ billingAddresses;
		array<Purchase^>^ purchases;


	public:
		Client(int id, bool isCreated, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate, array<Address^>^ deliveryAddresses, array<Address^>^ billingAddresses, array<Purchase^>^ purchases);

		static Client^ getClientByid(int id);
		static array<Client^>^ getClients(System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate, array<Address^>^ deliveryAddresses, array<Address^>^ billingAddresses, array<Purchase^>^ purchases);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}