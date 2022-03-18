#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() {
	this->nbr = 0;
}

MateriaSource::MateriaSource( const MateriaSource & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->nbr; i++) {
		delete materias[i];
	}
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & src ) {
	this->nbr = src.nbr;
	for (int i = 0; i < src.nbr; i++)
		this->materias[i] = src.materias[i];
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i ) {
	(void) i;
	o << "couldn't print materiasource";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* materia) {
	this->materias[nbr++ % 4] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i;
	for (i = 0; i < 4 && i < this->nbr; i++) {
		if (type == this->materias[i]->getType())
			break;
	}
	return this->materias[i];
}

/* ************************************************************************** */