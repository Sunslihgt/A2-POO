#pragma once

#include "BaseObject.h"
#include "PaymentType.h"

namespace NS_Services {
	ref class PaymentMethod : public BaseObject {
	private:
		System::String^ name;
		System::String^ firstName;
		float amount;
		PaymentType^ paymentType;


	public:
		PaymentMethod(int id, bool isCreated, System::String^ name, System::String^ firstName, float amount, PaymentType^ paymentType);

		static PaymentMethod^ getPaymentMethodByid(int id);
		static array<PaymentMethod^>^ getPaymentMethods(System::String^ name, System::String^ firstName, float amount, PaymentType^ paymentType);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}