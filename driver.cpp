// Honor pledge:
// 
// I have neither given nor received any help
// on this assignment.

#include "Conversion.h"

#include <iostream>

// COMMENT: Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.
//
// REPLY: I made a Wrapper for the conversion

int main()
{
	std::string input;

	bool keepGoing = true;
	while(keepGoing)
	{
		std::cin >> input;

		if (input == "QUIT")
		{
			keepGoing = false;
		}
		else
		{
			Stack<int> res;
			FlyCommandFactory factory(res);
			Array<Command *> cmd;

			Conversion c(input, factory, cmd);

			c.infixToPostfix();
			c.getResult();

			std::cout << res.top() << std::endl;
		}
	}

	return 0;
}

