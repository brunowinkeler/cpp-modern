#ifndef DEFAULTBOX_H
#define DEFAULTBOX_H

template <typename T = int>
class DefaultBox
{
public:
    T value;
    DefaultBox(T v) : value(v) {}
};

#endif // DEFAULTBOX_H
