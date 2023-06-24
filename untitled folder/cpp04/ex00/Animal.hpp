/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:09:52 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/22 02:37:43 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal {
	protected :
		std::string type;
	public :
	Animal();
	Animal(Animal &animal);
	virtual ~Animal();
	Animal &operator=(Animal &animal);

	virtual std::string getType() const;
	virtual void  makeSound() const;
};

class WrongAnimal{
	protected :
		std::string type;
	public :
	WrongAnimal();
	WrongAnimal(WrongAnimal &animal);
	~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal &animal);
	std::string getType();
	void  makeSound();
};

#endif