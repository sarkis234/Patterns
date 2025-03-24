#include "Unit.h"

Unit::Unit(int hp, int damage, string name) : GameObject(name)
{
	this->hp = hp;
	this->damage = damage;
}

Unit* Unit::clone()
{
	Unit* unit = new Unit(*this);
	return unit;
}


