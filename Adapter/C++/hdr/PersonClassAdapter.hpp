#ifndef PERSON_CLASS_ADAPTER_HPP
#define PERSON_CLASS_ADAPTER_HPP

#include <string>
#include "PersonAdaptee.hpp"

class PersonClassAdapter : public PersonAdaptee
{
public:
    PersonClassAdapter() {}

    void setPersonalInfo(std::string name, uint age)
    {
        setName(name);
        setAge(age);
    }
};

#endif // !PERSON_CLASS_ADAPTER_HPP