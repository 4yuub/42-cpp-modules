#include "Point.hpp"

/**
 * @brief 
 * s(p1,p2,p3)=(x1-x3)*(y2-y3)-(x2- x3)*(y1-y3)
 * If s>0, it means that the three points are connected in a counterclockwise order
 * If it is s<0, it means that the three points are connected in a clockwise order
 * 
 */

Fixed s(Point p1, Point p2, Point p3) {
    return ((p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y())) -
            ((p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y()));
}


bool bsp( Point const a, Point const b, Point const c, Point const pt) {
    Fixed s1 = s(pt, a, b);
    Fixed s2 = s(pt, b, c);
    Fixed s3 = s(pt, c, a);
    return (s1 > 0 && s2 > 0 && s3 > 0) || (s1 < 0 && s2 < 0 && s3 < 0);
}