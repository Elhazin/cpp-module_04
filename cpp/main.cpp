#include <iostream>
#include <string>

#include <iostream>

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

std::string	Contact::get_first_name()
{
	return (first_name);
}
void Contact::set_first_name(std::string str)
{
	first_name = str;
}


int main()
{
	Contact c;
	c.set_first_name("Anas");
	std::string str = c.get_first_name();
	std::cout << str;
}