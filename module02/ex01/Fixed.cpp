#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->nbr = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->nbr = n << this->accuracy;
	std::cout << "Int constructor called" << std::endl;
}

static int ft_pow(int n, int p)
{
	int res = 1;
	for (int i = 0; i < p; i++) {
		res *= n;
	}
	return res;
}

Fixed::Fixed(const float n)
{
	this->nbr = roundf(n * ft_pow(2, this->accuracy));
	std::cout << "Float constructor called" << std::endl;
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


std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits() const {
	return this->nbr;
}

float Fixed::toFloat() const {
	return ((float) this->getRawBits()) / ft_pow(2, this->accuracy);
}

int Fixed::toInt() const {
	return this->getRawBits() >> this->accuracy;
}



/* ************************************************************************** */