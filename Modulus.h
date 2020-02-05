// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef MODULUS_H
#define MODULUS_H

#include "Binary.h"

class Modulus : public Binary
{
public:
    Modulus(Stack<int> & stack);

    Modulus(const Modulus & m);

    ~Modulus();

    int evaluate(int n1, int n2) const;
};

#endif
