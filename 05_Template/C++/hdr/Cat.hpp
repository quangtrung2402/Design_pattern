#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat() {}
    void makeSound()
    {
        std::cout << "meo meo" << std::endl;
    }
};

#endif // !CAT_HPP