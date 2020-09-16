#ifndef PERSON_ADAPTEE_HPP
#define PERSON_ADAPTEE_HPP

#include <string>
#include <iostream>

class PersonAdaptee
{
    uint mAge;
    std::string mName;

public:
    PersonAdaptee() : mName(""),
                      mAge(0)
    {
    }

    void setAge(int age)
    {
        this->mAge = age;
    }

    void setName(std::string name)
    {
        this->mName = name;
    }

    void showData()
    {
        std::cout << "My name is " << this->mName << std::endl
                  << "I'm " << this->mAge << std::endl;
    }

    virtual ~PersonAdaptee()
    {
        std::cout << "I'm killed!" << std::endl;
    }
};

#endif // !PERSON_ADAPTEE_HPP