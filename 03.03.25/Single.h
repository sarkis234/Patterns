#pragma once
#include <iostream>
using namespace std;
#include <string>

class Single
{
	static Single* object;
	string name;
	int num;
public:
	Single(string, int);
	static Single* getInstance(string, int);

};

