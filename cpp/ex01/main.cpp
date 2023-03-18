/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:15 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/19 00:27:23 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_number.hpp"
int main()
{
	std::string	str;
	PhoneBook	my_contact;
	int			i;

	i = 0;
	my_contact.size = 0;
	while (1)
	{

		std::cout << "\nplease enter a choice  : ";
		std::getline(std::cin, str);
		if (str == "add")
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
		else if (str == "search")
			my_contact.search();
		else if (str == "exit")
			exit(0);
		// else
		// 	std::cout << "\e[0;31minvalid arguments\e[0m";
		

	}
}