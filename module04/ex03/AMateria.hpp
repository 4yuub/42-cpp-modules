#ifndef AMATERIA_HPP
#define AMATERIA_HPP
class AMateria;
# include "ICharacter.hpp"
# include <iostream>
# include <string>

class AMateria
{
    protected:
        std::string type;
    
    public:
        AMateria();
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif