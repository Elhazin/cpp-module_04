/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:09:52 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/23 19:50:37 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"


class Animal {
	protected :
		std::string type;
		Brain *brain;
	public :
	Animal();
	Animal(Animal &animal);
	virtual ~Animal();
	Animal &operator=(Animal &animal);
	virtual std::string getType() const = 0;
	virtual void  makeSound() const = 0;
	Brain* get_brain() const;
	void set_brain(Brain* brain);
};


#endif