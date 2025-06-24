#ifndef BOX_H
#define BOX_H

#include <string>

template <typename T>
class Box
{
public:
    Box(T v) : value(v) {}
    T get() const
    {
        return value;
    }

private:
    T value;
};

// Explicit specialization for bool
template <>
class Box<bool>
{
public:
    Box(bool v) : value(v) {}
    std::string get() const
    {
        return value ? "true" : "false";
    }

private:
    bool value;
};

#endif // BOX_H
