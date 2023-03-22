#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat is called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal()
{
    *this = copy;
    std::cout << "Copy constructor for Cat is called" << std::endl;
}

Cat &Cat::operator=(Cat const & copy)
{
    std::cout << "Assignation operator for Cat is called" << std::endl;
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Deconstructor for Cat is called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat : meoowwww" << std::endl;
}


Cat::Cat(): Animal()
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->_type = src._type;
	this->_brain = new Brain();
	if (this->_brain == NULL)
	{
		perror("Cat Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	*this->_brain = *src._brain;
	return *this;
}


void	Cat::getIdeas(void)const
{
	for (int i = 0; i < 3; i++)// change the 3 to 100 to show all ideas
		std::cout << "\tIdea " << i << " of the Cat is: \"" << this->_brain->getIdea(i) << "\" at the address " << this->_brain->getIdeaAddress(i) << std::endl;
}

// Setter
void	Cat::setIdea(size_t i, std::string idea)
{
		this->_brain->setIdea(i, idea);
}
