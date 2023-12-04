#pragma once

#include "BaseObject.h"
#include "Item.h"

ref class PurchasedItem {
private:

	int itemAmount;

	float totalPrice;
	float vatAmount;


public:
	PurchasedItem(int id, bool isCreated, int itemAmount, float totalPrice, float vatAmount, Item::item);

	void getItemByid(int id);
	void getItems(int itemAmount, float totalPrice, float vatAmount);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};