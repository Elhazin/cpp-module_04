/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 20:50:33 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/16 20:41:01 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

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


#endif