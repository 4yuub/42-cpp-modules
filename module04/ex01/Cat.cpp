#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() {
	std::cout << "Constructor: A cat has been created" << std::endl;
	this->brain = new Brain();
	this->setType("Cat");
}

Cat::Cat( const Cat & src ):Animal(src) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat() {
	delete this->brain;
	std::cout << "Destructor: Cat has been destroyed" << std::endl;
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