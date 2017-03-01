//\===========================================================================================
//\ File: Shunting-Yard.h
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: Contains the ShuntingYard class declarations.
//\===========================================================================================

#ifndef _SHUNTINGYARD_H_
#define _SHUNTINGYARD_H_

#include <iostream>//To use strings as arguments.

//\===========================================================================================
//\ Author: Morgan James
//\ Class: ShuntingYard
//\ Brief: Allows for the conversion of infix equation notation to postfix.
//\===========================================================================================

class ShuntingYard
{
private:
	bool isNumber(const std::string &a_c_sToken)const;//Returns true if the last character in the passed in token argument is a digit and false if not. 
	bool isOperation(const std::string &a_c_sToken)const;//Returns true if the passed in token matches one of the operations.
	int operationRank(const std::string &a_c_sToken)const;//Returns an int equal to the rank the passed in token operator has over other operators in accordance to BODMAS.
public:
	std::string infixToPostfix(std::string &a_c_sInfix);//Converts an infix notation string and returns a postfix notation version.
};

#endif

	   
