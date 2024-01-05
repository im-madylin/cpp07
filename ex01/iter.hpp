#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    iter(T array[], unsigned int len, void (*func)(T &))
{
    if (len == 0 || !array || !func)
        return ;
    
    for (unsigned int i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename T>
void    iter(const T array[], const unsigned int len, void (*func)(const T &))
{
    if (len == 0 || !array || !func)
        return ;
    
    for (unsigned int i = 0; i < len; i++)
    {
        func(array[i]);
    }
}

template <typename T>
void    printValue(const T &value)
{
    std::cout << value << std::endl;
}

#endif