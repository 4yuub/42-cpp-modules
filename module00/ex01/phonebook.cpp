#include <iostream>
#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	this->nbr_of_contacts = 0;
}

static str get_value_of(str s) {
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
	this->contacts[nbr_of_contacts++ % 8] = contact;
}

void PhoneBook::get_contact(int index) {
	if (index > 7 || index >= this->nbr_of_contacts) {
		std::cout << "IndexError: list index out of range" << std::endl;
		return ;
	}
	// out a specific contact ;
	Contact contact = this->contacts[index];
	std::cout << "first name: " << contact.get_first_name() << std::endl;
	std::cout << "last name: " << contact.get_last_name() << std::endl;
	std::cout << "nickname: " << contact.get_nickname() << std::endl;
	std::cout << "phone number: " << contact.get_phone() << std::endl;
	std::cout << "darkest sucret: " << contact.get_darkest_secret() << std::endl;
}

static void out_substr(str s) {
	std::cout << s.substr(0, 10) << (s.length() > 10 ? "." : "");
}

void PhoneBook::get_contacts_list() {
	for (int i = 0; i < 8 && i < this->nbr_of_contacts; i++) {
		Contact contact = this->contacts[i];
		std::cout << i << " | ";
		out_substr(contact.get_first_name());
		std::cout << " | ";
		out_substr(contact.get_last_name());
		std::cout << " | ";
		out_substr(contact.get_nickname());
		std::cout << std::endl;
	}
	int	index;
	std::cout << "index: ";
	if (!(std::cin >> index)) {
		std::cout << "CTRL+D pressed" << std::endl;
		std::cout << "exiting..." << std::endl;
		exit(0);
	}
	get_contact(index);
}
