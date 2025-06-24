#ifndef PAIR_H
#define PAIR_H

template <typename T, typename U>
class Pair
{
public:
    Pair(T a, U b) : first(a), second(b) {}
    T first;
    U second;
};

#endif // PAIR_H
