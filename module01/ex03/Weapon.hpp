#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__
#include <iostream>
#define str std::string

class Weapon {

private:
	str type;

public:
	Weapon();
	Weapon(str type);
	~Weapon();
	str getType();
	void setType(str type);

};

#endif