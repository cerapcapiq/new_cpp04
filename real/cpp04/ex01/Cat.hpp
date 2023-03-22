/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:31:39 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 13:31:39 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *brain;
    public:
    Cat();
    ~Cat();
    Cat(Cat const &copy);
    Cat &operator=(Cat const &copy);

    void makeSound() const;
    void getIdea()const;
    void setIdea(int i, std::string idea);
};
