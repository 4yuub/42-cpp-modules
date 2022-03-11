#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	this->Name = "";
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap(str Name) {
	std::cout << "Constructor called" << std::endl;
	this->Name = Name;
	this->HitPoint = 10;
	this->EnergyPoint = 10;
	this->AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & obj ) {
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
void ClapTrap::attack(const str& target) {
	if (this->EnergyPoint > 0 && this->HitPoint > 0) {
		std::cout << "ClapTrap " << this->Name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
		this->EnergyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->HitPoint > 0 && this->EnergyPoint > 0) {
		std::cout << "ClapTrap " << this->Name << " lost " << amount;
		std::cout << " points!" << std::endl;
		this->HitPoint -= amount;
		if (this->HitPoint < 0)
			this->HitPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->EnergyPoint > 0 && this->HitPoint > 0) {
		std::cout << "ClapTrap " << this->Name << " got " << amount;
		std::cout << " points of damage!" << std::endl;
		this->HitPoint += amount;
		this->EnergyPoint--;
	}
}

/* ************************************************************************** */