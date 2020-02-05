// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Addition.h"

Addition::Addition(Stack<int> & stack):
    	Binary(stack, 1)
{

}

Addition::Addition(const Addition & a):
    Binary(a)
{

}

Addition::~Addition()
{

}

int Addition::evaluate(int n1, int n2) const
{
    return n1 + n2;
}
