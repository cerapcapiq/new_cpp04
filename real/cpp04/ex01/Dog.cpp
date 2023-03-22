/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:00:25 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:00:25 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    	if (this->brain == NULL)
	{
		std::cout << "constructing dog brain failed" << std::endl;
		exit(1);
	}
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
    this->brain = new Brain();
    	if (this->brain == NULL)
	{
		std::cout << "constructing dog brain failed" << std::endl;
		exit(1);
	}
    *this->brain = *copy.brain;
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

void	Dog::getIdea(void)const
{
	for (int i = 0; i < 5; i++) //change to 100
		std::cout << "\tIdea " << i << " of the Dog is: \"" << this->brain->getIdea(i) << "\" at the address " << std::endl;
}

void	Dog::setIdea(int i, std::string idea)
{
		this->brain->setIdea(i, idea);
}
