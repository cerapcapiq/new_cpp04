/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:00:47 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:00:47 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
