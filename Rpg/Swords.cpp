#include "Swords.h"
#include "Weapons.h"


Swords::Swords()
{
	sword = swords[0];
}

Swords::~Swords()
{

}

string Swords::get_sword()
{
	return sword;
}

void Swords::set_sword(int index)
{
	sword = swords[index];
}