/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:44:47 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/30 16:42:17 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

std::string HumanB::get_name()
{
	return (name);
}

std::string HumanB::get_weapon()
{
	return (weapon->getType());
}

HumanB::HumanB(std::string str)
{
    name = str;
}


HumanB::~HumanB()
{
    
}


void HumanB::setWeapon(Weapon set)
{
    weapon = &set;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}