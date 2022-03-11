#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap robot("Jhon");

    robot.highFivesGuys();
    robot.attack("Bob");
    robot.beRepaired(10);
    robot.takeDamage(10);
    robot = FragTrap("anOther");
    robot.attack("Bob");
}