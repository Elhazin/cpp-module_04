#ifndef     DOG_HPP
# define    DOG_HPP

#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog& dog);
        ~Dog();
        Dog& operator=(Dog& dog);
        void makeSound() const;
        std::string getType() const;
};


#endif