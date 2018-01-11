#include <string>

using namespace std;

class Swords : public Human
{
public:
	Swords();
	~Swords();
	string get_sword();
	void set_sword(int index);
	string swords[7] = { "Bronze", "Iron", "Steel", "Black", "Mithril", "Adamant", "Rune" };
	
	friend class Human;
private:
	string sword;
};

