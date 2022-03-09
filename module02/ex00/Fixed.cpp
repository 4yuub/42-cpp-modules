#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->nbr = src.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & obj )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->nbr = obj.getRawBits();
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->nbr;
}

/* ************************************************************************** */