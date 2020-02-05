// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Command.h"

Command::Command(Stack<int> & stack, int p):
    	s(stack),
	priority(p)
{

}

Command::Command(const Command & c):
    	s(c.s),
	priority(c.priority)
{

}

Command::~Command()
{

}

int Command::getPriority()
{
	return this->priority;
}
