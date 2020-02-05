// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef DIVISION_H
#define DIVISION_H

#include "Binary.h"

class Division : public Binary
{
public:
    Division(Stack<int> & stack);

    Division(const Division & d);

    ~Division();

    int evaluate(int n1, int n2) const;
};

#endif
