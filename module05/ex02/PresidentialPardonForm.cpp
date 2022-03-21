#include "PresidentialPardonForm.hpp"

/**
 * @brief Construct a new Shrubbery Creation Form:: Shrubbery Creation Form object
 * 
 */

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5) {
    this->Target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target):Form("PresidentialPardonForm", 25, 5) {
    this->Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):Form("PresidentialPardonForm", 25, 5) {
    this->Target = src.Target;
}

/**
 * @brief Destroy the Shrubbery Creation Form:: Shrubbery Creation Form object
 * 
 */

PresidentialPardonForm::~PresidentialPardonForm() {}

/**
 * @brief overload equal operator
 * 
 */

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) {
    this->Target = obj.Target;
    return *this;
}

/**
 * @brief Methods
 * 
 */

void PresidentialPardonForm::action() const {
    std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}