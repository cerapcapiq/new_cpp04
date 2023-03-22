#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor for Brain is called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    *this = copy;
    std::cout << "Copy constructor for Brain is called" << std::endl;
}

Brain &Brain::operator=(Brain const & copy)
{
    std::cout << "Assignation operator for Brain is called" << std::endl;
    if (this == &copy)
        return *this;
    for (int i = 0; i < 100; i++)
    {
        if (copy.idea[i].length() > 0)
            this->idea[i].assign(copy.idea[i])
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Deconstructor for Brain is called" << std::endl;
}

const std::string Brain::getIdea(int i)const
{
    if (i < 100)
        return (this->idea[i]);
    else
        return (std::cout << "not enough idea" << std::endl);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 100)
		this->_idea[i] = idea;
	else
		return (std::cout << "not enough idea" << std::endl);
}