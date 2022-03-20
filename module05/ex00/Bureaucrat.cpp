#include "Bureaucrat.hpp"

/**
 * @brief Construct a new Bureaucrat:: Bureaucrat object
 * 
 */

Bureaucrat::Bureaucrat() {
    this->Name = "none";
    this->Grade = LOWEST;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade) {
    if (Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
    if (Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
    this->Grade = Grade;
    this->Name = Name;
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
    this->Name = obj.Name;
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
 * @brief Exceptions
 * 
 */

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return "TooHighException";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return "TooLowException";
}