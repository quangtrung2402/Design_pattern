#define TEST_SCENARIO 1

#include "LoggerFactory.hpp"

int main(int argc, const char **argv)
{
#if TEST_SCENARIO == 1
    Logger *_logNet = LoggerFactory::createLogger(LOGGER_TYPE_NETWORK);
    _logNet->logd("_logNet");

    Logger *_logFile = LoggerFactory::createLogger(LOGGER_TYPE_FILE);
    _logFile->logd("_logFile");

    Logger *_logDebug = LoggerFactory::createLogger(LOGGER_TYPE_DEBUG);
    _logDebug->logd("_logDebug");

    Logger *_log = LoggerFactory::createLogger();
    _log->logd("_log");
#endif
    return 0;
}