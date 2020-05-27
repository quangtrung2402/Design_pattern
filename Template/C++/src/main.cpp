#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main(int argc, const char **argv)
{
    Dog dog;
    std::cout << "Dog can " << std::endl;
    dog.move();
    dog.eat();
    dog.makeSound();

    std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;

    Cat cat;
    std::cout << "Cat can " << std::endl;
    cat.move();
    cat.eat();
    cat.makeSound();

    return 0;
}