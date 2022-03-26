#pragma once

template <typename T>
class Array {
public:
    Array();
    Array(unsigned int size);
    Array(const Array& other);
    ~Array();
    Array& operator=(const Array& other);
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;
    unsigned int size() const;
private:
    T* m_array;
    unsigned int m_size;
};

#include "Array.tpp"