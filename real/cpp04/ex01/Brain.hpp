/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:52:25 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/22 13:52:25 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"
#include <string>

class Brain{
    private :
    std::string idea[100];

    public:
    Brain();
    virtual ~Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &copy);
    
    const std::string getIdea(int i)const;
	void setIdea(int i, std::string idea);
};
