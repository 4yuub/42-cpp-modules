#include "Intern.hpp"

/*
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern & operator=(Intern const & obj);
*/

/**
 * @brief Construct a new Intern:: Intern object
 * 
 */

Intern::Intern() {
    this->forms[0] = new ShrubberyCreationForm();
    this->forms[1] = new RobotomyRequestForm();
    this->forms[2] = new PresidentialPardonForm();
};

Intern::Intern(Intern const & src) {
    (void) src;
    this->forms[0] = new ShrubberyCreationForm();
    this->forms[1] = new RobotomyRequestForm();
    this->forms[2] = new PresidentialPardonForm();
};

/**
 * @brief Destroy the Intern:: Intern object
 * 
 */

Intern::~Intern() {
    delete forms[0];
    delete forms[1];
    delete forms[2];
};


/**
 * @brief overload equal operator
 * 
 */

Intern & Intern::operator=(Intern const & obj) {
    (void) obj;
    return *this;
}

/**
 * @brief Execptions
 * 
 */

const char * Intern::FromNotFound::what() const throw() {
    return "From Not Found";
}

/**
 * @brief methods
 * 
 */

Form * Intern::makeForm(std::string Type, std::string Target) {
    std::string froms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    int i = 0;
    for (; i < 3 && Type != froms[i]; i++);
    return i < 3 ? forms[i]->clone(Target) : throw Intern::FromNotFound();
}