#ifndef STORAGE_H
#define STORAGE_H

#include <iostream>

template <typename T, typename U>
class Storage
{
public:
    void info()
    {
        std::cout << "Generic Storage\n";
    }
};

// Partial specialization when U = int
template <typename T>
class Storage<T, int>
{
public:
    void info()
    {
        std::cout << "Specialized Storage<U=int>\n";
    }
};

#endif // STORAGE_H
