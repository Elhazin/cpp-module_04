/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 02:26:58 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/16 20:40:40 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie{
	private :
		std::string name;
	public :
		void	announce(void);
		void  set_name(std::string nom);
};
Zombie* zombieHorde( int N, std::string name );

#endif