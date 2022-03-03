#include <iostream>
#include "contact.hpp"

Contact::Contact() {
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::Contact(str f_name, str l_name, str nickname, str phone, str darkest_secret) {
	this->first_name = f_name;
	this->last_name = l_name;
	this->nickname = nickname;
	this->phone_number = phone;
	this->darkest_secret = darkest_secret;
}

str Contact::get_first_name() {
	return this->first_name;
}
str Contact::get_last_name() {
	return this->last_name;
}
str Contact::get_nickname() {
	return this->nickname;
}
str Contact::get_phone() {
	return this->phone_number;
}
str Contact::get_darkest_secret() {
	return this->darkest_secret;
}