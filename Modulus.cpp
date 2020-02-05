// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Modulus.h"

Modulus::Modulus(Stack<int> & stack):
    Binary(stack, 2)
{

}

Modulus::Modulus(const Modulus & m):
    Binary(m)
{

}

Modulus::~Modulus()
{

}

int Modulus::evaluate(int n1, int n2) const
{
    return n1 % n2;
}
