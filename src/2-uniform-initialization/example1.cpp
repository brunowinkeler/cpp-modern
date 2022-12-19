// C++ program to demonstrate initialization
// of dynamic array in C++ using uniform initialization
#include <iostream>

#include "examples.hpp"

int example1()
{
    // declaring a dynamic array
    // and initializing using braces
    int * pi = new int[5]{1, 2, 3, 4, 5};

    // printing the contents of the array
    for (int i = 0; i < 5; i++)
    {
        std::cout << *(pi + i) << " ";
    }

    return 0;
}
