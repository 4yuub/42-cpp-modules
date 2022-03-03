#include <iostream>
#include "contact.hpp"

int main(void) {
	// main
	Contact user1("ayoub", "karafi", "4yuub", "0609813424", "a_secret");
	std::cout << user1.get_first_name() << " " << user1.get_last_name() << std::endl;
}