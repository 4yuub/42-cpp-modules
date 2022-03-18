#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this->setType("None");
}

Animal::Animal( Animal const & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & obj ) {
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i ) {
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


std::string Animal::getType() const {
	return this->type;
}


void Animal::setType(std::string type) {
	this->type = type;
}

void Animal::makeSound() const {
}

/* ************************************************************************** */