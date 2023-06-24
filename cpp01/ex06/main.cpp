/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:35:08 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/17 18:54:00 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Usage: ./harl [name]" << std::endl;
		return 1;
	}
	Harl harl(av[1]);
	int i = 0;
	const  char *str[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	while (i < 4 )
	{
		if (strcmp(av[1], str[i]) == 0)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			harl.debug();
		case 1:
			harl.error();
		case 2:
			harl.info();
		case 3:
			harl.warning();
			break;
		default:
			std::cout << "Usage: ./harl [name]" << std::endl;
			return 1;
	}
}