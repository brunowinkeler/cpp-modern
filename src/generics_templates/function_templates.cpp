#include <cstring> // For strcmp
#include <iostream>
#include <string>

#include "generics.h"

// Generic function template
template <typename T> T maxValue(T a, T b)
{
    std::cout << "Generic version\n";
    return (a > b) ? a : b;
}

// Overload for const char* (pointer comparison is not useful here)
template <> const char * maxValue<const char *>(const char * a, const char * b)
{
    std::cout << "Specialized version for const char*\n";
    return (std::strcmp(a, b) > 0) ? a : b;
}

const char * maxValue(const char * a, const char * b)
{
    std::cout << "Function overload for const char*\n";
    return (std::strcmp(a, b) > 0) ? a : b;
}

void functionTemplates()
{
    int x = 10, y = 20;
    double a = 5.5, b = 2.3;
    std::string s1 = "apple", s2 = "banana";
    const char * c1 = "pear";
    const char * c2 = "orange";

    std::cout << "Max (int): " << maxValue(x, y) << "\n";
    std::cout << "Max (double): " << maxValue(a, b) << "\n";
    std::cout << "Max (string): " << maxValue(s1, s2) << "\n";
    std::cout << "Max (const char*): " << maxValue(c1, c2) << "\n";
}
