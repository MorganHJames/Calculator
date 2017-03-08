//\===========================================================================================
//\ File: RPNCalculation.h
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: Contains the RPNCalculation class declarations.
//\===========================================================================================

#ifndef _RPNCALCULATION_H_
#define _RPNCALCULATION_H_

#include <iostream>//To use strings as arguments.

//\===========================================================================================
//\ Author: Morgan James
//\ Class: RPNCalculation
//\ Brief: Allows for the evaluation of postfix notation equations and outputs the answer.
//\===========================================================================================

class RPNCalculation
{
private:
public:
	double rpnEvaluate(const std::string &a_c_sPostfix);//A function that takes in a string as an argument that should be a postfix equation and returns a double that is the answer.
};

#endif