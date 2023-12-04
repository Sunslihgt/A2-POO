#pragma once
#include <iostream>

class BaseObject {
protected:
	int id;
	bool isCreated;

public:
	virtual bool create() = 0;
	virtual bool update() = 0;
	virtual bool delete() = 0;
};