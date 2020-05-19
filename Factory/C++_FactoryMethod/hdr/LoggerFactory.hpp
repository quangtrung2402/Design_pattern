#ifndef LOGGER_FACTORY_HPP
#define LOGGER_FACTORY_HPP

#include <iostream>
#include <string>

// define enum type for logger types
enum eLoggerType
{
    LOGGER_TYPE_NETWORK = 0,
    LOGGER_TYPE_FILE,
    LOGGER_TYPE_DEBUG,
    LOGGER_TYPE_DEFAULT
};

class Logger
{
public:
    // define interfaces
    virtual std::string description() = 0;
    virtual void logd(std::string logMessage)
    {
        std::cout << description() << logMessage << std::endl;
    }
    // virtual void logd(int num) = 0;
    // virtual void logd(bool val) = 0;
    // virtual bool initialize() = 0;
};

class LoggerOnNetwork : public Logger
{
public:
    // implemement Logger's interfaces
    std::string description()
    {
        return "LoggerOnNetwork";
    };
};

class LoggerOnFile : public Logger
{
public:
    // implemement Logger's interfaces
    std::string description()
    {
        return "LoggerOnFile";
    };
};

class LoggerOnDebug : public Logger
{
public:
    // implemement Logger's interfaces
    std::string description()
    {
        return "LoggerOnDebug";
    };
};

/*
Apply Factory method
*/
class LoggerFactory
{
public:
    static Logger *createLogger(eLoggerType loggerType = LOGGER_TYPE_DEFAULT)
    {
        Logger *logger = nullptr;
        switch (loggerType)
        {
        case LOGGER_TYPE_NETWORK:
            logger = new LoggerOnNetwork();
            break;
        case LOGGER_TYPE_FILE:
            logger = new LoggerOnFile();
            break;
        case LOGGER_TYPE_DEBUG:
            logger = new LoggerOnDebug();
            break;
        default:
            logger = new LoggerOnFile();
            break;
        }

        return logger;
    }
};

#endif