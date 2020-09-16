#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <iostream>

class Button
{
    //Declare methods and properties
public:
    virtual ~Button() {}
};

class DarkButton : public Button
{
public:
    DarkButton()
    {
        std::cout << "Create DarkButton" << std::endl;
    }

    ~DarkButton()
    {
        std::cout << "Delete DarkButton" << std::endl;
    }
};

class LightButton : public Button
{
public:
    LightButton()
    {
        std::cout << "Create LightButton" << std::endl;
    }

    ~LightButton()
    {
        std::cout << "Delete LightButton" << std::endl;
    }
};

#endif