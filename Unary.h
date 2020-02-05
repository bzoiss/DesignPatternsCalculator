// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef UNARY_H
#define UNARY_H

#include "Command.h"

class Unary : public Command
{
public:
    Unary(Stack<int> & stack);

    Unary(const Unary & u);

    ~Unary();

    void execute();

    virtual int evaluate(int n1) const = 0;
};

#endif
