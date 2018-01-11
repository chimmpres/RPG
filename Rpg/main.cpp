#include <iostream>
#include "Human.h"
#include "Swords.h"
#include "Weapons.h"

using namespace std;

int main()
{
	Human chimmpres;
	cout << chimmpres.get_health() << endl;
	chimmpres.set_health(30);
	cout << chimmpres.get_health() << endl;

	Swords chimmpres;

	return 0;
}