#pragma once

#include "BaseObject.h"
#include "City.h"

ref class Address {
private:

	System::String^ streetName;

	int streetNumber;


public:
	Address(int id, bool isCreated, System::String^ streetName, int streetNumber);

	void getAddressByid(int id);
	void getAddresses(int id, System::String^ streetName, int streetNumber);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};