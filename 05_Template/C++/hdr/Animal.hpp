#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
public:
    Animal() {}
    virtual void move()
    {
        std::cout << "moving" << std::endl;
    }

    virtual void eat()
    {
        std::cout << "eating" << std::endl;
    }

    virtual void makeSound() = 0;

    virtual ~Animal() {}
};

#endif // !ANIMAL_HPP