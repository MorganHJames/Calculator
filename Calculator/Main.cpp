//\===========================================================================================
//\ File: Calculator/main.cpp
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: A recreation of a calculator using c++, with Postfix notation.
//\===========================================================================================

#include <iostream>//To print to the console.
#include "RPN Calculation.h"//The actual calculation from RPN to the integer.
#include "Shunting-yard.h"//Contains the class needed to convert from infix equation notation to postfix.

int main() 
{
	//add more functionality.
	//add lots of memory functions and keep the values in a separate file
	//figure out an input method and saving method maybe each function has a function in a class or something.
	{
		std::string sInfixEquation = "6 + 9 / 3 - 6 + 6 * 3"; //Input String the requires spaces between  each component.
		//Creates an object Convert of class ShuntingYard(the infix equation to postfix equation notation class).
		ShuntingYard Convert;
		RPNCalculation Calculate;//Creates an object of class RPNCalculation(calculates postfix notation equations).
		//Prints "Final answer " to the console along with the final answer to the RPN equation.
		std::cout << "Final answer: " << Calculate.rpnEvaluate(Convert.infixToPostfix(sInfixEquation)) << std::endl;
	}
	system ("pause");
	return 0;
}