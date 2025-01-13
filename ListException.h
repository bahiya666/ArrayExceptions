#ifndef LISTEXCEPTION_H
#define LISTEXCEPTION_H

#include <string>
#include <sstream>
#include <iostream>

class ListException 
{
    public:
        virtual ~ListException() {}  // Ensure there's a virtual destructor
        virtual std::string getError();
};

#endif