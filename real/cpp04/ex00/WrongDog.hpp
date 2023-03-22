/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:28:44 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:28:44 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal{
    private:

    public:
    WrongDog();
    ~WrongDog();
    WrongDog(WrongDog const &copy);
    WrongDog &operator=(WrongDog const &copy);

    void makeSound() const;
};
