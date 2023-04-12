/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_number.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouzanb <abouzanb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 00:36:46 by abouzanb          #+#    #+#             */
/*   Updated: 2023/03/25 18:09:07 by abouzanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook{
		Contact account[8];
	public:
		int size;

		
		void add(int i);
		void print_index(int i);
		void search();
		void print();
};