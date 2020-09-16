#ifndef WIDGET_FACTORY_HPP
#define WIDGET_FACTORY_HPP

#include <iostream>
#include <string>
#include "Button.hpp"
#include "TextView.hpp"

class WidgetFactory
{
public:
    virtual TextView *createTextView() = 0;
    virtual Button *createButton() = 0;
    virtual ~WidgetFactory() {}
};

class LightThemeWidgetFactory : public WidgetFactory
{
public:
    TextView *createTextView()
    {
        return new LightTextView();
    }

    Button *createButton()
    {
        return new LightButton();
    }
};

class DarkThemeWidgetFactory : public WidgetFactory
{
public:
    TextView *createTextView()
    {
        return new DarkTextView();
    }

    Button *createButton()
    {
        return new DarkButton();
    }
};

#endif