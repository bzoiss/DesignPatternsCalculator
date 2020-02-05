

#include <sstream>

#include "Conversion.h"

Conversion::Conversion(std::string infix, FlyCommandFactory & f, Array<Command *> & p):
	input(infix),
	factory(f),
	postfix(p)
{

}

Conversion::Conversion(const Conversion & c):
	input(c.input),
	factory(c.factory),
	postfix(c.postfix)
{

}

Conversion::~Conversion()
{

}

bool Conversion::infixToPostfix()
{
	std::istringstream infix(this->input);
	std::string token;
	Stack<Command *> temp;
	Command * c = nullptr;

	Stack<std::string> tempString;

	while(!infix.eof())
	{
		infix >> token;
		
		// creating commands
		if (token == "*")
		{
			c = factory.createMultCommand();
		}
		else if (token == "/")
		{
			c = factory.createDivCommand();
		}
		else if (token == "%")
		{
			c = factory.createModCommand();
		}
		else if (token == "+")
		{
			c = factory.createAddCommand();
		}
		else if (token == "-")
		{
			c = factory.createSubCommand();
		}
		// check for () and do what it needs
		else if (token == "(")
		{
			tempString.push(token);
		}
		else if (token == ")")
		{
			while(tempString.top() != "(")
			{
				postfix.resize(postfix.size() + 1);
				postfix[postfix.size() - 1] = temp.top();

				temp.pop();
				tempString.pop();
			}
			// pop the open p
			tempString.pop();
		}
		else
		{
			// this is a number, add it to the postfix array
			c = factory.createNumberCommand(std::stoi(token));
		}

		// if the token is not ( or ) then check to priority, 0 = number
		if (token != "(" || token != ")")
		{
			if (c->getPriority() == 0)
			{
				// add to the postfix array
				postfix.resize(postfix.size() + 1);
				postfix[postfix.size() - 1] = c;
			}
			else
			{
				// compare priority
				if (temp.is_empty() || temp.top()->getPriority() > c->getPriority() || tempString.top() == "(")
				{
					temp.push(c);
					tempString.push(token);
				}
				else
				{
					while(!temp.is_empty() && temp.top()->getPriority() <= c->getPriority() && tempString.top() != "(")
					{
						postfix.resize(postfix.size() + 1);
						postfix[postfix.size() - 1] = temp.top();

						temp.pop();
						tempString.pop();
					}
					// then push c onto the stack
					temp.push(c);
					tempString.push(token);
				}
			}
		}
	}
	// expression is over, pop each element left on temp and add to postfix
	while(!temp.is_empty())
	{
		postfix.resize(postfix.size() + 1);
		postfix[postfix.size() - 1] = temp.top();

		temp.pop();
	}
}

void Conversion::getResult()
{
	for (int i = 0; i < postfix.size(); i++)
	{
		postfix[i]->execute();
	}
}
