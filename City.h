#pragma once

#include "BaseObject.h"

namespace NS_Services {
	public ref class City : public BaseObject {
	private:

		System::String^ cityName;

	public:
		City(int id, bool isCreated, System::String^ cityName);

		static City^ getCityByid(int id);
		static array<City^>^ getCities(System::String^ cityName);

		virtual bool create() override;
		virtual bool update() override;
		virtual bool deleteObject() override;
	};
}