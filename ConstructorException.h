#ifndef CONSTRUCTOR_EXCEPTION_H
#define CONSTRUCTOR_EXCEPTION_H

#include "ListException.h"
#include <string>
#include <sstream>
#include <iostream>

class ConstructorException : public ListException 
{
    public:
        std::string getError();
};

#endif // CONSTRUCTOR_EXCEPTION_H
