#include <iostream>

auto add = [](auto a, auto b) { return a + b; };

int main()
{
    std::cout << add(1, 2) << std::endl;    // outputs 3
    std::cout << add(1.0, 2.0) << std::endl;    // outputs 3
    std::cout << add(std::string("hello, "), std::string("world")) << std::endl;    // outputs "hello, world"

    return 0;
}
