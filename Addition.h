// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef ADDITION_H
#define ADDITION_H

#include "Binary.h"

class Addition : public Binary
{
public:
    Addition(Stack<int> & stack);

    Addition(const Addition & a);

    ~Addition();

    int evaluate(int n1, int n2) const;
};

#endif
