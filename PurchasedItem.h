#pragma once

#include "BaseObject.h"
#include "Item.h"

namespace NS_Services {
	ref class PurchasedItem : public BaseObject {
	private:
		int itemAmount;
		float totalPrice;
		float vatAmount;
		Item^ item;

	public:
		PurchasedItem(int id, bool isCreated, int itemAmount, float totalPrice, float vatAmount, Item^ item);

		static PurchasedItem^ getPurchasedItemByid(int id);
		static array<PurchasedItem^>^ getPurchasedItems(int itemAmount, float totalPrice, float vatAmount, Item^ item);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}
