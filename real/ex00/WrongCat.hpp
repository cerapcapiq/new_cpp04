#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    private:

    public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &copy);
    WrongCat &operator=(WrongCat const &copy);

    void makeSound() const;
};
