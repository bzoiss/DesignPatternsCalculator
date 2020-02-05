// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Division.h"

Division::Division(Stack<int> & stack):
    Binary(stack, 2)
{

}

Division::Division(const Division & d):
    Binary(d)
{

}

Division::~Division()
{

}

int Division::evaluate(int n1, int n2) const
{
	if (n2 == 0)
	{
		throw "divide by zero";
	}
	return n1 / n2;
}
