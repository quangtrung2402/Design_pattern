#ifndef TEXTVIEW_HPP
#define TEXTVIEW_HPP

#include <iostream>

class TextView
{
    //Declare methods and properties
public:
    virtual ~TextView() {}
};

class DarkTextView : public TextView
{
public:
    DarkTextView()
    {
        std::cout << "Create DarkTextView" << std::endl;
    }

    ~DarkTextView()
    {
        std::cout << "Delete DarkTextView" << std::endl;
    }
};

class LightTextView : public TextView
{
public:
    LightTextView()
    {
        std::cout << "Create LightTextView" << std::endl;
    }

    ~LightTextView()
    {
        std::cout << "Delete LightTextView" << std::endl;
    }
};

#endif