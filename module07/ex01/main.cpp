#include "iter.hpp"

void times_two(int const &n) {
    std::cout << n * 2 << std::endl;
}

void print(std::string const &s) {
    std::cout << s << std::endl;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};

    ::iter(array, 5, times_two);

    std::string strings[] = {"s1", "s2", "s3"};

    ::iter(strings, 3, print);
    
}