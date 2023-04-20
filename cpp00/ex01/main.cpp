/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:15 by abouzanb          #+#    #+#             */
/*   Updated: 2023/04/19 17:59:58 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_number.hpp"
int	 main()
{
	std::string	str;
	PhoneBook	my_contact;
	int			i;

	i = 0;
	my_contact.size = 0;
	while (1)
	{

		std::cout << "please enter a choice  : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(0);
		if (str == "ADD")
		{		
			if (i == 7)
			i = 0;
			my_contact.add(i);
			if (my_contact.size == 7)
				my_contact.size = 7;
			else 
				my_contact.size++;
				i++;
		}
		else if (str == "SEARCH")
			my_contact.search();
		else if (str == "EXIT")
			exit(0);
	}
}