// C++ program to demonstrate how to
// initialize a function parameter
// using Uniform Initialization

#include <iostream>

#include "examples.hpp"

// declaring a class 'A'
class B
{
    // a and b are data members
    int a;
    int b;

public:
    B(int x, int y) : a(x), b(y) {}
    void show()
    {
        std::cout << a << " " << b;
    }
};

void f(B x)
{
    x.show();
}

// Driver Code
int example4()
{
    // calling function and initializing it's argument
    // using brace initialization
    f({1, 2});
    return 0;
}
