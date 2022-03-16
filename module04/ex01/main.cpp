#include "Dog.hpp"
#include "Cat.hpp"
#define N 10

int main(void) {
    Animal *animals[N];

    for (int i = 0; i < N; i++) {
        if (i & 1)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < N; i++) {
        delete animals[i];
    }
}