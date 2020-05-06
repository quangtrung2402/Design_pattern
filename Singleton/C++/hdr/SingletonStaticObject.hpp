#ifndef SINGLETON_STATIC_OBJECT_HPP
#define SINGLETON_STATIC_OBJECT_HPP
#define DP_SINGLETON_STATIC 3

#include <mutex>

class SingletonStaticObject
{
private:
    int count;

private:
    SingletonStaticObject() : count(0) {}

public:
    static SingletonStaticObject *getInstance()
    {
        static SingletonStaticObject mInstancePtr;
        return &mInstancePtr;
    }

    int runTask()
    {
        ++count;
        return count;
    }
};
#endif // !SINGLETON_HPP