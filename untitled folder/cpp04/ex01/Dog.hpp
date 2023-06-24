#ifndef		DOG_HPP
# define	DOG_HPP

#include "Animal.hpp"

#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(Dog& dog);
		~Dog();
		Dog& operator=(Dog& dog);
		void makeSound() const;
		std::string getType() const;
		Brain *getBrain() const;
};


#endif