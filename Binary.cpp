// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Binary.h"

Binary::Binary(Stack<int> & stack, int p):
	Command(stack, p)
{

}

Binary::Binary(const Binary & b):
    Command(b)
{

}

Binary::~Binary()
{

}

void Binary::execute()
{
    int n2 = s.top();
    s.pop();
    int n1 = s.top();
    s.pop();

    int result = this->evaluate(n1, n2);
    s.push(result);
}
