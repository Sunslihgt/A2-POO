#pragma once
using namespace System::IO;
using namespace System;

ref class Employee {
public:
	void setName(String);
	void setfirstName(String);
	// void setstartDate(Int32,Int32, Int32);
	void setIdAddress(String^);

	String getfirstName();

private:
	int IdEmployee;
	String Name;
	String firstName;
	// DateOnly startDate;
	int IdAddress;
};