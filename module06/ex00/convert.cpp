#include "convert.hpp"

bool is_pseudo_literal(std::string &s) {
    return s == "nan" || s == "nanf" || s == "+inf" || s == "inf" || s == "-inf"
            || s == "+inff" || s == "inff" || s == "-inff";
}

static void convert_to_char(std::string &s) {
    if (is_pseudo_literal(s)) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    char c = static_cast<char>(atoi(s.c_str()));
    if (c < ' ' || c > '~') {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    std::cout << c << std::endl;
}

static void convert_to_int(std::string &s) {
    if (is_pseudo_literal(s)) {
        std::cout << "Impossible" << std::endl;
        return ;
    }
    std::cout << std::atoi(s.c_str()) << std::endl;
}

static void convert_to_float(std::string &s) {
    float nbr = std::strtof(s.c_str(), nullptr);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << nbr << ".0f" << std::endl;
        return ;
    }
    std::cout << nbr << "f" << std::endl;
}

static void convert_to_double(std::string &s) {
    double nbr = std::strtod(s.c_str(), nullptr);

    if (nbr - static_cast<int>(nbr) == 0) {
        std::cout << nbr << ".0" << std::endl;
        return ;
    }
    std::cout << nbr << std::endl;
}

void print_all_convetions(std::string &s) {
    std::cout << "char: ", convert_to_char(s);
    std::cout << "int: ", convert_to_int(s);
    std::cout << "float: ", convert_to_float(s);
    std::cout << "double: ", convert_to_double(s);
}   