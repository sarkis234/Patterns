#pragma once
#include <iostream>
using namespace std;
#include "Decorator.h"

class BaseDecorator
{
	Decorator wrap;
public:
	BaseDecorator(Decorator wrap) {
		this->wrap = wrap;
	}
	void print() {
		this->wrap.print();
	}
};

