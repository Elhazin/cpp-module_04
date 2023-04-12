// #include <iostream>
// #include <string>
#include <iostream>
#include <string>
#include <iomanip>
// #include <iostream>

// // class Contact {
// // 	std::string first_name;
// // 	std::string last_name;
// // 	std::string nickname;
// // 	std::string phone_number;
// // 	std::string darkest_secrete;
// // 	public:
// // 		std::string	get_first_name();
// // 		std::string	get_the_second();
// // 		std::string	get_the_nickname();
// // 		std::string	get_phone();
// // 		std::string	get_secrete();
// // 		void		set_first_name(std::string name);
// // 		void		set_second_name(std::string name);
// // 		void		set_nickname_name(std::string name);
// // 		void		set_phone_number(std::string name);
// // 		void		set_secrete(std::string name);
// // };

// // std::string	Contact::get_first_name()
// // {
// // 	return (first_name);
// // }
// // void Contact::set_first_name(std::string str)
// // {
// // 	first_name = str;
// // }


// // int main()
// // {
// // 	Contact c;
// // 	c.set_first_name("Anas");
// // 	std::string str = c.get_first_name();
// // 	std::cout << str;
// // }
// // #include <iostream>
// // using namespace std;

// // struct Rectangle {
// //   private:
// //     int width, height;
// //   public:
// //     Rectangle(int w, int h) {
// //       width = w;
// //       height = h;
// //     }
// //     int area() {
// //       return width * height;
// //     }
// // };

// // int main() {
// //   Rectangle rect(3, 4);
// //   cout << "Area of the rectangle is: " << rect.area() << endl;
// //   return 0;
// //}


// struct str {
// 	int i; 
// 	int y;
// 	public:
// 		str(): i(0)
// 		{
//             std::cout << "=-=-=-=-" <<std::endl;
// 			//i = a;
// 			//y = x;
// 		};
// 		void fun() 
// 		{
//             this->i = 0;
//             this->y = 0;

// 			std::cout << i * y + 1;
// 		}
// };
// int main()
// {
// 	str s;
// 	s.fun();
// }

// // #include <iomanip>

// // int main() {
//     // column headings
//     // std::cout << std::left << std::setw(10) << "Index"
//     //           << std::left << std::setw(10) << "First Name"
//     //           << std::left << std::setw(10) << "Last Name"
//     //           << std::left << std::setw(10) << "Nickname" << "\n";

//     // std::cout << std::setfill('-') << std::setw(40) << "" << "\n";
//     // std::cout << std::setfill(' ');
    

//     // std::cout << std::left << std::setw(10) << "1"
//     //           << std::left << std::setw(10) << "John"
//     //           << std::left << std::setw(10) << "Doe"
//     //           << std::left << std::setw(10) << "JD" << "\n";
    
//     // std::cout << std::left << std::setw(10) << "2"
//     //           << std::left << std::setw(10) << "Jane"
//     //           << std::left << std::setw(10) << "Smith"
//     //           << std::left << std::setw(10) << "JS" << "\n";

//     // std::cout << std::setw(0) << "Index" << std::setw(2) << "|"
// 	// 			<< std::setw(12) << "First name" << std::setw(2) << "|"
// 	// 			<< std::setw(10) << "Last name" << std::setw(2) << "|"
// 	// 			<< std::setw(10) << "nickname" << std::setw(2) << "|\n";
// 	// std::cout << std::setfill('-') << std::setw(40) << "";




// //     return 0;
// // }

// class Zombie {
// 	private :
// 		std::string name;
// 	public :
// 		Zombie(std::string nom);
// 		~Zombie();
// 		void	announce(void);
// };
// Zombie* newZombie( std::string name );
// void	randomChump( std::string name );



// void Zombie::announce(void)
// {
// 	std::cout << name ;
// 	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
// }
// Zombie::~Zombie()
// {
// 	std::cout << "Destructor called now, name is " << name << std::endl;
// }

// Zombie::Zombie(std::string nom)
// {
// 	name = nom;
// }
// void randomChump( std::string name )
// {
// 	Zombie zomnbie(name);
// 	zomnbie.announce();
// }

// Zombie* newZombie( std::string name )
// {
// 	Zombie *zombie = new Zombie(name);
// 	return (zombie);	
// }

// int main()
// {
//     randomChump("anas");
    
// }


// class s{
// 	int i;
// 	s(int f){
// 		i= f;
// 	}
// 	void ff()
// 	{
// 		std::cout << i << std::endl;
// 	}
// };
// int main()
// {
// 	s *d = new s(8)[5];
// }
// void f(int& i)
// {
// 	std::cout << "the address of refernecr i " << &i << std::endl;
// }
// int main()
// {
// 	int i = 5;
// 	std::cout << &i<< std::endl;
// 	f(i);

// }










/****************************************************************************************/
// #include <iostream>

// class Weapon {
// 	private:
// 		std::string type;
// 	public:
// 		Weapon(std::string str);
// 		Weapon();
// 		std::string getType();
// 		void setType(std::string str);
// };

// Weapon::Weapon(std::string str)
// {
// 	type = str;
// }

// Weapon::Weapon()
// {
	
// }

// std::string Weapon::getType()
// {
// 	return (type);
// }

// void Weapon::setType(std::string str)
// {
// 	type = str;	
// }
// 					//  class of Human A
// class HumanA{
// 	private:
// 		Weapon weapon;
// 		std::string name;
// 	public:
// 		HumanA(std::string str, Weapon weap);
// 		void attack();
		
// };
// HumanA::HumanA(std::string str, Weapon weap)
// {
// 	name = str;
// 	weapon = weap;
// }
// void HumanA::attack()
// {
// 	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
// }

// 					//class of human B

// class HumanB{
// 	private:
// 		std::string name;
// 		Weapon weapon;
// 	public:
// 		void attack();
// 		HumanB(std::string str, Weapon weap);
// 		HumanB(std::string str);
// 		void setWeapon(Weapon weap);
// };
// HumanB::HumanB(std::string str, Weapon weap)
// {
// 	name = str;
// 	weapon = weap;
// }
//  HumanB::HumanB(std::string nam)
//  {
// 	name = nam;
//  }
// void HumanB::setWeapon(Weapon weap)
// {
// 	weapon = weap;
// }

// void HumanB::attack()
// {
// 	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
// }

// int main()
// {
// {
// Weapon club = Weapon("crude spiked club");
// HumanA bob("Bob", club);
// bob.attack();
// club.setType("some other type of club");
// bob.attack();
// }
// {
// Weapon club = Weapon("crude spiked club");
// HumanB jim("Jim");
// jim.setWeapon(club);
// jim.attack();
// //club.setType("some other type of club");
// jim.attack();
// }
// return 0;
// }   