#ifndef WRAPPER_H
#define WRAPPER_H

template <typename T>
class Wrapper
{
public:
    using ValueType = typename T::value_type;

    ValueType getFirst(const T & container)
    {
        return *container.begin();
    }
};

#endif // WRAPPER_H
