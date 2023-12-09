#pragma once

#include "BaseObject.h"
#include "Address.h"
#include "Purchase.h"

namespace NS_Services {
	public ref class Client : public BaseObject {
	private:
		System::String^ name;
		System::String^ firstName;

		System::DateTime^ birthDate;
		System::DateTime^ firstOrderDate;

		//array<Address^>^ deliveryAddresses;
		//array<Address^>^ billingAddresses;
		//array<Purchase^>^ purchases;


	public:
		Client(int id, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate);
		//Client(int id, bool isCreated, System::String^ name, System::String^ firstName, System::DateTime^ birthDate, System::DateTime^ firstOrderDate, array<Address^>^ deliveryAddresses, array<Address^>^ billingAddresses, array<Purchase^>^ purchases);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;

		System::String^ getName();
		void setName(System::String^ name);
		
		System::String^ getFirstName();
		void setFirstName(System::String^ firstName);
		
		System::DateTime^ getBirthDate();
		void setBirthDate(System::DateTime^ birthDate);
		
		System::DateTime^ getFirstOrderDate();
		void setFirstOrderDate(System::DateTime^ firstOrderDate);

	};
}