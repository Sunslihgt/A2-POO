#pragma once

#include "BaseObject.h"
#include "Address.h"

ref class Employee {
private:

	System::String^ name;
	System::String^ firstName;

	DateTime startDate;

	Address address;

public:
	Employee(int id, bool isCreated, System::String^ name, System::String^ firstName, DateTime startDate, Address address);

	void getEmployeeByid(int id);
	void getEmployees(System::String^ name, System::String^ firstName, DateTime startDate, Address address);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};