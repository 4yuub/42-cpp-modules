#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# define str std::string
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap(str Name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & obj );

		void attack(const str& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void highFivesGuys();
	private:
		str Name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;

};

#endif /* ******************************************************** CLAPTRAP_H */