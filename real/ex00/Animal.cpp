#include "Animal.hpp"


Animal::Animal() : type("default")
{
    std::cout << "Default constructor for Animal is called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
    *this = copy;
    std::cout << "Copy constructor for Animal is called" << std::endl;
}

Animal &Animal::operator=(Animal const & copy)
{
    std::cout << "Assignation operator for Animal is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Deconstructor for Animal is called" << std::endl;
}

void Animal::makeSound()const
{
    std::cout << "Animal make what sounds?" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
