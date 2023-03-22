#pragma once

#include <iostream>

class Animal{
    protected:
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &copy);

    virtual void makeSound(void) const;
    std::string getType() const;

};
