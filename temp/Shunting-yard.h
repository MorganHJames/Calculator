//\===========================================================================================
//\ File: CalculationLib.h
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: Contains the CalculatorLib declarations.
//\===========================================================================================

#ifndef _SHUNTINGYARD_H_
#define _SHUNTINGYARD_H_

#include <iostream>//To use strings as arguments.

//\===========================================================================================
//\ Author: Morgan James
//\ Brief: Allows for the conversion of infix equation notation to postfix and then the calculation of the postfix.
//\===========================================================================================

bool isNumber(const std::string &a_c_sToken);//Returns true if the last character in the passed in token argument is a digit and false if not. 
bool isOperation(const std::string &a_c_sToken);//Returns true if the passed in token matches one of the operations.
int operationRank(const std::string &a_c_sToken);//Returns an int equal to the rank the passed in token operator has over other operators in accordance to BODMAS.
std::string infixToPostfix(std::string &a_c_sInfix);//Converts an infix notation string and returns a postfix notation version.
double rpnEvaluate(const std::string &a_c_sPostfix);//A function that takes in a string as an argument that should be a postfix equation and returns a double that is the answer.

#endif

	   
