// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.


#ifndef COMMANDFACTORY_H
#define COMMANDFACTORY_H

#include "Number.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Modulus.h"

class CommandFactory
{
public:
    CommandFactory();

    virtual ~CommandFactory();

    virtual Number * createNumberCommand(int num) = 0;

    virtual Addition * createAddCommand() = 0;

    virtual Subtraction * createSubCommand() = 0;

    virtual Multiplication * createMultCommand() = 0;

    virtual Division * createDivCommand() = 0;

    virtual Modulus * createModCommand() = 0;

private:
    CommandFactory(const CommandFactory & cf);
    const CommandFactory & operator = (const CommandFactory & cf);
};

#endif
