#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>

template <typename... Args> void printAll(Args... args)
{
    (std::cout << ... << args) << "\n"; // Fold expression (C++17)
}

#endif // PRINTER_H
