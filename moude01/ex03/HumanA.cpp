#include "HumanA.hpp"

HumanA::HumanA(str name, Weapon &weapon):weapon(weapon) {
	this->name = name;
}

HumanA::~HumanA() {

}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
