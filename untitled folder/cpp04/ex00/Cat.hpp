#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat& cat);
        ~Cat();
        Cat& operator=(Cat& cat);
        void makeSound() const;
        std::string getType() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat& cat);
        ~WrongCat();
        WrongCat& operator=(WrongCat& cat);
        void makeSound() const;
        std::string getType() const;
};

#endif