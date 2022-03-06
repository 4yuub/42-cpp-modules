#include <iostream>
#include "Zombie.hpp"

int main(void) {
	// allocated zombie:
	Zombie *zombie1 = newZombie("foo");
	zombie1->announce();
	delete zombie1;

	// zombie in the stack:
	randomChump("bar");
}