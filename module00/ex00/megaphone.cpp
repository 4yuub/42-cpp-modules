#include <iostream>

void upper(char &c)
{
	c = toupper(c);
}

int main(int ac, char **av) {
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < ac; i++) {
		std::string s(av[i]);
		std::for_each(s.begin(), s.end(), upper);
		std::cout << s;
	}
	std::cout << std::endl;
}