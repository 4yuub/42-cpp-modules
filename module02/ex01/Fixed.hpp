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
		int	getRawBits() const;
		float toFloat() const;
		int toInt() const;
	private:
		int	nbr;
		static const int accuracy = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */