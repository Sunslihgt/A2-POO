#include "PurchasedItem.h"

namespace NS_Services {
	PurchasedItem::PurchasedItem(int id, bool isCreated, int itemAmount, float totalPrice, float vatAmount, Item^ item) : BaseObject(id, isCreated) {
		this->itemAmount = itemAmount;
		this->totalPrice = totalPrice;
		this->vatAmount = vatAmount;
		this->item = item;
	}

	PurchasedItem^ PurchasedItem::getPurchasedItemByid(int id) {
		throw gcnew System::NotImplementedException();
	}

	array<PurchasedItem^>^ PurchasedItem::getPurchasedItems(int itemAmount, float totalPrice, float vatAmount, Item^ item) {
		throw gcnew System::NotImplementedException();
	}

	bool PurchasedItem::create() {
		throw gcnew System::NotImplementedException();
	}

	bool PurchasedItem::update() {
		throw gcnew System::NotImplementedException();
	}

	bool PurchasedItem::deleteObject() {
		throw gcnew System::NotImplementedException();
	}
}
