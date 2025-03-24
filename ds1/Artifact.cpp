#include "Artifact.h"

Artifact::Artifact(string rarity, string name) : GameObject(name)
{
	this->rarity = rarity;
}

Artifact* Artifact::clone()
{
	Artifact* artifact = new Artifact(*this);
	return artifact;
}
