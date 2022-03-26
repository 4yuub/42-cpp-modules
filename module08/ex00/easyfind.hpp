#pragma once
#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T &obj, int n) {
    typename T::iterator it = std::find(obj.begin(), obj.end(), n);
    if (it == obj.end())
        return -1;
    return std::distance(obj.begin(), it);
}