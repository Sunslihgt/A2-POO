#pragma once


#include "BaseObject.h"


ref class PaymentType {
private:

	System::String^ typeName;

public:
	PaymentType(int id, bool isCreated, System::String^ typeName);

	void getPaymentMethodByid(int id);
	void getPaymentMethods(System::String^ typeName);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};