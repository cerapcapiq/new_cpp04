#pragma once

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
    private:

    public:
    WrongDog();
    ~WrongDog();
    WrongDog(WrongDog const &copy);
    WrongDog &operator=(WrongDog const &copy);

    void makeSound() const;
};
