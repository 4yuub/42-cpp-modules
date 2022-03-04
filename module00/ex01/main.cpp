#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int main(void) {
	PhoneBook phone_book = PhoneBook();
	while (true) {
		std::string cmd;
		std::cout << "PhoneBook$ ";
		std::getline(std::cin, cmd);
		if (!(std::cin.good())) {
			std::cout << "CTRL+D pressed" << std::endl;
			std::cout << "exiting..." << std::endl;
			exit(0);
		}
		if (cmd == "ADD")
			phone_book.add_contact();
		else if (cmd == "SEARCH")
			phone_book.get_contacts_list();
		else if (cmd == "EXIT")
			exit(0);
		else
			std::cout << "PhoneBook: " << cmd << ": command not found" << std::endl;
	}
}