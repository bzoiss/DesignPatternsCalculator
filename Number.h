// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#ifndef NUMBER_H
#define NUMBER_H

#include "Command.h"

class Number : public Command
{
public:
    Number(Stack<int> & stack, int n);

    Number(const Number & n);

    ~Number();

    void execute();

private:
    int num;
};

#endif
