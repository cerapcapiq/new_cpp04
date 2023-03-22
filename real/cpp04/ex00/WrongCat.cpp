/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:38 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:38 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "Default constructor for WrongCat is called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal()
{
    *this = copy;
    std::cout << "Copy constructor for WrongCat is called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const & copy)
{
    std::cout << "Assignation operator for WrongCat is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Deconstructor for WrongCat is called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : meoowwww" << std::endl;
}
