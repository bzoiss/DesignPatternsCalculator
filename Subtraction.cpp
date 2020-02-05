// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Subtraction.h"

Subtraction::Subtraction(Stack<int> & stack):
    Binary(stack, 1)
{

}

Subtraction::Subtraction(const Subtraction & s):
    Binary(s)
{

}

Subtraction::~Subtraction()
{

}

int Subtraction::evaluate(int n1, int n2) const
{
    return n1 - n2;
}
