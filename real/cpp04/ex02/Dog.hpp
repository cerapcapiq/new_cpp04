/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:31:45 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 13:31:45 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private :
    Brain *brain;

    public:
    Dog();
    ~Dog();
    Dog(Dog const &copy);
    Dog &operator=(Dog const &copy);

    void makeSound() const;
       void getIdea()const;
    void setIdea(int i, std::string idea);

};
