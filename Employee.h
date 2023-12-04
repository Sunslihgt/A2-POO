#pragma once

ref class Employee {
public:
	System::Void setName(System::String^ name);
	System::Void setfirstName(System::String^ firstName);
	// System::Void setstartDate(Int32,Int32, Int32);
	// System::Void setIdAddress(System::String^);

	System::String^ getfirstName();

private:
	int IdEmployee;
	System::String^ name;
	System::String^ firstName;
	// DateOnly startDate;
	int IdAddress;
};