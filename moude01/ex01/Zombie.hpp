#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#define str std::string
#include <iostream>

class Zombie {

private:
	str name;

public:
	Zombie();
	Zombie(str name);
	~Zombie();
	str get_name();
	void set_name(str name);
	void announce();
};

Zombie *zombieHorde(int N, str name);

#endif