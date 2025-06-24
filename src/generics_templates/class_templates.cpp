#include <iostream>
#include <vector>

#include "Aliases.h"
#include "Array.h"
#include "Base.h"
#include "Box.h"
#include "Concepts.h"
#include "DefaultBox.h"
#include "Pair.h"
#include "Printer.h"
#include "Storage.h"
#include "Wrapper.h"

#include "generics.h"

void classTemplate()
{
    Box<int> intBox(42);
    Box<std::string> strBox("hello");

    std::cout << "intBox: " << intBox.get() << "\n";
    std::cout << "strBox: " << strBox.get() << "\n";
}

void pair()
{
    Pair<int, double> p1(10, 3.14);
    Pair<std::string, int> p2("age", 30);

    std::cout << "p1: " << p1.first << ", " << p1.second << "\n";
    std::cout << "p2: " << p2.first << ", " << p2.second << "\n";
}

void defaultBox()
{
    DefaultBox<> a(100);        // T = int
    DefaultBox<double> b(3.14); // T = double

    std::cout << "a: " << a.value << "\n";
    std::cout << "b: " << b.value << "\n";
}

void explicitSpecialization()
{
    Box<int> intBox(42);
    Box<bool> boolBox(true);

    std::cout << "intBox: " << intBox.get() << "\n";
    std::cout << "boolBox: " << boolBox.get() << "\n";
}

void partialSpecialization()
{
    Storage<double, float> a;
    Storage<double, int> b;

    a.info(); // Generic
    b.info(); // Specialized
}

void nonTypeTemplateParameters()
{
    Array<int, 5> arr;

    for (int i = 0; i < arr.size(); ++i)
    {
        arr[i] = i * 10;
    }

    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void templatesAndInheritance()
{
    Derived d;
    d.foo(); // From Base<int>
    d.bar(); // Own method
}

void dependentTypes()
{
    std::vector<int> vec = {1, 2, 3};
    Wrapper<std::vector<int>> w;

    std::cout << "First: " << w.getFirst(vec) << "\n";
}

void templateAliases()
{
    Ptr<int> p    = new int(42);
    Vec<double> v = {1.1, 2.2, 3.3};

    std::cout << "*p: " << *p << "\n";
    std::cout << "v[1]: " << v[1] << "\n";

    delete p;
}

void variadicTemplates()
{
    printAll(1, " + ", 2, " = ", 3);
}

void conceptsCpp20()
{
    std::cout << add(3, 4) << "\n";     // OK
    std::cout << add(1.5, 2.5) << "\n"; // OK
    // add("a", "b"); // Compilation error: not Addable
}