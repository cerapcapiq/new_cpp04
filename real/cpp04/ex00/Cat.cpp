/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:18 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:18 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat is called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal()
{
    *this = copy;
    std::cout << "Copy constructor for Cat is called" << std::endl;
}

Cat &Cat::operator=(Cat const & copy)
{
    std::cout << "Assignation operator for Cat is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Deconstructor for Cat is called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat : meoowwww" << std::endl;
}
