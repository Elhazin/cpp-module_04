#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string str);
		Weapon();
		std::string getType();
		void setType(std::string str);
};

Weapon::Weapon(std::string str)
{
	type = str;
}

Weapon::Weapon()
{
}

std::string Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string str)
{
	type = str;	
    std::cout << type << " : type"<<std::endl;
}
					//  class of Human A
class HumanA{
	private:
		Weapon& weapon;
		std::string name;
	public:
		HumanA(std::string str, Weapon& weap);
		void attack();
};

HumanA::HumanA(std::string str, Weapon& weap) : weapon(weap)
{
	name = str;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

					//class of human B
class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		void attack();
		HumanB(std::string str);
		// HumanB(std::string str);
		void setWeapon(Weapon weap);
};
// HumanB::HumanB(std::string str)
// {
// 	name = str;
// 	// weapon = &weap;

// }
 HumanB::HumanB(std::string nam)
 {
	name = nam;
 }
void HumanB::setWeapon(Weapon weap)
{
	weapon = &weap;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("shrfejdeedjkdejk");
jim.attack();
}
return 0;
}

