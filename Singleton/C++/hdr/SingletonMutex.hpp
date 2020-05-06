#ifndef SINGLETON_MUTEX_HPP
#define SINGLETON_MUTEX_HPP
#define DP_SINGLETON_MUTEX 2

#include <mutex>

class SingletonMutex
{
private:
    static SingletonMutex *mInstancePtr;
    static std::mutex mLockInstance;
    int count;

private:
    SingletonMutex() : count(0) {}
    SingletonMutex(const SingletonMutex &obj){};

public:
    static SingletonMutex *getInstance()
    {
        mLockInstance.lock();
        if (nullptr == mInstancePtr)
        {
            mInstancePtr = new SingletonMutex();
        }
        mLockInstance.unlock();
        return mInstancePtr;
    }

    int runTask()
    {
        ++count;
        return count;
    }
};

SingletonMutex *SingletonMutex::mInstancePtr = nullptr;
std::mutex SingletonMutex::mLockInstance;
#endif // !SINGLETON_HPP