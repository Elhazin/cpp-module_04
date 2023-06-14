/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 21:44:17 by abouzanb          #+#    #+#             */
/*   Updated: 2023/05/18 23:43:27 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon      *weapon;
	public:
		std::string get_name();	
		std::string get_weapon();
		HumanB(std::string str);
		~HumanB();
        void attack();
        void setWeapon(Weapon &set);
};

