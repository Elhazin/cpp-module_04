#include "ScavTrap.hpp"

int main()
{
    {
        std::cout << "---------------------" << std::endl;
        std::string f = "llll";
        ScavTrap enemy("Enemy");
        ScavTrap player("Player");
        ScavTrap copy(player);
        copy.attack("Enemy");
        enemy.takeDamage(20);
        enemy.beRepaired(20);
        enemy.attack("Player");
        enemy.guardGate();
        player.attack("Enemy");
        enemy.takeDamage('l');
        enemy.beRepaired(20);
        enemy.attack("Player");
        enemy.guardGate();
    }
    {
        std::cout << "---------------------" << std::endl;
        ScavTrap enemy("Enemy");
        ScavTrap player("Player");
        ScavTrap copy(player);
        copy.attack("Enemy");
        enemy.takeDamage(20);
        enemy.beRepaired(20);
        enemy.attack("Player");
        enemy.guardGate();
        player.attack("Enemy");
        enemy.takeDamage(20);
        enemy.beRepaired(20);
        enemy.attack("Player");
        enemy.guardGate();
        enemy.attack("Player");
    }
}