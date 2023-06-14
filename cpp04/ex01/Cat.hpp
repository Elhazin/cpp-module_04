#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include "Brain.hpp"
class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat& cat);
        ~Cat();
        Cat& operator=(Cat& cat);
        void makeSound() const ;
        std::string getType() const;

};




#endif