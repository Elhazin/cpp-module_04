/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_number.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:28:44 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/05 02:35:42 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_number.hpp"
#include <stdlib.h>

int  check(std::string& s)
{
	size_t i;
	 i = 0;

	 while (i < s.length())
	 {
		if (s[i] != ' ')
			return 1;
		i++;
	 }
	 if (i == 0)
	 	return (0);
	return (0);
}

int check_number(std::string& s)
{
	size_t i;
	 i = 0;

	 while (i < s.length())
	 {
		if (isdigit(s[i]) == 0)
			return 0;
		i++;
	 }
	 if (i == 0)
	 	return (0);
	return (1);	
}

void PhoneBook::add(int i)
{
	std::string	firstnaame;
	std::string	second;
	std::string	nickname;
	std::string	number;
	std::string	secrete;

	std::cout << "\n";
	while (strlen(firstnaame.c_str()) <= 0 ||check(firstnaame) == 0)
	{
		std::cout << "\e[0;30mPlease enter the first name : \e[1;30m";
		getline(std::cin, firstnaame);
		if (std::cin.eof()) {
		exit(0);
	}
	}
	while (strlen(second.c_str() ) <= 0 ||check(second) == 0)
	{
		std::cout << "\e[0;30mPlease enter the last name : \e[1;30m";
		getline(std::cin, second);
		if (std::cin.eof()) {
			exit(0);
	}
	}
	
	while (strlen(nickname.c_str() )<= 0 ||check(nickname) == 0)
	{
		std::cout << "\e[0;30mPlease enter the nickname : \e[1;30m";
		getline(std::cin, nickname);
		if (std::cin.eof()) {
			exit(0);
	}
	}
	while (strlen(number.c_str() )<= 0  || check_number(number) == 0)
	{
		std::cout << "\e[0;30mPlease enter the phone  number : \e[1;30m";
		getline(std::cin, number);
		if (std::cin.eof())
			exit(0);
	}
	while (strlen(secrete.c_str()) <= 0 ||check(secrete) == 0)
	{
		std::cout << "\e[0;30mPlease enter the darkest_secrete : \e[1;30m";
		getline(std::cin, secrete);
		std::cout << "\e[0m";
		if (std::cin.eof())
			exit(0);
	}
	account[i].set_first_name(firstnaame);
	account[i].set_second_name(second);
	account[i].set_nickname_name(nickname);
	account[i].set_phone_number(number);
	account[i].set_secrete(secrete);
}

void	print_colo()
{
	std::cout << "\n\e[1;36m" << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First name" << "|"
				<< std::setw(10) << "Last name" << "|"
				<< std::setw(10) << "nickname" << "|";
	std::cout << "\e[1;30m\n";
}

void	PhoneBook::print()
{
	int			i;
	std::string	firstname;
	std::string	secondname;
	std::string	nickname;
	i = 0;
	print_colo();
	while (i < size)
	{
		firstname = account[i].get_first_name();
		secondname = account[i].get_the_second();
		nickname = account[i].get_the_nickname();
		if (strlen(firstname.c_str()) >= 10)
		{
			firstname = firstname.substr(0, 9);
			firstname += ".";
		}

		if (strlen(secondname.c_str())	>= 10)
		{
			secondname = secondname.substr(0, 9);
			secondname += ".";
		}

		if (strlen(nickname.c_str())  >= 10)
		{
			nickname = nickname.substr(0, 9);
			nickname += ".";
		}

		std::cout   << std::setw(10) << i  << "|"
					<< std::setw(10) << firstname  << "|"
					<< std::setw(10) << secondname  << "|"
					<< std::setw(10) << nickname << "|\n";
		i++;
	}
	std::cout << "\n";
}

void	PhoneBook::print_index(int	i)
{
	std::cout << "\n";
	std::cout << "Index       : " << i << std::endl;
	std::cout << "First name  : " << account[i].get_first_name() << std::endl;
	std::cout << "Second name : " << account[i].get_the_second() << std::endl;
	std::cout << "Nickname    : " << account[i].get_the_nickname() << std::endl;
	std::cout << "\n";
}

int	check_is_digit(std::string str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	PhoneBook::search()
{
	int	i;

	i = 0;
	std::string numstr;
	if (size == 0)
	{
		std::cout << "\e[0;33m\tUnfortunately there is no contact until now\e[0m" <<  std::endl;
		return; 
	}
	print();
		std::cout << "please choose an index : ";
	getline(std::cin, numstr);
	if (std::cin.eof())
		exit(0);
	if (check_is_digit(numstr) == 1)
	{
		std::cout << "\e[0;31m the index that you entered is not a digit\e[0m\n";
		return ;
	}
	i = std::atoi(numstr.c_str());
	if (i >= size || i < 0)
	{
		std::cout << "\e[0;31m the index that you entered isout of range of contact\e[0m\n";
		return ;
	}
	print_index(i);
}
