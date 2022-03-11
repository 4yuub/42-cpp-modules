#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap robot("Jhon");

    robot.guardGate();
    robot.attack("Bob");
    robot.beRepaired(10);
    robot.takeDamage(10);
    robot = ScavTrap("anOther");
    robot.attack("Bob");
}