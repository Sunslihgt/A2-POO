#include "Purchase.h"

namespace NS_Services {
    Purchase::Purchase(int id, bool isCreated, System::DateTime^ orderDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address^ deliveryAddress, Address^ paymentAddress, PaymentMethod^ paymentMethod, array<PurchasedItem^>^ purchasedItems) : BaseObject(id, isCreated) {
		this->orderDate = orderDate;
		this->payDate = payDate;
		this->deliveryDate = deliveryDate;
		this->discountAmount = discountAmount;
		this->dutyFreePrice = dutyFreePrice;
		this->vatPrice = vatPrice;
		this->ttcPrice = ttcPrice;
		this->deliveryAddress = deliveryAddress;
		this->paymentAddress = paymentAddress;
		this->paymentMethod = paymentMethod;
		this->purchasedItems = purchasedItems;
	}

	Purchase^ Purchase::getPurchaseByid(int id) {
		throw gcnew System::NotImplementedException();
		// TODO: insérer une instruction return ici
	}

	array<Purchase^>^ Purchase::getPurchases(int id, System::DateTime^ orderDate, System::DateTime^ payDate, System::DateTime^ deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address^ deliveryAddress, Address^ paymentAddress, PaymentMethod^ paymentMethod, array<PurchasedItem^>^ purchasedItems) {
		throw gcnew System::NotImplementedException();
	}

	bool Purchase::create() {
		throw gcnew System::NotImplementedException();
	}

	bool Purchase::update() {
		throw gcnew System::NotImplementedException();
	}

	bool Purchase::deleteObject() {
		throw gcnew System::NotImplementedException();
	}
}
