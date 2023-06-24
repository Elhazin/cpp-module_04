#include "FragTrap.hpp"

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Good work guys . we are going to win" << std::endl;
}
 
FragTrap::FragTrap(std::string nn)
{
	std::cout << "The constroucter of FragClap is called" << std::endl;
	string	=	nn;
	damage	=	30;
	enegry	=	100;
	hit		=	100;
}

FragTrap::FragTrap(FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "The constroucter of FragClap is called" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "The destroucter of FragClap is called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap& copy)
{
	std::cout << "The constroucter of FragClap is called" << std::endl;
	string	=	copy.string;
	hit		=	copy.hit;
	enegry	=	copy.enegry;
	damage	=	copy.damage;
	return *this;   
}
