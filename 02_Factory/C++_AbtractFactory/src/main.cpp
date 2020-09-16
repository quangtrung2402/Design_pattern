#include <iostream>
#include "Button.hpp"
#include "TextView.hpp"
#include "WidgetFactory.hpp"

using namespace std;

int main(int argc, const char **argv)
{
    WidgetFactory *widgetFactory = nullptr;
    TextView *textView = nullptr;
    Button *button = nullptr;

    cout << "Try Dark mode:" << endl;
    widgetFactory = new DarkThemeWidgetFactory;
    textView = widgetFactory->createTextView();
    button = widgetFactory->createButton();

    delete widgetFactory;
    widgetFactory = nullptr;
    delete textView;
    textView = nullptr;
    delete button;
    button = nullptr;

    cout << endl
         << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl
         << "change mode:" << endl
         << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl
         << endl;

    cout << "Try Light mode:" << endl;
    widgetFactory = new LightThemeWidgetFactory;
    textView = widgetFactory->createTextView();
    button = widgetFactory->createButton();

    delete widgetFactory;
    widgetFactory = nullptr;
    delete textView;
    textView = nullptr;
    delete button;
    button = nullptr;
    return 0;
}