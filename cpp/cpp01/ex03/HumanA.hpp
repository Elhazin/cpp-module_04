/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:50:33 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/30 01:42:07 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon& weapon;
	public:
		std::string get_name();	
		std::string get_weapon();
		HumanA(std::string str, Weapon& weapon);
		~HumanA();
        void attack();
};

