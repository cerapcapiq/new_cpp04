/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:24:03 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:24:03 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() 
{
const Animal* j[100];

for (int i = 0; i < 10; i++)
{
    if (i < 5)
    {
        j[i] = new Cat();
        if (j[i] == NULL)
        {
            std::cout << "error for cat" << std::endl;
            exit(1);
        }
    }
    else
    {
        j[i] = new Dog();
        if (j[i] == NULL)
        {
            std::cout << "error for dog" << std::endl;
            exit(1);
        }
    }
}
std::cout << "testing" << std::endl;
//for (int i  = 0; i < 5; i++)   
 for (int i = 5; i < 10; i++)
{
    std::cout << "it should be a " << j[i]->getType() << std::endl;
    j[i]->makeSound();
    std::cout << std::endl;
}

std::cout << "deep copy testing" << std::endl;

Dog *anjing = new Dog();

if (anjing == NULL)
{
     std::cout << "error for dog" << std::endl;
            exit(1);
}

anjing->setIdea(0, "eat poop");
anjing->setIdea(1, "sleep");

anjing->setIdea(90, "pooping");

Dog *gou =  new Dog(*anjing);
	// Cat *b = new Cat(*a);
 //Dog *gou = anjing;
if (gou == NULL)
	{
std::cout << "error for dog" << std::endl;
            exit(1);;
	}

	std::cout << "The first " << anjing->getType() << " has the following ideas: " << std::endl;
	anjing->getIdea();
	std::cout << "deleting dog (anjing)" << std::endl;
	delete(anjing);
	std::cout << std::endl;

	std::cout << "The 2nd " << gou->getType() << " has the following ideas: " << std::endl;
	gou->getIdea();
	std::cout << std::endl;


}
