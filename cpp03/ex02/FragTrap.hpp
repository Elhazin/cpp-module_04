/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:45:53 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/02 16:01:59 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        void highFivesGuys(void);
        FragTrap(std::string nn);
        FragTrap(FragTrap& copy);
        FragTrap& operator=(FragTrap& copy);
        FragTrap();
        ~FragTrap();
    
};



#endif