#pragma once
#include <iostream>
using namespace std;
#include "BaseDecorator.h"

class ConcreteDecorator : public BaseDecorator
{
	int b;
public:
	ConcreteDecorator(int a, int b) : BaseDecorator(a) {
		this->b = b;
	}
	void concretePrint() {
		this->print();
		cout << "num 2: " << b << endl;
	}
};

