// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Multiplication.h"

Multiplication::Multiplication(Stack<int> & stack):
    Binary(stack, 2)
{

}

Multiplication::Multiplication(const Multiplication & m):
    Binary(m)
{

}

Multiplication::~Multiplication()
{

}

int Multiplication::evaluate(int n1, int n2) const
{
    return n1 * n2;
}
