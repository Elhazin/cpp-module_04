

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void functiontest(Animal& animal)
{
	std::cout << "======= functiontest ======== " << std::endl;
	std::cout << "Animal type is : " << animal.getType() << std::endl;
	std::cout << "Animal idea is : " <<  animal.get_brain()->get_ideas(0) << std::endl;
	animal.makeSound();
}

int main()
{
	Cat cat;
	cat.get_brain()->set_ideas("I am a cat", 0);
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Cat idea is : " << cat.get_brain()->get_ideas(0) << std::endl;
	Cat cittes = cat;
	cittes.get_brain()->set_ideas("I am a cat too", 0);
	std::cout << " cittes idea is : " << cittes.get_brain()->get_ideas(0) << std::endl;
	std::cout << "Cat idea is : " << cat.get_brain()->get_ideas(0) << std::endl;
	std::cout << "------------------" << std::endl;	
	// // {
	// // 	std::cout << "------------------" << std::endl;
	// // 	const Animal* meta[10];
	// // 	std::cout << "\e[1;36m-------- Creating Dog objects ----------" << std::endl;
	// // 	for (int i = 0; i < 5; i++)
	// // 		meta[i] = new Dog();
	// // 	std::cout << "\e[1;34m-------- Creating Cat objects ----------" << std::endl;
	// // 	for (int i = 5; i < 10; i++)
	// // 		meta[i] = new Cat();
	// // 	std::cout << "\e[4;35m-------- Make their sounds ----------" << std::endl;
	// // 	for (int i = 0; i < 10; i++)
	// // 		meta[i]->makeSound();
	// // 	std::cout << "\e[4;33m-------- Delete all objects ----------" << std::endl;
	// // 	for (int i = 0; i < 10; i++)
	// // 		delete meta[i];
	// // }
	// {
	// 	Cat cat;
	// 	Dog dog;
	// 	Brain* brain = cat.get_brain();
	// 	Brain* brain2 = dog.get_brain();
	// 	std::cout << "Cat idea is : " << brain->get_ideas(0) << std::endl;
	// 	brain->set_ideas("I am a cat", 0);
	// 	brain->set_ideas("I am a hapy cat", 1);
	// 	std::cout << "Cat idea is : " << brain->get_ideas(0) << std::endl;
	// 	brain2->set_ideas("I am a dog", 0);
	// 	std::cout << "************** calling functiontest ********" << std::endl;
	// 	functiontest(cat);
	// 	std::cout << "************** calling functiontest ********" << std::endl;
	// 	functiontest(dog);
	
	// }

}
