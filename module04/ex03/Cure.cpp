#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure():AMateria("cure") {
}

Cure::Cure( const Cure & src ):AMateria("cure") {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & obj ) {
	(void) obj;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	o << "type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Cure* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/* ************************************************************************** */