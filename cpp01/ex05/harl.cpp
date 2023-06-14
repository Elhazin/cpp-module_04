#include "harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info(void)
{
		std::cout << "I !have some info\n";
}

void Harl::warning(void)
{
	std::cout << "I think that you do not have to do it\n";
}

void Harl::error(void)
{
	std::cout << "I told you that this is an error\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*fun[4])(void) = {&Harl::error, &Harl::debug, &Harl::info , &Harl::warning};
	const char* index[4] = {"ERROR", "DEBUG","INFO",  "WARNING"};
	int i;
	i = 0;
	while (i < 4)
	{
		if (level == index[i])
			(this->*fun[i])();
		i++;
	}

}