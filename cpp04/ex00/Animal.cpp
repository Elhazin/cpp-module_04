/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:56:56 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/13 21:42:31 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
 
std::string Animal::getType() const
{
	return (type);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal &animal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal& Animal::operator=(Animal &animal)
{
	std::cout << "Animal assignation operator called" << std::endl;
	return (animal);
}
Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	type = "Animal";
}

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &animal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &animal)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	return (animal);
}

std::string WrongAnimal::getType()
{
	return (type);
}

void WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal sound" << std::endl;
}
