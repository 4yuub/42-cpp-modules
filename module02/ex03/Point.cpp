#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point():x(0),y(0) {
}

Point::Point(const Fixed x, const Fixed y):x(x), y(y) {
}

Point::Point( const Point & src ):x(src.x), y(src.y) {
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & obj ) {
	(Fixed) this->x = (Fixed) obj.x;
	(Fixed) this->y = (Fixed) obj.y;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Fixed Point::get_x() {
	return this->x;
}

Fixed Point::get_y() {
	return this->y;
}

/* ************************************************************************** */