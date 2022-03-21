#include "Form.hpp"

/**
 * @brief Construct a new Form:: Form object
 * 
 */

Form::Form():GradeToSign(1), GradeToExecute(1) {
    this->Name = "none";
    this->IsSigned = false;
}

Form::Form(std::string Name, int Sing, int Execute):GradeToSign(Sing), GradeToExecute(Execute) {
    if (this->GradeToSign < HIGHEST || this->GradeToExecute < HIGHEST)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > LOWEST || this->GradeToExecute > LOWEST)
        throw  Form::GradeTooLowException();
    this->Name = Name;
    this->IsSigned = false;
}

Form::Form(Form const & src):GradeToSign(src.GradeToSign), GradeToExecute(src.GradeToExecute) {
    *this = src;
}

/**
 * @brief Destroy the Form:: Form object
 * 
 */
Form::~Form() {}

/**
 * @brief Getters
 * 
 */

std::string Form::getName() const {
    return this->Name;
}

bool Form::getIsSigned() const {
    return this->IsSigned;
}

int  Form::getGradeToSign() const {
    return this->GradeToSign;
}

int  Form::getGradeToExecute() const {
    return this->GradeToExecute;
}

/**
 * @brief methods
 * 
 */

void Form::beSigned(Bureaucrat & bureaucrat) {
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    this->IsSigned = true;
}

/**
 * @brief overload equal operator of Form
 * 
 */

Form & Form::operator=(Form const & obj) {
    if (this->GradeToSign < HIGHEST || this->GradeToExecute < HIGHEST)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > LOWEST || this->GradeToExecute > LOWEST)
        throw  Form::GradeTooLowException();
    this->Name = obj.Name;
    this->IsSigned = obj.IsSigned;
    return *this;
}

/**
 * @brief overload << operator for print Form
 *  
 */

std::ostream & operator<<(std::ostream & o, Form const & obj) {
    o << "name: " << obj.getName() << std::endl
      << "is signed: " << (obj.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign: " << obj.getGradeToSign() << std::endl
      << "greade to execute: " << obj.getGradeToExecute() << std::endl;
    return o;
}

/**
 * @brief Exceptions
 * 
 */

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade Too High";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade Too Low";
}