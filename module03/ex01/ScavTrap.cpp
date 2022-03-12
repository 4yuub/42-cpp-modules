#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->Name = "";
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap(str Name) {
	std::cout << "ScavTrap: Constructor called" << std::endl;
	this->Name = Name;
	this->HitPoint = 100;
	this->EnergyPoint = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ) {
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// inherted from parent

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::guardGate() {
	if (this->HitPoint > 0 && this->EnergyPoint > 0) {
		std::cout << "ScavTrap " << this->Name << " is now in Gate keeper" << std::endl;
	}
}

void ScavTrap::attack(const str& target) {
	if (this->EnergyPoint > 0 && this->HitPoint > 0) {
		std::cout << "ScavTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}


/* ************************************************************************** */