#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() {
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->Name = "";
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap(str Name) {
	std::cout << "FragTrap: Constructor called" << std::endl;
	this->Name = Name;
	this->HitPoint = 100;
	this->EnergyPoint = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap & src ) {
	std::cout << "FragTrap: Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap() {
	std::cout << "FragTrap: Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & obj ) {
	if ( this != &obj ) {
		this->Name = obj.Name;
		this->HitPoint = obj.HitPoint;
		this->EnergyPoint = obj.EnergyPoint;
		this->AttackDamage = obj.AttackDamage;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys() {
	if (this->HitPoint > 0 && this->EnergyPoint > 0) {
		std::cout << "FragTrap: " << this->Name << " offers a high fives" << std::endl;
	}
}

void FragTrap::attack(const str& target) {
	if (this->EnergyPoint > 0 && this->HitPoint > 0) {
		std::cout << "FragTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}

/* ************************************************************************** */