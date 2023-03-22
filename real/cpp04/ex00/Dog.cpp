/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:23 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:23 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Default constructor for Dog is called" << std::endl;
}

Dog::Dog(Dog const &copy) : Animal()
{
    *this = copy;
    std::cout << "Copy constructor for Dog is called" << std::endl;
}

Dog &Dog::operator=(Dog const & copy)
{
    std::cout << "Assignation operator for Dog is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Deconstructor for Dog is called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog : woooof" << std::endl;
}
