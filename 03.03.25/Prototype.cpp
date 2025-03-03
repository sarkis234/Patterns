#include "Prototype.h"

Shape::Shape(string name, int num)
{
	this->name = name;
	this->sidesNum = num;
}

Shape::Shape(Shape& obj)
{
	this->name = obj.name;
	this->sidesNum = obj.sidesNum;
}

