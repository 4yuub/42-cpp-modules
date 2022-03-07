#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(str type) {
	this->setType(type);
}

Weapon::~Weapon() {
}

const str &Weapon::getType() {
	return this->type;
}

void Weapon::setType(str type) {
	this->type = type;
}