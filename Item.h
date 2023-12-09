#pragma once

#include "BaseObject.h"

namespace NS_Services {
	public ref class Item : public BaseObject {
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
		Item(int id, bool isCreated, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);

		static Item^ getItemByid(int id);
		static array<Item^>^ getItems(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}