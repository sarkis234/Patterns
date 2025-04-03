#pragma once
#include <iostream>
using namespace std;
#include "BaseDecorator.h"

class ConcreteDecorator2 : public BaseDecorator
{
	int c;
public:
	ConcreteDecorator2(int a, int c) : BaseDecorator(a) {
		this->c = c;
	}
	void ConcretePrint() {
		this->print();
		cout << "num 3: " << c << endl;
	}
};

