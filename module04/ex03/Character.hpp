#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class Character : public ICharacter
{

	public:

		Character();
		Character(std::string name);
		Character( Character const & src );
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);


		Character &		operator=( Character const & rhs );

	private:
		std::string name;
		AMateria *slot[4];
		int      i;

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */