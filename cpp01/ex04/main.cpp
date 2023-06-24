/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:17:49 by abouzanb          #+#    #+#             */
/*   Updated: 2023/06/17 19:40:01 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "\033[1;31mError: \033[0m" << "Wrong number of arguments \n You have to put them like : ./sed FILENAME replaced to_be_replaced_by" << std::endl;
		return (1);
	}
	std::ifstream ifs(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "\033[1;31mError: \033[0m" << "File does not exist" << std::endl;
		return (1);
	}
	std::ofstream ofs(av[1] + std::string(".replace"));
	if (!ofs.is_open())
	{
		std::cout << "\033[1;31mError: \033[0m" << "File does not exist" << std::endl;
		return (1);
	}
	std::string readed;
	std::string replaced;
	std::string to_replace = av[2];
	std::string replace_by = av[3];
	int pos = 0;
	size_t found;
	while (std::getline(ifs, readed))
	{
		if (av[2][0] != '\0')
		{
			while (true)
			{
				found = readed.find(to_replace, pos); 
				if (found == std::string::npos)
					break;
				replaced = readed.substr(0, found);
				replaced += replace_by;
				pos = found + replace_by.length();
				replaced += readed.substr(found + to_replace.length());
				readed = replaced;
			}
		}
		ofs << readed << std::endl;
	}
	std::cout << "\033[1;32mSuccess: \033[0m" << "File successfully replaced" << std::endl;
	return (0);
}