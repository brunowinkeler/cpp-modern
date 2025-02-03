#pragma once

#include <string>

namespace TestsCpp
{
    class Cat
    {
    public:
        Cat() = default;
        // Cat(const Cat & other_cat) : lives_{other_cat.lives_}
        // {
        //     name_ = std::string("other_cat_") + other_cat.name_;
        // }
        // Cat & operator=(const Cat & other_cat)
        // {
        //     if (this == &other_cat)
        //         return *this;
        //     lives_ = other_cat.lives_;
        //     name_  = std::string("other_cat_") + other_cat.name_;
        //     return *this;
        // }

        Cat(const int lives, const std::string name)
        {
            lives_ = lives;
            name_  = name;
        }

        int get_lives(void) const
        {
            return lives_;
        }

        void set_lives(const int lives)
        {
            lives_ = lives;
        }

        std::string get_name(void) const
        {
            return name_;
        }

        void set_name(const std::string name)
        {
            name_ = name;
        }

    private:
        int lives_{9};
        std::string name_{"Fofinho"};
    };

} // namespace TestsCpp
