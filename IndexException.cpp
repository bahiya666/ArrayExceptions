#include "IndexException.h"
#include <sstream>
#include <string>
#include <iostream>

IndexException::IndexException(int index, int size) : m_index(index), m_size(size) 
{}

std::string IndexException::getError() 
{
    std::stringstream errorStream;
    
    if (m_index < 0) 
    {
        // If the index is negative
        errorStream << "Index " << m_index << " is negative.";
    }
     
    else 
    {
        // If the index is out of bounds
        errorStream << "Index " << m_index << " is out of bounds for list of size " << m_size << ".";
    }

    return errorStream.str();
}