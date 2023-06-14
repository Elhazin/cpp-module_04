/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:56:56 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/14 16:48:59 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

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

Brain* Animal::get_brain() const
{
	return brain;
}

void Animal::set_brain(Brain* brain)
{
	delete this->brain;
	this->brain = brain;
}
