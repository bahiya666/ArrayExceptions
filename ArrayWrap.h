#ifndef ARRAYWRAP_H
#define ARRAYWRAP_H

#include <string>
#include <sstream>
#include <iostream>
#include "ConstructorException.h"
#include "IndexException.h"
#include "SizeException.h"

template <class T>
class ArrayWrap
{
    private:
        T* m_array;
        int m_size;
        int  maxSize;

    public:
        ArrayWrap (int maxSize);
        ~ArrayWrap();
        T& operator[](int index);
        void swap (int index1, int index2);
        void push_back(T item);
        T pop_back();
        void remove (int index);
        void clear();
        void print();


};

#endif