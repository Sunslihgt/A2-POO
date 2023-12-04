#pragma once

#include "BaseObject.h"

ref class City {
private:

	System::String^ cityName;

public:
	City(int id, bool isCreated, System::String^ cityName);

	void getCityByid(int id);
	void getCities(System::String^ cityName);

	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};