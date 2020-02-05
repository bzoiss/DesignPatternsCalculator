// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.


#ifndef FLYCOMMANDFACTORY_H
#define FLYCOMMANDFACTORY_H

#include "CommandFactory.h"

class FlyCommandFactory : public CommandFactory
{
public:
	FlyCommandFactory(Stack<int> & s);

	~FlyCommandFactory();

	virtual Number * createNumberCommand(int num);

	virtual Addition * createAddCommand();

	virtual Subtraction * createSubCommand();

	virtual Multiplication * createMultCommand();

	virtual Division * createDivCommand();

	virtual Modulus * createModCommand();

private:
	Stack<int> & stack;

	Addition * add;
	Subtraction * sub;
	Multiplication * mult;
	Division * div;
	Modulus * mod;
};

#endif
