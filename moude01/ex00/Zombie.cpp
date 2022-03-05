#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(str name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << " has been destroyed successfuly" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
