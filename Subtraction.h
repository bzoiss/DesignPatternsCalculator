// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef SUBTRACTION_H
#define SUBTRACTION_H

#include "Binary.h"

class Subtraction : public Binary
{
public:
    Subtraction(Stack<int> & stack);

    Subtraction(const Subtraction & s);

    ~Subtraction();

    int evaluate(int n1, int n2) const;
};

#endif
