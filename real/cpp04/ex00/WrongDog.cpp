/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:43 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:43 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    this->type = "WrongDog";
    std::cout << "Default constructor for WrongDog is called" << std::endl;
}


WrongDog::WrongDog(WrongDog const &copy) : WrongAnimal()
{
    *this = copy;
    std::cout << "Copy constructor for WrongDog is called" << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog const & copy)
{
    std::cout << "Assignation operator for WrongDog is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

WrongDog::~WrongDog()
{
    std::cout << "Deconstructor for WrongDog is called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << "WrongDog : woooof" << std::endl;
}
