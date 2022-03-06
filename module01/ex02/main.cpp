#include <iostream>

int main(void) {
	std::string MyString = "HI THIS IS BRAIN";
	std::string &stringREF = MyString;
	std::string *stringPTR = &MyString;

	// printing memory address:
	std::cout << "Memory address: " << std::endl;
	std::cout << "using MyString: " << &MyString << std::endl;
	std::cout << "using stringREF: " << &stringREF << std::endl;
	std::cout << "using stringPTR: " << stringPTR << std::endl;

	// printing value:
	std::cout << "Value of the string: " << std::endl;
	std::cout << "using MyString: " << MyString << std::endl;
	std::cout << "using stringREF: " << stringREF << std::endl;
	std::cout << "using stringPTR: " << *stringPTR << std::endl;
}