#pragma once
#include <iostream>
#include <string>

template<typename T>
void iter(T *array, size_t size, void(*f)(T&)) {
    for (size_t i = 0; i < size; i++) {
        f(array[i]);
    }
}