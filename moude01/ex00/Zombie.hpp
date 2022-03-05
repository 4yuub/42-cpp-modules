#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__
#define str std::string
#include <iostream>

class Zombie {

private:
	str name;

public:
	Zombie(str name);
	~Zombie();
	void announce();
};

Zombie *newZombie(str name);
void randomChump(str name);

#endif