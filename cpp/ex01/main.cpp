/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:15 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/18 16:25:44 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_number.hpp"

int main()
{
	std::string	str;
	PhoneBook	my_contact;
	int			i;

	my_contact.size = 0;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cout << "\nplease emnter a choice  : ";
		std::cin >> str;
		if (str == "add")
		{
			my_contact.add(i);
			if (my_contact.size == 7)
				my_contact.size = 7;
			else 
				my_contact.size++;
		}
		else if (str == "search")
			my_contact.search();
		i++;
	}
}