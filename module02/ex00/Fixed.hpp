#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & obj );
		int	getRawBits() const;
	private:
		int	nbr;
		static const int accuracy = 8;
};

#endif /* *********************************************************** FIXED_H */