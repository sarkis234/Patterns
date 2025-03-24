#include "Building.h"

Building::Building(vector<Unit> enemies, string name) : GameObject(name)
{
	this->enemies = enemies;
}

Building* Building::clone()
{
	Building* building = new Building(*this);
	return building;
}
