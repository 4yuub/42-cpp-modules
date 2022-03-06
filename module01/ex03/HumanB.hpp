#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__
#include "Weapon.hpp"
#define str std::string

class HumanB
{
private:
	str name;
	Weapon *weapon;

public:
	HumanB(str name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif