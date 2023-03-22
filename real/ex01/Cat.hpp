#pragma once

#include "Animal.hpp"

class Cat : public Animal{
    private:

    public:
    Cat();
    ~Cat();
    Cat(Cat const &copy);
    Cat &operator=(Cat const &copy);

    void makeSound() const;
    void getIdea()const;
    void setIdea(int i, std::string idea);
};
