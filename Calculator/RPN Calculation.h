#ifndef _RPNCALCULATION_H_
#define _RPNCALCULATION_H_

#include <iostream>//To use strings as arguments.

class RPNCalculation
{
private:
public:
	double rpnEvaluate(const std::string &sPostfix);//A function that takes in a string as an argument that should be a postfix equation and returns a double that is the answer.
};

#endif