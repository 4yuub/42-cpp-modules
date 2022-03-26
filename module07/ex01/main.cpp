#include "iter.hpp"

void times_two(int &n) {
    n *= 2;
}

void add_ft_prefix(std::string &s) {
    s = "ft_" + s;
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};

    ::iter(array, 5, times_two);
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << std::endl;

    std::string strings[] = {"s1", "s2", "s3"};

    ::iter(strings, 3, add_ft_prefix);
    for (int i = 0; i < 3; i++)
        std::cout << strings[i] << std::endl;
    
}