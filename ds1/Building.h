#pragma once
#include <iostream>
using namespace std;
#include "GameObject.h"
#include "Unit.h"
#include <vector>

class Building : public GameObject
{
	vector<Unit> enemies;
public:
	Building(vector<Unit>, string);
	Building* clone();
};

