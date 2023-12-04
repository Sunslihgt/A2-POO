#include "Employee.h"

System::Void Employee::setName(System::String^ name) {
	this->name = name;
}

System::Void Employee::setfirstName(System::String^ firstName) {
	this->firstName = firstName;
}

System::String^ Employee::getfirstName() {
	return firstName;
}

/*void Employee::setstartDate(Int32 a, Int32 b, Int32 c) {
	startDate = DateOnly(a, b, c);
}*/

//void Employee::setIdAddress(String^) {
//
//}


