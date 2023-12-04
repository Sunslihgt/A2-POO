#include "Purchase.h"

Purchase::Purchase(int id, bool isCreated, DateTime orderDate, DateTime payDate, DateTime deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address deliveryAddress, Address paymentAddress, PaymentMethod::paymentMethod, std::array<PurchasedItem, sizeof items>)
{
    throw gcnew System::NotImplementedException();
}

void Purchase::getPurchaseByid(int id)
{
    throw gcnew System::NotImplementedException();
}

void Purchase::getPurchases(int id, DateTime orderDate, DateTime payDate, DateTime deliveryDate, float discountAmount, float dutyFreePrice, float vatPrice, float ttcPrice, Address deliveryAddress, Address paymentAddress, PaymentMethod::paymentMethod, std::array<PurchasedItem, sizeof items>)
{
    throw gcnew System::NotImplementedException();
}
