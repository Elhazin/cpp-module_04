#include "Cat.hpp"


Cat::Cat()
{
   std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(Cat& cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*cat.brain);
	type = cat.getType();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat& cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &cat)
	{
		delete brain;
		this->brain = new Brain(*cat.brain);
		type = cat.getType();
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Mewoow Mewoow" << std::endl;
}
std::string Cat::getType() const
{
	return type;
}
