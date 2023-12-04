#include <iostream>

#include "BaseObject.h"

namespace NS_Services {
	BaseObject::BaseObject(int id, bool isCreated) {
		this->id = id;
		this->isCreated = isCreated;
	}
}
