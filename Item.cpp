#include "Item.h"

namespace NS_Services {
    Item::Item(int id, bool isCreated, System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
        this->id = id;
        this->isCreated = isCreated;
        this->name = name;
		this->reference = reference;
		this->quantity = quantity;
		this->availableQuantity = availableQuantity;
		this->quantityThreshold = quantityThreshold;
		this->supplierPrice = supplierPrice;
		this->unitPrice = unitPrice;
		this->vatRate = vatRate;
    }

    Item^ Item::getItemByid(int id) {
        throw gcnew System::NotImplementedException();
    }

    array<Item^>^ Item::getItems(System::String^ name, System::String^ reference, int quantity, int availableQuantity, int quantityThreshold, float supplierPrice, float unitPrice, float vatRate) {
        throw gcnew System::NotImplementedException();
    }

    bool Item::create() {
        throw gcnew System::NotImplementedException();
    }

    bool Item::update() {
        throw gcnew System::NotImplementedException();
    }

    bool Item::deleteObject() {
        throw gcnew System::NotImplementedException();
    }
}
