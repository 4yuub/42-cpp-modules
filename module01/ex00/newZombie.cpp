#include <iostream>
#include "Zombie.hpp"

Zombie* newZombie(str name) {
	Zombie *zombie = new Zombie(name);
	return zombie;
}
