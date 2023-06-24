/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:54:45 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/25 20:32:08 by abouzanb        ###   ########.fr       */
/*                                        		                              */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP


#include <iostream>
#include <string>
#include <iomanip>



class Zombie {
	private :
		std::string name;
	public :
		Zombie(std::string nom);
		~Zombie();
		void	announce(void);
};
Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif