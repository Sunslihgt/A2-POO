#pragma once

#include "BaseObject.h"
#include "Address.h"

namespace NS_Services {
	public ref class Employee : public BaseObject {
	private:
		System::String^ name;
		System::String^ firstName;
		System::DateTime^ startDate;
		Address^ address;

	public:
		Employee(int id, bool isCreated, System::String^ name, System::String^ firstName, System::DateTime^ startDate, Address^ address);

		static Employee^ getEmployeeByid(int id);
		static array<Employee^>^ getEmployees(System::String^ name, System::String^ firstName, System::DateTime^ startDate, Address^ address);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}