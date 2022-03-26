#include "easyfind.hpp"
#include <vector>
#include <array>

int main(void) {
    std::vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(5);
    myVector.push_back(2);
    std::cout << "found at " << easyfind(myVector, 5) << std::endl;

    std::array<int, 2> myArray;
    myArray[0] = 1;
    myArray[1] = 2;
    std::cout << "found at " << easyfind(myArray, 1) << std::endl;
    
    std::array<int, 2> myArray2;
    myArray2[0] = 3;
    myArray2[1] = 2;
    std::cout << "found at " << easyfind(myArray2, 1) << std::endl;
}