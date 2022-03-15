#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() {
	this->setType("None");
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & obj ) {
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i ) {
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


std::string WrongAnimal::getType() const {
	return this->type;
}


void WrongAnimal::setType(std::string type) {
	this->type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal sound" << std::endl;
}

/* ************************************************************************** */