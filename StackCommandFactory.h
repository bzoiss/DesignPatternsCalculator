// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.


#ifndef STACKCOMMANDFACTORY_H
#define STACKCOMMANDFACTORY_H

#include "CommandFactory.h"
#include "Stack.h"

class StackCommandFactory : public CommandFactory
{
public:
	StackCommandFactory(Stack<int> & s);

	~StackCommandFactory();

	virtual Number * createNumberCommand(int num);

	virtual Addition * createAddCommand();

	virtual Subtraction * createSubCommand();

	virtual Multiplication * createMultCommand();

	virtual Division * createDivCommand();

	virtual Modulus * createModCommand();

private:
	Stack<int> & stack;
};

#endif
