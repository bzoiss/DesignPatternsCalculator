// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef COMMAND_H
#define COMMAND_H

#include "Stack.h"

class Command
{
public:
    Command(Stack<int> & stack, int p);

    Command(const Command & c);

    ~Command();

    virtual void execute() = 0;

    int getPriority();

protected:
    Stack<int> & s;
    int priority;
};

#endif
