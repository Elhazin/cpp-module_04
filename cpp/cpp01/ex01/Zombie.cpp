/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:51:26 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/26 03:22:11 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


void Zombie::announce(void)
{
	std::cout << name ;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::set_name(std::string nom)
{
    name = nom;   
}