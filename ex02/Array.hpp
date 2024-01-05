#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream> //
#include <exception>

template<typename T>
class Array
{
private:
    T *array;
    unsigned int arraySize;
public:
    Array() : array(new T[0]), arraySize(0) {}
    Array(unsigned int n) : array(new T[n]), arraySize(n) {}
    Array(const Array &other) : array(new T[0]), arraySize(0)
    {
        *this = other;
    }
    ~Array()
    {
        delete[] array;
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] array;
            arraySize = other.arraySize;
            array = new T[arraySize];
            for (unsigned int i = 0; i < arraySize; i++)
                array[i] = other.array[i];
        }
        return *this;
    }
    
    T &operator[](unsigned int index)
    {
        if (index >= arraySize || !array)
            throw InvalidIndexException();
        return array[index];
    }

    class InvalidIndexException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return "It's invalid index!";
            }
    };
};

#endif