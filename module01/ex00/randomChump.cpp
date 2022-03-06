#include <iostream>
#include "Zombie.hpp"

void randomChump(str name) {
	Zombie zombie = Zombie(name);
	zombie.announce();
}
