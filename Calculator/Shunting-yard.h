#ifndef _SHUNTINGYARD_H_
#define _SHUNTINGYARD_H_

#include <iostream>//To use strings as arguments.

class ShuntingYard
{
private:
	bool isNumber(const std::string &sToken);//Returns true if the last character in the passed in token argument is a digit and false if not. 
	bool isOperation(const std::string &sToken);//Returns true if the passed in token matches one of the operations.
	int operationRank(const std::string &sToken);//Returns an int equal to the rank the passed in token operator has over other operators in accordance to BODMAS.
public:
	std::string infixToPostfix(std::string &sInfix);//Converts an infix notation string and returns a postfix notation version.
};

#endif

	   
