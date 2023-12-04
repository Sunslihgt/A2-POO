#pragma once

#include "BaseObject.h"
#include "PurchasedItem.h"
#include "PaymentMethod.h"
#include "Address.h"

namespace NS_Services {
	ref class Purchase : public BaseObject {
	private:

		System::DateTime^ orderDate;
		System::DateTime^ payDate;
		System::DateTime^ deliveryDate;

		float discountAmount;
		float dutyFreePrice;
		float vatPrice;
		float ttcPrice;

		Address^ deliveryAddress;
		Address^ paymentAddress;

		PaymentMethod^ paymentMethod;

		array<PurchasedItem^>^ purchasedItems;

	public:
		Purchase(int id, bool isCreated, System::DateTime^ orderDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address^ deliveryAddress, Address^ paymentAddress, PaymentMethod^ paymentMethod, array<PurchasedItem^>^ purchasedItems);

		static Purchase^ getPurchaseByid(int id);
		static array<Purchase^>^ getPurchases(int id, System::DateTime^ orderDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address^ deliveryAddress, Address^ paymentAddress, PaymentMethod^ paymentMethod, array<PurchasedItem^>^ purchasedItems);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}