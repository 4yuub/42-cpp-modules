#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
#define str std::string
#include <iostream>
#include "contact.hpp"


/**
 * @brief PhoneBook
 * 
 * a phone book with basic proprties and methods
 */

class PhoneBook {

private:
	Contact contacts[8];
	int		nbr_of_contacts;
	void	get_contact(int index);

public:
	PhoneBook();
	void add_contact();
	void get_contacts_list();
};

#endif