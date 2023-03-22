/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:30 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:30 by abasarud         ###   ########.fr       */
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
    /*Animal haiwan;
    Cat kucing;
    Dog anjing;

    WrongAnimal haiwant;
    WrongCat kucingt;
    WrongDog anjingt;

    haiwan.makeSound();
    kucing.makeSound();
    anjing.makeSound();

    std::cout << "Wrong Animal" << std::endl;

    
    haiwant.makeSound();
    kucingt.makeSound();
    anjingt.makeSound();
    */

    std::cout << "pdf example" << std::endl;
//uncommnet below to test
//const Animal* meta = new Animal();
//meta->makeSound();
//delete meta;
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();


    std::cout << "Wrong example" << std::endl;

const WrongAnimal* neta = new WrongAnimal();
const WrongAnimal* jj = new WrongDog();
const WrongAnimal* ii = new WrongCat();
std::cout << jj->getType() << " " << std::endl;
std::cout << ii->getType() << " " << std::endl;
ii->makeSound(); //will output the cat sound!
jj->makeSound();
neta->makeSound();

delete neta;
delete jj;
delete ii;


delete j;
delete i;



}
