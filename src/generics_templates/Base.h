#ifndef BASE_H
#define BASE_H

#include <iostream>

template <typename T> class Base
{
public:
    void foo()
    {
        std::cout << "Base<T>::foo()\n";
    }
};

class Derived : public Base<int>
{
public:
    void bar()
    {
        std::cout << "Derived::bar()\n";
    }
};

#endif // BASE_H
