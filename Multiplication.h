// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "Binary.h"

class Multiplication : public Binary
{
public:
    Multiplication(Stack<int> & stack);

    Multiplication(const Multiplication & m);

    ~Multiplication();

    int evaluate(int n1, int n2) const;
};

#endif
