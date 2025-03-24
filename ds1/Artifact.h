#pragma once
#include <iostream>
using namespace std;
#include "GameObject.h"

class Artifact : public GameObject
{
	string rarity;
public:
	Artifact(string, string);
	Artifact* clone();
};

