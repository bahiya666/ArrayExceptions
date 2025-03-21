#ifndef INDEXEXCEPTION_H
#define INDEXEXCEPTION_H

#include "ListException.h"
#include <string>
#include <sstream>
#include <iostream>

class IndexException : public ListException
{
    private:
        int m_index;
        int m_size;

    public:
        IndexException(int index, int size);
        std::string getError();
};

#endif // INDEXEXCEPTION_H
