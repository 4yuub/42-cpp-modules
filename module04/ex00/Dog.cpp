#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() {
	std::cout << "Dog constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog( const Dog & src ):Animal(src) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & obj )
{
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const {
	std::cout << "houw..." << std::endl;
}

/* ************************************************************************** */