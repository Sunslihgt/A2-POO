#pragma once

#include "BaseObject.h"
#include "City.h"

namespace NS_Services {
	ref class Address : public BaseObject {
	private:
		System::String^ streetName;
		int streetNumber;


	public:
		Address(int id, bool isCreated, System::String^ streetName, int streetNumber);

		static Address^ getAddressByid(int id);
		static array<Address^>^ getAddresses(int id, System::String^ streetName, int streetNumber);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}