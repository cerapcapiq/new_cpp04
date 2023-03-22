#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()  : type("default")
{
    std::cout << "Default constructor for WrongAnimal is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    *this = copy;
    std::cout << "Copy constructor for WrongAnimal is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & copy)
{
    std::cout << "Assignation operator for WrongAnimal is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Deconstructor for WrongAnimal is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make what sounds?" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}