#ifndef SINGLETON_HPP
#define SINGLETON_HPP
#define DP_SINGLETON_BASIC 1

class Singleton
{
private:
    static Singleton *mInstancePtr;
    int count;

private:
    Singleton() : count(0) {}
    Singleton(const Singleton &obj){};

public:
    static Singleton *getInstance()
    {
        if (nullptr == mInstancePtr)
        {
            mInstancePtr = new Singleton();
        }
        return mInstancePtr;
    }

    int runTask()
    {
        ++count;
        return count;
    }
};

Singleton *Singleton::mInstancePtr = nullptr;
#endif // !SINGLETON_HPP