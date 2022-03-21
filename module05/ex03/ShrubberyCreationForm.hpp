#pragma once
#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string Target);
        ShrubberyCreationForm(ShrubberyCreationForm const & src);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm & operator=(ShrubberyCreationForm const & obj);
        void action() const;
        Form * clone(std::string Target);
    
    private:
        std::string Target;
};
