/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:27:22 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:27:22 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal{
    protected:
    std::string type;

    public:
    WrongAnimal();
    virtual ~WrongAnimal();
    WrongAnimal(WrongAnimal const &copy);
    WrongAnimal &operator=(WrongAnimal const &copy);

    virtual void makeSound() const;
    std::string getType() const;
};
