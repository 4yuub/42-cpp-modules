#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__
#include "Weapon.hpp"
#define str std::string

class HumanA
{
private:
	str name;
	Weapon &weapon;

public:
	HumanA(str name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif