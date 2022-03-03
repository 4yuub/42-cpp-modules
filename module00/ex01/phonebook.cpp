#include <iostream>
#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	this->nbr_of_contacts = 0;
}

static str get_value_of(str s)
{
	str ret;
	std::cout << s << ": ";
	if (!(std::cin >> ret))
	{
		std::cout << "CTRL+D pressed" << std::endl;
		std::cout << "exiting..." << std::endl;
		exit(0);
	}
	return ret;
}

void PhoneBook::add_contact() {
	str f_name;
	str l_name;
	str nickname;
	str phone;
	str darkest_secret;
	f_name = get_value_of("first name");
	l_name = get_value_of("last name");
	nickname = get_value_of("nickname");
	phone = get_value_of("phone number");
	darkest_secret = get_value_of("darkest secret");
	Contact contact(f_name, l_name, nickname, phone, darkest_secret);
	this->contatcs[nbr_of_contacts++ % 8] = contact;
}