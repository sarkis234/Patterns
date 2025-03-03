#include "Single.h"

Single::Single(string name, int num)
{
	this->name = name;
	this->num = num;
}

Single* Single::getInstance(string name, int num)
{
	if (Single::object == nullptr) {
		Single::object = new Single(name, num);
	}
	return Single::object;
}
