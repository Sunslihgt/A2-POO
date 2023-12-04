#pragma once

#include "BaseObject.h"
#include "PurchasedItem.h"
#include "PaymentMethod.h"
#include "Address.h"
#include <array>

ref class Purchase {
private:

	DateTime orderDate;
	DateTime payDate;
	DateTime deliveryDate;

	float discountAmount;
	float dutyFreePrice;
	float vatPrice;
	float ttcPrice;

	Address deliveryAddress;
	Address paymentAddress;

	PaymentMethod paymentMethod;

	typedef std::array<PurchasedItem, sizeof Item>;

public:
	Purchase(int id, bool isCreated, DateTime orderDate, DateTime payDate, DateTime deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address deliveryAddress, Address paymentAddress, PaymentMethod::paymentMethod, std::array<PurchasedItem, sizeof items>);

	void getPurchaseByid(int id);
	void getPurchases(int id, DateTime orderDate, DateTime payDate, DateTime deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address deliveryAddress, Address paymentAddress, PaymentMethod::paymentMethod, std::array<PurchasedItem, sizeof items>);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};