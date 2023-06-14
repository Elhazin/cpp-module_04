#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("Robot1");
	clapTrap.attack("Enemy1");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(3);
	clapTrap.attack("Enemy2");
	clapTrap.takeDamage(12);
	clapTrap.takeDamage(12);
	clapTrap.attack("charaf");
	clapTrap.beRepaired(3);
	return 0;
}