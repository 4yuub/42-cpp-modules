#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
}

Zombie::Zombie(str name) {
	this->name = name;
}

str Zombie::get_name() {
	return this->name;
}

void Zombie::set_name(str name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << " has been destroyed successfuly" << std::endl;
}

void Zombie::announce() {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie *zombieHorde(int N, str name) {
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return (zombies);
}
