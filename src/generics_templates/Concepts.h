#ifndef CONCEPTS_H
#define CONCEPTS_H

#include <concepts>

template <typename T>
concept Addable = requires(T a, T b) {
    { a + b } -> std::convertible_to<T>;
};

template <Addable T> T add(T a, T b)
{
    return a + b;
}

#endif // CONCEPTS_H
