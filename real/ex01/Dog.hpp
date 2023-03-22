#pragma once

#include "Animal.hpp"

class Dog : public Animal{
    private :

    public:
    Dog();
    ~Dog();
    Dog(Dog const &copy);
    Dog &operator=(Dog const &copy);

    void makeSound() const;
       void getIdea()const;
    void setIdea(int i, std::string idea);

};
