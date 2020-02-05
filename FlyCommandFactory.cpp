// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.


#include "FlyCommandFactory.h"

FlyCommandFactory::FlyCommandFactory(Stack<int> & s):
	stack(s),
	add(new Addition(s)),
	sub(new Subtraction(s)),
	mult(new Multiplication(s)),
	div(new Division(s)),
	mod(new Modulus(s))
{

}

FlyCommandFactory::~FlyCommandFactory()
{
	delete add;
	delete sub;
	delete mult;
	delete div;
	delete mod;
}

Number * FlyCommandFactory::createNumberCommand(int num)
{
	return new Number(stack, num);
}

Addition * FlyCommandFactory::createAddCommand()
{
	return this->add;
}

Subtraction * FlyCommandFactory::createSubCommand()
{
	return this->sub;
}

Multiplication * FlyCommandFactory::createMultCommand()
{
	return this->mult;
}

Division * FlyCommandFactory::createDivCommand()
{
	return this->div;
}

Modulus * FlyCommandFactory::createModCommand()
{
	return this->mod;
}
