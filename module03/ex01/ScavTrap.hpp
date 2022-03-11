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
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void guardGate();
	private:
		str Name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;
};

#endif /* ******************************************************** SCAVTRAP_H */