//\===========================================================================================
//\ File: RPN Calculation.cpp
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: Contains the function information for the class contained in RPN Calculation.h.
//\===========================================================================================

#include "RPN Calculation.h"//The header file that includes the class structure.
#include <iostream>//To use the std library for strings.
#include <sstream>//To separate one large string into separate strings.
#include <stack>//To use a stack as a buffer for the tokens that need to be rearranged.

double RPNCalculation::rpnEvaluate(const std::string &a_sPostfix)//A function that takes in a string as an argument that should be a postfix equation and returns a double that is the answer.
{
	//Current operations: +, -, *, /, ^.
	std::istringstream iss(a_sPostfix);//Creates a buffer from the a_sPostfix string.
	std::stack<double> sdStack;//Creates a stack that ends up containing one element which is the answer.
	std::string sToken;//Creates a string that is used to temporarily hold the value of each set of characters from the a_sPostfix string.
	while (iss >> sToken)//Iterates through each part of the a_sPostfix string making each set of characters equal to sToken until it reaches the end.
	{
		double dToken;//A temporary value to check whether the token can be passed as a double or not.
		if (std::istringstream(sToken) >> dToken)//If the token can be passed as a double return true.
			sdStack.push(dToken);//Pushes the token which is a double to the top of the stack.
		else//If the token can't be passed as double.
		{
			double dNumberTwo = sdStack.top();//Creates a double variable that is equal to the top of the stack which defaults to 0.
			sdStack.pop();//Removes the top of the stack. 
			double dNumberOne = sdStack.top();//Creates a double variable that is equal to the top of the stack which defaults to 0.
			sdStack.pop();//Removes the top of the stack.
			if (sToken == "*")//Checks to see if the token is exactly *.
				sdStack.push(dNumberOne * dNumberTwo);//Pushes the answer of dNumberTwo * dNumberTwo onto the sdStack.
			else if (sToken == "/")//Checks to see if the token is exactly /.
				sdStack.push(dNumberOne / dNumberTwo);//Pushes the answer of dNumberTwo / dNumberTwo onto the sdStack.
			else if (sToken == "-")//Checks to see if the token is exactly -.
				sdStack.push(dNumberOne - dNumberTwo);//Pushes the answer of dNumberTwo - dNumberTwo onto the sdStack.
			else if (sToken == "+")//Checks to see if the token is exactly +.
				sdStack.push(dNumberOne + dNumberTwo);//Pushes the answer of dNumberTwo + dNumberTwo onto the sdStack.
			else if (sToken == "^")//Checks to see if the token is exactly ^.
				sdStack.push(std::pow(dNumberOne, dNumberTwo));//Pushes the answer of dNumberTwo ^ dNumberTwo onto the sdStack.
			else //If the token is not a number and is not an operator.
				std::exit(1);//Close the program just in case an invalid string is passed through.
		}
	}
	return sdStack.top();//Return the final answer which is the only double in the stack left.
}