/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:00:42 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:00:42 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{
    protected:
    std::string type;

    public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &copy);

    virtual void makeSound(void) const;
    std::string getType() const;

};
