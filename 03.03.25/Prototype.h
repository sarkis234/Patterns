#pragma once
#include <iostream>
using namespace std;
#include <string>

class Shape
{
	string name;
	int sidesNum;

public:
	Shape(string, int);
protected:
	Shape(Shape &obj);
};