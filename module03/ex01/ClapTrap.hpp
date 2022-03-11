#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define str std::string
# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(str Name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & obj );

		void attack(const str& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		str Name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;

};

#endif /* ******************************************************** CLAPTRAP_H */