#include <iostream>
#include "Karen.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "no enough args" << std::endl;
		return 0;
	}
	Karen karen;
	str level(av[1]);
	karen.complain(level);
}