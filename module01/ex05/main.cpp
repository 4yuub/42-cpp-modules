#include <iostream>
#include "Karen.hpp"

int main(void) {
	Karen karen;

	std::cout << "Debug:" << std::endl;
	karen.complain("debug");

	std::cout << "Info:" << std::endl;
	karen.complain("info");

	std::cout << "Warning:" << std::endl;
	karen.complain("warning");

	std::cout << "Error:" << std::endl;
	karen.complain("error");
}