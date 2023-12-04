#include "PaymentMethod.h"

namespace NS_Services {
	PaymentMethod::PaymentMethod(int id, bool isCreated, System::String^ name, System::String^ firstName, float amount, PaymentType^ paymentType) : BaseObject(id, isCreated) {
		this->name = name;
		this->firstName = firstName;
		this->amount = amount;
		this->paymentType = paymentType;
	}

	PaymentMethod^ PaymentMethod::getPaymentMethodByid(int id) {
		throw gcnew System::NotImplementedException();
	}

	array<PaymentMethod^>^ PaymentMethod::getPaymentMethods(System::String^ name, System::String^ firstName, float amount, PaymentType^ paymentType) {
		throw gcnew System::NotImplementedException();
	}

	bool PaymentMethod::create() {
		throw gcnew System::NotImplementedException();
	}

	bool PaymentMethod::update() {
		throw gcnew System::NotImplementedException();
	}

	bool PaymentMethod::deleteObject() {
		throw gcnew System::NotImplementedException();
	}
}
