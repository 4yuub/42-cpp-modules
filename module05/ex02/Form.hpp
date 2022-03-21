#pragma once
class Form;
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form {
    public:
        Form();
        Form(std::string Name, int Sing, int Execute);
        Form(Form const & src);
        virtual ~Form();

        Form & operator=(Form const & obj);

        std::string getName() const;
        bool getIsSigned() const;
        int  getGradeToSign() const;
        int  getGradeToExecute() const;

        void beSigned(Bureaucrat & bureaucrat);
        void execute(Bureaucrat const & executor) const;
        virtual void action() const = 0;

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };
    private:
        std::string const Name;
        bool        IsSigned;
        const int   GradeToSign;
        const int   GradeToExecute;

};

std::ostream & operator<<(std::ostream & o, Form const & obj);