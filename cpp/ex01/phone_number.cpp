/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_number.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:28:44 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/18 16:28:34 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_number.hpp"

void PhoneBook::add(int i)
{
    std::string str;

    std::cout << "Please enter the first name : ";
    std::cin >> str;
    account[i].set_first_name(str);
    
    std::cout << "Please enter the last name : ";
    std::cin >> str;
    account[i].set_second_name(str);
    
    std::cout << "Please enter the nickname : ";
    std::cin >> str;
    account[i].set_nickname_name(str);

    std::cout << "Please enter the phone  number : ";
    std::cin >> str;
    account[i].set_phone_number(str);
    
    
    std::cout << "Please enter the darkest_secrete : ";
    std::cin >> str;
    account[i].set_secrete(str);
}
void print_colo()
{
    std::cout << std::setw(10) << "Index" << std::setw(2) << "|"
				<< std::setw(12) << "First name" << std::setw(2) << "|"
				<< std::setw(10) << "Last name" << std::setw(2) << "|"
				<< std::setw(10) << "nickname" << std::setw(2) << "|\n";
	//std::cout << std::setfill('-') << std::setw(40) << "";
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
       // std::cout << std::setfill('-') << std::setw(40) << "\n";
        i++;
    }
}

void PhoneBook::print_index(int i)
{
    print_colo();
        std::cout   << std::setw(10) << i + 1 << std::setw(2) << "|"
                    << std::setw(12) << account[i].get_first_name() << std::setw(2) << "|"
                    << std::setw(10) << account[i].get_the_second() << std::setw(2) << "|"
                    << std::setw(10) << account[i].get_the_nickname() << std::setw(2) << "|\n";
        std::cout << std::setfill('-') << std::setw(40) << "";
}
void PhoneBook::search()
{
    int i;
        print();
        std::cout << "please choose an index : ";
    std::cin >> i;
    std::cout << "{";
    std::cout << i;
        std::cout << "}\n";
    if (i > size)
    {
        std::cout << " the index that you entered is invalid\n";
        return ;
    }
    print_index(i);
}