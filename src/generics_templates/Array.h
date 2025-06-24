#ifndef ARRAY_H
#define ARRAY_H

template <typename T, int Size>
class Array
{
public:
    T data[Size];

    T & operator[](int index)
    {
        return data[index];
    }
    int size() const
    {
        return Size;
    }
};

#endif // ARRAY_H
