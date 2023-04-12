/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 03:43:40 by abouzanb          #+#    #+#             */
/*   Updated: 2023/04/07 00:57:07 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string& ptr = str;
    std::string *pointer;
    pointer = &str;
    std::cout << &pointer << std::endl;
    std::cout << &str << std::endl;
    std::cout << &ptr << std::endl;
    
    std::cout << *pointer << std::endl;
    std::cout << str << std::endl;
    std::cout << ptr << std::endl;
}