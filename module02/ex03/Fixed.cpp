#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() {
	this->nbr = 0;
}

Fixed::Fixed(const int n) {
	this->nbr = n << this->accuracy;
}

static int ft_pow(int n, int p) {
	int res = 1;
	for (int i = 0; i < p; i++) {
		res *= n;
	}
	return res;
}

Fixed::Fixed(const float n) {
	this->nbr = roundf(n * ft_pow(2, this->accuracy));
}

Fixed::Fixed( const Fixed & src ) {
	this->nbr = src.getRawBits();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & obj ) {
	this->nbr = obj.getRawBits();
	return *this;
}

// comparison operators:
bool				Fixed::operator>( Fixed const & obj ) {
	return this->getRawBits() > obj.getRawBits();
}

bool				Fixed::operator<( Fixed const & obj ) {
	return this->getRawBits() < obj.getRawBits();
}

bool				Fixed::operator<=( Fixed const & obj ) {
	return this->getRawBits() <= obj.getRawBits();
}

bool				Fixed::operator==( Fixed const & obj ) {
	return this->getRawBits() == obj.getRawBits();
}

bool				Fixed::operator!=( Fixed const & obj ) {
	return this->getRawBits() != obj.getRawBits();
}

// arithmetic operators:

Fixed				Fixed::operator*( Fixed const & obj ) {
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed				Fixed::operator/( Fixed const & obj ) {
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed				Fixed::operator+( Fixed const & obj ) {
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed				Fixed::operator-( Fixed const & obj ) {
	return Fixed(this->toFloat() - obj.toFloat());
}

// increment/decrement:
// pre
Fixed &		Fixed::operator++() {
	this->nbr++;
	return *this;
}
Fixed &		Fixed::operator--() {
	this->nbr--;
	return *this;
}

// post
Fixed		Fixed::operator++(int) {
	Fixed tmp(*this);
	this->nbr++;
	return tmp;
}
Fixed		Fixed::operator--(int) {
	Fixed tmp(*this);
	this->nbr--;
	return tmp;
}

// output:
std::ostream &			operator<<( std::ostream & o, Fixed const & i ) {
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

Fixed Fixed::max(Fixed obj1, Fixed obj2) {
	return obj1 > obj2 ? obj1 : obj2;
}
Fixed Fixed::min(Fixed obj1, Fixed obj2) {
	return obj1 < obj2 ? obj1 : obj2;
}

/* ************************************************************************** */