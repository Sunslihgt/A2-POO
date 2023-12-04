#include "PaymentType.h"

namespace NS_Services {
    PaymentType::PaymentType(int id, bool isCreated, System::String^ typeName) : BaseObject(id, isCreated) {
        this->typeName = typeName;
    }

    PaymentType^ PaymentType::getPaymentTypeByid(int id) {
        throw gcnew System::NotImplementedException();
    }

    array<PaymentType^>^ PaymentType::getPaymentTypes(System::String^ typeName) {
        throw gcnew System::NotImplementedException();
    }

    bool PaymentType::create() {
        throw gcnew System::NotImplementedException();
    }

    bool PaymentType::update() {
        throw gcnew System::NotImplementedException();
    }

    bool PaymentType::deleteObject() {
        throw gcnew System::NotImplementedException();
    }
}
