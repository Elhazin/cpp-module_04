/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 03:16:19 by abouzanb          #+#    #+#             */
/*   Updated: 2023/04/07 00:44:25 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string str);
		Weapon();
		std::string getType();
		void setType(std::string str);
};

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::Weapon()
{
	
}

std::string Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string str)
{
	type = str;	
}
					//  class of Human A
class HumanA{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumanA(std::string str, Weapon weap);
		void attack();
		
};
HumanA::HumanA(std::string str, Weapon weap)
{
	name = str;
	weapon = weap;
}
void HumanA::attack()
{
	std::cout << name << "attacks with their" << weapon.getType() << std::endl;
}

					//class of human B

class HumanB{
	private:
		std::string name;
		Weapon weapon;
	public:
		void attack();
		HumanB(std::string str, 	Weapon weap);
		HumanB(std::string str);
		void setWaepon(Weapon weap);
}
HumanB::HumanB(std::string str, Weapon weap)
{
	name = str;
	weapon = weap;
}
 HumanB::HumanB(std::string nam)
 {
	name = nam;
 }
void HumanB::setWaepon(Weapon weap)
{
	weapon = weap;
}

void HumanB::attack()
{
	std::cout << name << "attacks with their" << weapon.getType() << std::endl;
}