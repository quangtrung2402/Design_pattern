#include <iostream>

#include <string>
#include "PersonClassAdapter.hpp"
#include "PersonObjectAdapter.hpp"

int main(int argc, const char **argv)
{
    //========== Init test value ==========//
    std::string myName = "Quang Trung";
    uint myAge = 29;

    std::cout << "//========== Test Class Adapter ==========//" << std::endl;
    PersonClassAdapter *personClassAdapter = new PersonClassAdapter();
    personClassAdapter->setPersonalInfo(myName, myAge);
    personClassAdapter->showData();
    delete personClassAdapter;
    personClassAdapter = nullptr;

    std::cout << std::endl << std::endl;

    std::cout << "//========== Test Object Adapter ==========//" << std::endl;
    PersonObjectAdapter *personObjectAdapter = new PersonObjectAdapter();
    personObjectAdapter->setPersonalInfo(myName, myAge);
    personObjectAdapter->showData();
    delete personObjectAdapter;
    personObjectAdapter = nullptr;

    return 0;
}