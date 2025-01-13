#include "SizeException.h"
#include <sstream>

SizeException::SizeException(int size) : m_size(size) 
{}

std::string SizeException::getError() \
{
    std::stringstream errorStream;

    if (m_size == 0) 
    {
        errorStream << "List is empty.";
    } 
    else 
    {
        errorStream << "List is full with " << m_size << " elements.";
    }

    return errorStream.str();
}
