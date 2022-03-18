#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include <iostream>
# include <string>

class Cure : public AMateria
{

	public:

		Cure();	
		Cure( Cure const & src );
		~Cure();
		Cure* clone() const;
		Cure &		operator=( Cure const & obj );
		void use(ICharacter& target);
	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif /* ************************************************************* ICE_H */