#pragma once

#include "BaseObject.h"

namespace NS_Services {
	public ref class PaymentType : public BaseObject {
	private:
		System::String^ typeName;

	public:
		PaymentType(int id, bool isCreated, System::String^ typeName);

		static PaymentType^ getPaymentTypeByid(int id);
		static array<PaymentType^>^ getPaymentTypes(System::String^ typeName);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}