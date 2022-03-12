#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap(str Name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		virtual void attack(const str& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void guardGate();
};

#endif /* ******************************************************** SCAVTRAP_H */