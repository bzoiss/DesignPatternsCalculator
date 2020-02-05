// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef BINARY_H
#define BINARY_H

#include "Command.h"

class Binary : public Command
{
public:
    Binary(Stack<int> & stack, int p);

    Binary(const Binary & b);

    ~Binary();

    void execute();

    virtual int evaluate(int n1, int n2) const = 0;
};

#endif
