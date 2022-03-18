#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include <iostream>
# include <string>

class Ice : public AMateria
{

	public:

		Ice();	
		Ice( Ice const & src );
		~Ice();
		Ice* clone() const override;
		Ice &		operator=( Ice const & obj );
		void use(ICharacter& target) override;
	private:

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */