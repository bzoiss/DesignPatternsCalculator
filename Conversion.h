

#ifndef CONVERSION_H
#define CONVERSION_H

#include <string>

#include "FlyCommandFactory.h"

class Conversion
{
public:
	Conversion(std::string infix, FlyCommandFactory & f, Array<Command *> & p);

	Conversion(const Conversion & c);

	~Conversion();

	bool infixToPostfix();

	void getResult();

private:
	std::string input;
	FlyCommandFactory & factory;
	Array<Command *> & postfix;
};

#endif
