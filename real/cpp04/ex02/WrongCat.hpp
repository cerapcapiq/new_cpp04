/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:27:30 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 14:27:30 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    private:

    public:
    WrongCat();
    ~WrongCat();
    WrongCat(WrongCat const &copy);
    WrongCat &operator=(WrongCat const &copy);

    void makeSound() const;
       void getIdea()const;
    void setIdea(int i, std::string idea);
};
