#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define str std::string
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap();
		FragTrap(str Name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & obj );

		virtual void attack(const str& target);

		void highFivesGuys();

};

#endif /* ******************************************************** CLAPTRAP_H */