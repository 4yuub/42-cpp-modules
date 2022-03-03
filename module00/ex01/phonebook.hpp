#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
#define str std::string
#include <iostream>
#include "contact.hpp"

class PhoneBook {

private:
	Contact contatcs[8];
	int		nbr_of_contacts;

public:
	PhoneBook();
	void add_contact();
};

#endif