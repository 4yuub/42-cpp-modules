#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice():AMateria("ice") {
}

Ice::Ice( const Ice & src ):AMateria("ice") {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & obj ) {
	(void) obj;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Ice const & i )
{
	o << "type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Ice* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */