#include "Human.h"
#include "Swords.h"
#include "Weapons.h"
#include <string>

using namespace std;

Human::Human()
{
	health = 10;
	damage = 0;
}


Human::~Human()
{
	
}

int Human::get_health()
{
	return health;
}

void Human::set_health(int health)
{
	this->health = health;
}

int Human::get_damage()
{
	return damage;
}

void Human::set_damage(int damage)
{
	
}

void Human::equip_weapon(string weapon)
{
	equipped_weapon = Swords::chimmpres.get_sword();
}
