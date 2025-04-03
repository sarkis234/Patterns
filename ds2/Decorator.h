#pragma once
#include <iostream>
using namespace std;

class Decorator
{
	int a;
public:
	Decorator() {
		a = 1;
	}
	Decorator(int a) { this->a = a; }
	void print();

};

