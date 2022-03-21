#include "RobotomyRequestForm.hpp"

/**
 * @brief Construct a new Shrubbery Creation Form:: Shrubbery Creation Form object
 * 
 */

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45) {
    this->Target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target):Form("RobotomyRequestForm", 72, 45) {
    this->Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):Form("RobotomyRequestForm", 72, 45) {
    this->Target = src.Target;
}

/**
 * @brief Destroy the Shrubbery Creation Form:: Shrubbery Creation Form object
 * 
 */

RobotomyRequestForm::~RobotomyRequestForm() {}

/**
 * @brief overload equal operator
 * 
 */

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj) {
    this->Target = obj.Target;
    return *this;
}

/**
 * @brief Methods
 * 
 */

void RobotomyRequestForm::action() const {
    srand((long) this);
    if (rand() & 1) {
        std::cout << "RIZZZZZZZZZZZZZZ..." << std::endl
                  << this->Target << " has been robotomized successfully." << std::endl;
    }
    else {
        std::cout << this->Target << " robotomy failed." << std::endl;
    }
}

Form * RobotomyRequestForm::clone(std::string Target) {
    return new RobotomyRequestForm(Target);
}