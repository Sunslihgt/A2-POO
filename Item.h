#pragma once

#include "BaseObject.h"

ref class Item {
private:
	System::String^ name;
	System::String^ reference;

	int quantity;
	int availableQuantity;
	int quantityThreshold;

	float supplierPrice;
	float unitPrice;
	float vatRate;

public:
	Item(int id, bool isCreated, System::String name, System::String reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);

	void getItemByid(int id);
	void getItems(System::String name, System::String reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};