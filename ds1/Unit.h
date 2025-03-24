#pragma once
#include <iostream>
using namespace std;
#include "GameObject.h"

class Unit : public GameObject
{
	int hp;
	int damage;
public:
	Unit(int, int, string);
	Unit* clone();
};

