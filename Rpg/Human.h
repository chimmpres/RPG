#pragma once
#include <string>

using namespace std;

class Human : public Swords
{
public:
	Human();
	~Human();

	//health
	int get_health();
	void set_health(int health);

	//damage
	int get_damage();
	void set_damage(int damage);

	//weapons
	void equip_weapon(string weapon);

private:
	int health;
	int damage;
	string equipped_weapon;
};

