#include "Employee.h"

namespace NS_Services {
    Employee::Employee(int id, bool isCreated, System::String^ name, System::String^ firstName, System::DateTime^ startDate, Address^ address) : BaseObject(id, isCreated) {
        this->name = name;
		this->firstName = firstName;
		this->startDate = startDate;
		this->address = address;
    }

    Employee^ Employee::getEmployeeByid(int id) {
        throw gcnew System::NotImplementedException();
    }

    array<Employee^>^ Employee::getEmployees(System::String^ name, System::String^ firstName, System::DateTime^ startDate, Address^ address) {
        throw gcnew System::NotImplementedException();
    }

    bool Employee::create() {
        throw gcnew System::NotImplementedException();
    }

    bool Employee::update() {
        throw gcnew System::NotImplementedException();
    }

    bool Employee::deleteObject() {
        throw gcnew System::NotImplementedException();
    }
}