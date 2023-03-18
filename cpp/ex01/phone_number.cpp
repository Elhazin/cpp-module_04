/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_number.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:28:44 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/19 00:30:32 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_number.hpp"
#include <stdlib.h>

void PhoneBook::add(int i)
{
	std::string str;
	std::cout << "\n";
	std::cout << "\e[0;30mPlease enter the first name : \e[1;30m";
	std::cin >> str;
	account[i].set_first_name(str);
	
	std::cout << "\e[0;30mPlease enter the last name : \e[1;30m";
	std::cin >> str;
	account[i].set_second_name(str);
	
	std::cout << "\e[0;30mPlease enter the nickname : \e[1;30m";
	std::cin >> str;
	account[i].set_nickname_name(str);

	std::cout << "\e[0;30mPlease enter the phone  number : \e[1;30m";
	std::cin >> str;
	account[i].set_phone_number(str);

	std::cout << "\e[0;30mPlease enter the darkest_secrete : \e[1;30m";
	std::cin >> str;
	std::cout << "\e[0m";
	account[i].set_secrete(str);
}
void print_colo()
{
	std::cout << std::setw(10) << "Index" << std::setw(2) << "|"
				<< std::setw(12) << "First name" << std::setw(2) << "|"
				<< std::setw(10) << "Last name" << std::setw(2) << "|"
				<< std::setw(10) << "nickname" << std::setw(2) << "|\n";
}
void PhoneBook::print()
{
	int i;
	i = 0;
	print_colo();
	while (i < size)
	{
		std::cout   << std::setw(10) << i + 1 << std::setw(2) << "|"
					<< std::setw(10) << account[i].get_first_name() << std::setw(2) << "|"
					<< std::setw(10) << account[i].get_the_second() << std::setw(2) << "|"
					<< std::setw(10) << account[i].get_the_nickname() << std::setw(2) << "|\n";
		i++;
	}
}

void PhoneBook::print_index(int i)
{
	print_colo();
		std::cout   << std::setw(10) << i << std::setw(2) << "|"
					<< std::setw(12) << account[i].get_first_name() << std::setw(2) << "|"
					<< std::setw(10) << account[i].get_the_second() << std::setw(2) << "|"
					<< std::setw(10) << account[i].get_the_nickname() << std::setw(2) << "|\n";
}
void PhoneBook::search()
{
	int i;

	i = 0;
		print();
		std::cout << "please choose an index : ";
	std::cin >> i;
	if (i > size)
	{
		std::cout << "\e[0;31m the index that you entered is 1\e[0m\n";
		return ;
	}
	print_index(i);
}