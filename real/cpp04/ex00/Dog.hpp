/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:28 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:28 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal{
    private :

    public:
    Dog();
    ~Dog();
    Dog(Dog const &copy);
    Dog &operator=(Dog const &copy);

    void makeSound() const;

};
