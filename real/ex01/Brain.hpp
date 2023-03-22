
#pragma once
#include "Animal.hpp"

class Brain{
    private :
    std::string ideas[100];

    public:
    Brain();
    virtual ~Brain();
    Brain(Brain const &copy);
    Brain &operator=(Brain const &copy);
    
    const std::string getIdea(int i)const;
	void setIdea(int i, std::string idea);


}