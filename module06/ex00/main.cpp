#include "convert.hpp"

static bool is_valid(std::string &s) {
    if (is_pseudo_literal(s))
        return true;

    if (s.length() == 1 && isalpha(s[0])) {
        s = std::to_string(static_cast<int>(s[0]));
        return true;
    }

    for (char c : s) {
        if (!isdigit(c) && c != '+' && c != '-' && c != 'f' && c != '.')
            return false;
    }

    return true;
}

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Invalid number of args" << std::endl;
        return 1;
    }
    std::string s(av[1]);
    if (is_valid(s))
        print_all_convetions(s);
    else
        std::cout << "Invalid" << std::endl;
}