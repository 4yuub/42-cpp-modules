#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>
# include <string>

class Point
{

	public:

		Point();
		Point(const Fixed x, const Fixed y);
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & obj );

		Fixed get_x();
		Fixed get_y();
	private:
		Fixed const x;
		Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const pt);

#endif /* *********************************************************** POINT_H */