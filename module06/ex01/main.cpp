#include <iostream>
#include <string>

struct Data {
    int X, Y;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main(void) {
    Data data = {0, 1};

    Data *ptr = deserialize(serialize(&data));

    std::cout << ptr << " | " << &data << std::endl;
    std::cout << (ptr == &data ? "The same pointer" : "pointers are differ") << std::endl;

    std::cout << "x: " << ptr->X << std::endl;
    std::cout << "y: " << ptr->Y << std::endl;
}