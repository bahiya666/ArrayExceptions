#include "ArrayWrap.h"
#include <string>
#include <sstream>
#include <iostream>

template <class T>
ArrayWrap<T>::ArrayWrap(int size) : maxSize(size), m_size(0) 
{
    if (size <= 0) 
    {
        throw ConstructorException();
    }

    m_array = new T[size];
}

template <class T>
ArrayWrap<T>::~ArrayWrap() 
{
    if (m_array != NULL) 
    {
        delete[] m_array;
    }
    m_array = NULL;
}

template <class T>
T& ArrayWrap<T>::operator[](int index) 
{
    if (index < 0 || index >= m_size) 
    {
        throw IndexException(index, m_size);
    }
    return m_array[index];
}

template <class T>
void ArrayWrap<T>::swap(int index1, int index2) 
{
    if (index1 < 0 || index1 >= m_size || index2 < 0 || index2 >= m_size) 
    {
        int invalidIndex;
        if (index1 < 0 || index1 >= m_size) 
        {
            invalidIndex = index1;
        } 
        else 
        {
            invalidIndex = index2;
        }
        throw IndexException(invalidIndex, m_size);
    }

    if (index1 != index2) 
    {
        T temp = m_array[index1];
        m_array[index1] = m_array[index2];
        m_array[index2] = temp;
    }
}

template <class T>
void ArrayWrap<T>::push_back(T item) 
{
    if (m_size >= maxSize) 
    {
        throw SizeException(m_size);
    }

    m_array[m_size] = item;
    m_size++;
}

template <class T>
T ArrayWrap<T>::pop_back() 
{
    if (m_size <= 0) 
    {
        throw SizeException(0); // Pass 0 to indicate an empty list
    }

    m_size--;
    return m_array[m_size];
}

template <class T>
void ArrayWrap<T>::remove(int index) 
{
    if (index < 0 || index >= m_size) 
    {
        throw IndexException(index, m_size);
    }

    // Shift the elements to cover the open space
    for (int i = index; i < m_size - 1; i++) 
    {
        m_array[i] = m_array[i + 1];
    }

    m_size--;
}

template <class T>
void ArrayWrap<T>::clear() 
{
    m_size = 0;
}

template <class T>
void ArrayWrap<T>::print() 
{
    if (m_size > 0) 
    {
        for (int i = 0; i < m_size - 1; i++) 
        {
            std::cout << m_array[i] << ",";
        }
        std::cout << m_array[m_size - 1] << std::endl;
    } 
    else 
    {
        std::cout << std::endl;
    }
}
