#include <iostream>
#include <type_traits>

template <typename T>
void print(const T& value)
{
    if constexpr (std::is_integral<T>::value)
    {
        std::cout << "The value is an integer: " << value << std::endl;
    }
    else if constexpr (std::is_floating_point<T>::value)
    {
        std::cout << "The value is a floating point number: " << value << std::endl;
    }
    else
    {
        std::cout << "The value is neither an integer nor a floating point number." << std::endl;
    }
}

int main()
{
    print(42);
    print(3.14);
    print("hello");

    return 0;
}
