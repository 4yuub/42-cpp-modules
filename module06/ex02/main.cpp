#include <iostream>
#include <string>

class Base {
    public:
        virtual ~Base() {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void) {
    srand(time(NULL));
    Base *ret;
    int id = rand() % 3;
    switch (id) {
        case 0:
            std::cout << "A generated" << std::endl;
            ret = new A();
            break;
        case 1:
            std::cout << "B generated" << std::endl;
            ret = new B();
            break;
        case 2:
            std::cout << "C generated" << std::endl;
            ret = new C();
            break;
    }
    return ret;
}

void identify(Base* p) {
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);

    if (a)
        std::cout << "the Type is A" << std::endl;
    else if (b)
        std::cout << "the Type is B" << std::endl;
    else if (c)
        std::cout << "the Type is C" << std::endl;
}

void identify(Base& p) {
    try {
        dynamic_cast<A&>(p);
        std::cout << "the Type is A" << std::endl;
    }
    catch (std::exception & e) {}
    try {
        dynamic_cast<B&>(p);
        std::cout << "the Type is B" << std::endl;
    }
    catch (std::exception & e) {}
    try {
        dynamic_cast<C&>(p);
        std::cout << "the Type is C" << std::endl;
    }
    catch (std::exception & e) {}
}

int main(void) {
    Base *ptr;

    ptr = generate();
    
    identify(ptr);
    identify(*ptr);

    delete ptr;
}