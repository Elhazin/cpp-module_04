/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:02:06 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/02 16:03:23 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap Player1("Player1");
    FragTrap Player2("Player2");
    ClapTrap Player3("Player3");
    ScavTrap Player4("Player4");
    ScavTrap Player5(Player4);
    Player1.attack("Player2");
    Player2.takeDamage(20);
    Player2.beRepaired(10);
    Player2.highFivesGuys();    
    Player3.attack("Player4");
    Player4.takeDamage(20);
    Player4.beRepaired(10);
    Player4.guardGate();
    Player5.attack("Player1");
    Player1.takeDamage(20);
    Player1.beRepaired(10);
    Player1.highFivesGuys();
}