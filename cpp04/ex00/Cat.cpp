/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:44:43 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/22 02:38:11 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat& cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat& cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	return cat;
}

void Cat::makeSound() const
{
	std::cout << "Mewoow Mewoow" << std::endl;
}
std::string Cat::getType() const
{
	return type;
}

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& cat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cat;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& cat)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	return cat;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}

std::string WrongCat::getType()const
{
	return type;
} 
