#define TEST_SCENARIO 1

#include <iostream>

int main(int argc, const char **argv)
{
#if TEST_SCENARIO == 1
    std::cout << "Hello world!" << std::endl;
#endif
    return 0;
}