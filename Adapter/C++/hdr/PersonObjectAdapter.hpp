#ifndef PERSON_OBJECT_ADAPTER_HPP
#define PERSON_OBJECT_ADAPTER_HPP

#include <string>
#include "PersonAdaptee.hpp"

class PersonObjectAdapter
{
    PersonAdaptee *adaptee;

public:
    PersonObjectAdapter() : adaptee(new PersonAdaptee) {}

    void setPersonalInfo(std::string name, uint age)
    {
        if (adaptee != nullptr)
        {
            adaptee->setName(name);
            adaptee->setAge(age);
        }
    }

    void showData()
    {
        if (adaptee != nullptr)
        {
            adaptee->showData();
        }
    }

    virtual ~PersonObjectAdapter()
    {
        delete adaptee;
        adaptee = nullptr;
    }
};

#endif // !PERSON_OBJECT_ADAPTER_HPP