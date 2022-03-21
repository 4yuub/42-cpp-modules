#pragma once
#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    public:
        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern & operator=(Intern const & obj);

        Form * makeForm(std::string Type, std::string Target);

        class FromNotFound : public std::exception {
            public:
                const char *what() const throw();
        };
    private:
        Form *forms[3];
};