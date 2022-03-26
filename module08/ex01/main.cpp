#include "Span.hpp"

int main(void) {
    try {
        std::vector<int> myVector;
        Span mySpan(10000);

        for (int i = 0; i < 10000; i++) {
            myVector.push_back(i);
        }
        mySpan.addNumber(myVector.begin(), myVector.end());
        std::cout << "shortest span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "longest span: " << mySpan.longestSpan() << std::endl;

        mySpan.addNumber(1);
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Span mySpan(1);

        mySpan.addNumber(1);

        std::cout << "shortest span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "longest span: " << mySpan.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
}