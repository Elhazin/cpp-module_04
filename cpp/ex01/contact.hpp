/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:22:21 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/17 14:28:37 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secrete;
	public:
		std::string	get_first_name();
		std::string	get_the_second();
		std::string	get_the_nickname();
		std::string	get_phone();
		std::string	get_secrete();
		void		set_first_name(std::string name);
		void		set_second_name(std::string name);
		void		set_nickname_name(std::string name);
		void		set_phone_number(std::string name);
		void		set_secrete(std::string name);
};

