#include <iostream>
#include <string>
#include <iomanip>
class Zombie {
	private :
		std::string name;
	public :
		Zombie(std::string nom);
		~Zombie();
		void	announce(void);
};
Zombie* newZombie( std::string name );
void	randomChump( std::string name );



void Zombie::announce(void)
{
	std::cout << name ;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	std::cout << "Destructor called now, name is " << name << std::endl;
}

Zombie::Zombie(std::string nom)
{
	name = nom;
}
void randomChump( std::string name )
{
	Zombie zomnbie(name);
	zomnbie.announce();
}

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);	
}

int main()
{
    randomChump("anas");
    Zombie *a = new  Zombie("anassssss");
    a->announce();
    delete a;
}