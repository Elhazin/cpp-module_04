#include <iostream>


// Base class
class Animal {
public:
    int a;
    virtual void makeSound() {
        std::cout << "Animal makes a sound." << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() {
        std::cout << "Dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
int k;
    void makeSound()  {
        std::cout << "Cat meows." << std::endl;
    }
};
void f(Animal *s)
{
    s->makeSound();
    s->a = 5;
}
int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    f(animal1);
    f(animal2);
    std::cout << animal2->a << std::endl;

    delete animal1;
    delete animal2;

    return 0;
}
