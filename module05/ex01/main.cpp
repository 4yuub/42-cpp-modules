#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) {
    try {
        Form f1 = Form("form1", 10, 5);
        Bureaucrat b1 = Bureaucrat("Bob", 30);
        Bureaucrat b2 = Bureaucrat("Jhon", 1);

        b1.signForm(f1);
        b2.signForm(f1);

        Form f2 = Form("from2", 0, 5);
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}