/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:54:26 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 13:54:26 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		std::cout << "constructing cat brain failed" << std::endl;
		exit(1);
	}
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
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		std::cout << "constructing cat brain failed" << std::endl;
		exit(1);
	}
	*this->brain = *copy.brain;
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



void	Cat::getIdea(void)const
{
	for (int i = 0; i < 3; i++)
		std::cout << "\tIdea " << i << " of the Cat is: \"" << this->brain->getIdea(i) << std::endl;
}

void	Cat::setIdea(int i, std::string idea)
{
		this->brain->setIdea(i, idea);
}
