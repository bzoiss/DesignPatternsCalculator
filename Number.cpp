// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Number.h"

Number::Number(Stack<int> & stack, int n):
	Command(stack, 0),
	num(n)
{

}

Number::Number(const Number & n):
    Command(n)
{

}

Number::~Number()
{

}

void Number::execute()
{
    s.push(num);
}
