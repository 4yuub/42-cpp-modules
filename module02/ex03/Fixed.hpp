#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & obj );

		// comparison operators:
		bool		operator<( Fixed const & obj );
		bool		operator>( Fixed const & obj );
		bool		operator<=( Fixed const & obj );
		bool		operator>=( Fixed const & obj );
		bool		operator==( Fixed const & obj );
		bool		operator!=( Fixed const & obj );

		// arithmetic operators:
		Fixed		operator*( Fixed const & obj );
		Fixed		operator/( Fixed const & obj );
		Fixed		operator+( Fixed const & obj );
		Fixed		operator-( Fixed const & obj );

		// increment/decrement:
		// pre
		Fixed &		operator++();
		Fixed &		operator--();
		// post
		Fixed		operator++(int);
		Fixed		operator--(int);

		// max && min:
		static Fixed max(Fixed obj1, Fixed obj2);
		static Fixed min(Fixed obj1, Fixed obj2);

		int	getRawBits() const;
		float toFloat() const;
		int toInt() const;
	private:
		int	nbr;
		static const int accuracy = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */