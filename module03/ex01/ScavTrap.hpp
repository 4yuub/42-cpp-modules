#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(str Name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void attack(const str& target);

		void guardGate();
};

#endif /* ******************************************************** SCAVTRAP_H */