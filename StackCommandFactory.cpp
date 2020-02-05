// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.


#include "StackCommandFactory.h"

StackCommandFactory::StackCommandFactory(Stack<int> & s):
	stack(s)
{

}

StackCommandFactory::~StackCommandFactory()
{

}

Number * StackCommandFactory::createNumberCommand(int num)
{
	return new Number(stack, num);
}

Addition * StackCommandFactory::createAddCommand()
{
	return new Addition(stack);
}

Subtraction * StackCommandFactory::createSubCommand()
{
	return new Subtraction(stack);
}

Multiplication * StackCommandFactory::createMultCommand()
{
	return new Multiplication(stack);
}

Division * StackCommandFactory::createDivCommand()
{
	return new Division(stack);
}

Modulus * StackCommandFactory::createModCommand()
{
	return new Modulus(stack);
}
