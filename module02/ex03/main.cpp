#include "Point.hpp"

int main(void) {
    Point const a(Fixed(0), Fixed(0));
    Point const b(Fixed(3), Fixed(0));
    Point const c(Fixed(0), Fixed(3));
    Point const pt(Fixed(2), Fixed(2)); // out
    Point const pt2(Fixed(1), Fixed(1)); // in

    bool is_in = bsp(a, b, c, pt); 
    bool is_in2 = bsp(a, b, c, pt2);

    std::cout << "pt1: this point is" << (is_in ? " in " : "n't in ") << "the rectangle" << std::endl;
    std::cout << "pt2: this point is" << (is_in2 ? " in " : "n't in ") << "the rectangle" << std::endl;
    return 0;
}