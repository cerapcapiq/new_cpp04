/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:21 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:21 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal{
    private:

    public:
    Cat();
    ~Cat();
    Cat(Cat const &copy);
    Cat &operator=(Cat const &copy);

    void makeSound() const;
};
