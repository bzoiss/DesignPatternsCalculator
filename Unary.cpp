// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Unary.h"

Unary::Unary(Stack<int> & stack):
    Command(stack, 3)
{

}

Unary::Unary(const Unary & u):
    Command(u)
{

}

Unary::~Unary()
{

}

void Unary::execute()
{
    // just a filler for later
}
