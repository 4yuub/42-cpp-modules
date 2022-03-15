#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() {
	this->setType("None");
}

Animal::Animal( Animal const & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal() {
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