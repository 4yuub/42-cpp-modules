#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() {
	this->name = "none";
	this->i = -1;
}

Character::Character(std::string name) {
	this->name = name;
	this->i = -1;
}

Character::Character( const Character & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & obj ) {
	this->name = obj.getName();
	this->i = obj.i;
	for (int j = 0; j < i; j++)
		this->slot[j] = obj.slot[j];
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i ) {
	o << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria* m) {
	if (i < 3) {
		this->slot[++this->i] = m;
	}
}

void Character::unequip(int idx) {
	(void) idx;
}

void Character::use(int idx, ICharacter& target) {
	if (i > -1 && idx < 4 && idx > -1)
		this->slot[idx]->use(target);
}

/* ************************************************************************** */