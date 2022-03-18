#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &		operator=( Dog const & rhs );
		void makeSound() const;
	private:
		Brain *brain;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* CAT_H */