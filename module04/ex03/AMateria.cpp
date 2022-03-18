#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria() {
    this->type = "none";
}

AMateria::AMateria(std::string const &type) {
    this->type = type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {
    (void) target;
}

/* ************************************************************************** */