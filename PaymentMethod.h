#pragma once


#include "BaseObject.h"
#include "PaymentType.h"


ref class PaymentMethod {
private:

	System::String^ name;
	System::String^ firstName;

	float amount;

	PaymentType paymentType;


public:
	PaymentMethod(int id, bool isCreated, System::String^ name, System::String^ firstName, float amount, PaymentType::paymentType);
	
	void getPaymentMethodByid(int id);
	void getPaymentMethods(System::String^ name, System::String^ firstName, float amount, PaymentType::paymentType);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};