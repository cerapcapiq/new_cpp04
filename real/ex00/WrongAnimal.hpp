#pragma once

#include <iostream>

class WrongAnimal{
    protected:
    std::string type;

    public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &copy);
    WrongAnimal &operator=(WrongAnimal const &copy);

    virtual void makeSound() const;
    std::string getType() const;
};
