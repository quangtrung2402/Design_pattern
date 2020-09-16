
#define TEST_SCENARIO DP_SINGLETON_STATIC

#include <iostream>
#include "Singleton.hpp"
#include "SingletonMutex.hpp"
#include "SingletonStaticObject.hpp"

int main(int argc, const char **argv)
{
#if TEST_SCENARIO == DP_SINGLETON_BASIC
    Singleton *_sing_1 = Singleton::getInstance();
    Singleton *_sing_2 = Singleton::getInstance();

    std::cout << typeid(Singleton).name() << std::endl;
    std::cout << _sing_1->runTask() << std::endl;
    std::cout << _sing_2->runTask() << std::endl;

    std::cout << _sing_1->runTask() << std::endl;
    std::cout << _sing_2->runTask() << std::endl;

#elif TEST_SCENARIO == DP_SINGLETON_MUTEX
    SingletonMutex *_sing_1 = SingletonMutex::getInstance();
    SingletonMutex *_sing_2 = SingletonMutex::getInstance();

    std::cout << typeid(SingletonMutex).name() << std::endl;
    std::cout << _sing_1->runTask() << std::endl;
    std::cout << _sing_2->runTask() << std::endl;

    std::cout << _sing_1->runTask() << std::endl;
    std::cout << _sing_2->runTask() << std::endl;

    // SingletonMutex ins = *SingletonMutex::getInstance();
    // std::cout << ins.runTask() << std::endl;

#elif TEST_SCENARIO == DP_SINGLETON_STATIC
    SingletonStaticObject *_sing_1 = SingletonStaticObject::getInstance();
    SingletonStaticObject *_sing_2 = SingletonStaticObject::getInstance();

    std::cout << typeid(SingletonStaticObject).name() << std::endl;
    std::cout << _sing_1->runTask() << std::endl;
    std::cout << _sing_2->runTask() << std::endl;

    std::cout << _sing_1->runTask() << std::endl;
    std::cout << _sing_2->runTask() << std::endl;
#endif

    return 0;
}