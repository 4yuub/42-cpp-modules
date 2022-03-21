#include "Bureaucrat.hpp"

/**
 * @brief Construct a new Bureaucrat:: Bureaucrat object
 * 
 */

Bureaucrat::Bureaucrat():Name("none") {
    this->Grade = LOWEST;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):Name(Name) {
    if (Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
    if (Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
    this->Grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
    *this = src;
}

/**
 * @brief Destroy the Bureaucrat:: Bureaucrat object
 * 
 */
Bureaucrat::~Bureaucrat() {}

/**
 * @brief overload equal operator of Bureaucrat
 * 
 */

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj) {
    if (obj.Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
    if (obj.Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
    this->Grade = obj.Grade;
    return *this;
}

/**
 * @brief overload << operator for print Bureaucrat
 *  
 */

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj) {
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return o;
}

/**
 * @brief Getters for Name and Grade
 * 
 */

std::string Bureaucrat::getName() const {
    return this->Name;
}

int Bureaucrat::getGrade() const {
    return this->Grade;
}

/**
 * @brief Grade controle
 * 
 */

void Bureaucrat::incrementGrade() {
    this->Grade--;
    if (this->Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
    this->Grade++;
    if (this->Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
}

/**
 * @brief Methods
 * 
 */

void Bureaucrat::signForm(Form & form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << this->getName() << " couldn’t sign "
                  << form.getName() << " because " << e.what() << std::endl; 
    }
}

/**
 * @brief Exceptions
 * 
 */

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "TooHighException";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "TooLowException";
}