#pragma once

#include "BaseObject.h"
#include "Address.h"
#include "Purchase.h"
#include <array>
#include <ctime>

ref class Client {
private:

	System::String^ name;
	System::String^ firstName;

	DateTime birthDate;
	DateTime firstOrderDate;

	typedef std::array<deliveryAddresses, sizeof Address>;
	typedef std::array<billingAddresses, sizeof Address>;
	typedef std::array<purchases, sizeof Purchase>;
	

public:
	Client(int id, bool isCreated, System::String^ name, System::String^ firstName, DateTime birthDate, DateTime firstOrderDate, std::array<deliveryAddresses, sizeof Address>, std::array<billingAddresses, sizeof Address>, std::array<purchases, sizeof Purchase>);

	void getClientByid(int id);
	void getClients(System::String^ name, System::String^ firstName, DateTime birthDate, DateTime firstOrderDate, std::array<deliveryAddresses, sizeof Address>, std::array<billingAddresses, sizeof Address>, std::array<purchases, sizeof Purchase>);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};