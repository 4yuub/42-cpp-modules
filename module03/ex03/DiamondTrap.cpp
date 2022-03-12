#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->Name = "";
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(str Name) {
	std::cout << "DiamondTrap: constructor called" << std::endl;
	ClapTrap::Name = Name + "_clap_name";
	this->Name = Name;
	this->HitPoint = FragTrap::HitPoint;
	this->EnergyPoint = ScavTrap::EnergyPoint;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src ) {
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & obj ) {
	if ( this != &obj ) {
		this->Name = obj.Name;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::whoAmI() {
	std::cout << "DiomandTrap name: " << this->Name
		 	  << " CrapTrap name: " << ClapTrap::Name << std::endl;
}

/* ************************************************************************** */