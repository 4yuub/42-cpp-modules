#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat( const Cat & src ):Animal(src) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & obj )
{
	this->setType(obj.getType());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const {
	std::cout << "mioua..." << std::endl;
}

/* ************************************************************************** */