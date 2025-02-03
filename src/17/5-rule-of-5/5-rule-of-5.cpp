#include <bits/stdc++.h>
using namespace std;

#include <Cat.h>
using namespace TestsCpp;

typedef long long ll;

int main(int argc, char const * argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Cat my_cat;
    Cat my_other_cat;

    my_other_cat.set_lives(7);
    my_other_cat.set_name("Felpudo");

    int i = 1;

    std::cout << "----- " << i++ << " -----" << std::endl;
    std::cout << "Cat Name: " << my_cat.get_name() << std::endl;
    std::cout << "Cat Lives: " << my_cat.get_lives() << std::endl;
    std::cout << "Other Cat Name: " << my_other_cat.get_name() << std::endl;
    std::cout << "Other Cat Lives: " << my_other_cat.get_lives() << std::endl;

    my_cat = my_other_cat;

    std::cout << "----- " << i++ << " -----" << std::endl;
    std::cout << "Cat Name: " << my_cat.get_name() << std::endl;
    std::cout << "Cat Lives: " << my_cat.get_lives() << std::endl;
    std::cout << "Other Cat Name: " << my_other_cat.get_name() << std::endl;
    std::cout << "Other Cat Lives: " << my_other_cat.get_lives() << std::endl;

    my_cat = Cat(10, "Gato");

    std::cout << "----- " << i++ << " -----" << std::endl;
    std::cout << "Cat Name: " << my_cat.get_name() << std::endl;
    std::cout << "Cat Lives: " << my_cat.get_lives() << std::endl;
    std::cout << "Other Cat Name: " << my_other_cat.get_name() << std::endl;
    std::cout << "Other Cat Lives: " << my_other_cat.get_lives() << std::endl;

    my_cat = std::move(my_other_cat);

    std::cout << "----- " << i++ << " -----" << std::endl;
    std::cout << "Cat Name: " << my_cat.get_name() << std::endl;
    std::cout << "Cat Lives: " << my_cat.get_lives() << std::endl;
    std::cout << "Other Cat Name: " << my_other_cat.get_name() << std::endl;
    std::cout << "Other Cat Lives: " << my_other_cat.get_lives() << std::endl;

    return 0;
}