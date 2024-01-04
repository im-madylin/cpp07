#include "iter.hpp"
#include <iostream>

int main()
{
    int intArray[5] = {1, 2, 3, 4, 5};
    double doubleArray[3] = {1.1234, 2.1234, 3.12345};
    std::string strArray[4] = {"hi", "my", "name is", "hahlee"};
    const int constArray[3] = {100, 200, 300};

    iter(constArray, 3, printValue);
    iter(intArray, 5, printValue);
    iter(doubleArray, 3, printValue);
    iter(strArray, 4, printValue);

    return 0;
}