//\===========================================================================================
//\ File: CalculatorLib.cpp
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: Contains the function information for the structure contained in CalculatorLib.h.
//\===========================================================================================

#include "CalculatorLib.h"//The header file that includes the structure.
#include <iostream>//To use the std library for strings.
#include <sstream>//To separate one large string into separate strings.
#include <stack>//To use a stack as a buffer for the tokens that need to be rearranged.
#include <vector>//To use vectors for storing separate strings.

bool isNumber(const std::string &a_c_sToken)//Returns true if the last character in the passed in token argument is a digit and false if not. 
{
	//Current operands: 1, 2, 3, 4, 5, 6, 7, 8, 9, 0.
	bool bIsNumber = false;//A boolean return value for whether or not the token's last character is a digit.
	for (const auto &i : a_c_sToken)//Iterates through each character of the token.
	{
		if (!isdigit(i))//Check if token character is not a decimal digit.
			bIsNumber = false;//Makes the return value false if the token character is not a digit.
		else//If the character is a digit.
			bIsNumber = true;//Makes the return value true if the token character is a digit.
	}
	return bIsNumber;//Returns true if the token's last character is a digit and false if it isn't.
}

bool isOperation(const std::string &a_c_sToken)//Returns true if the passed in token matches on of the operations.
{
	return (
		a_c_sToken == "+" 
		|| a_c_sToken == "-" 
		|| a_c_sToken == "*" 
		|| a_c_sToken == "/" 
		|| a_c_sToken == "^");//Checks the passed in token to see if it matches one of the operations(+,-,*,/,^) and if so returns true otherwise returns false.
}

int operationRank(const std::string &a_c_sToken)//Returns an int equal to the rank the passed in token operator has over other operators in accordance to BODMAS.
{
	//Current operation ranks: 3(^), 2(*,/), 1(+,-).
	if (a_c_sToken == "^")//Checks to see if the token is equal to ^.
		return 3;//Returns 3 if the token is equal to ^.

	if (
		a_c_sToken == "*" 
		|| a_c_sToken == "/")//Checks to see if the token is equal to * or /.
		return 2;//Returns 2 if the token is equal to * or /.

	if (
		a_c_sToken == "+" 
		|| a_c_sToken == "-")//Checks to see if the token is equal to + or -.
		return 1;//Returns 1 if the token is equal to + or -.

	else//The token isn't equal to any of the operations.
		return 0;//Returns 0 if  the token isn't an operation.
}

std::string infixToPostfix(std::string &a_sInfix) //Converts an infix notation string and returns a postfix notation version.
{
	std::istringstream iss(a_sInfix);//Creates a buffer from the a_sInfix string.
	std::vector<std::string> va_sTokens;//Creates a Vector made from strings to store and rearrange the tokens.
	while (iss)//Goes through the buffer of characters to push them to the output queue.
	{
		std::string sTemp;//Creates a string to hold the temporary value of each token.
		iss >> sTemp;//Sets sTemp as the next character or combined characters whilst skipping whitespace e.g. 43 or 9 or +.
		va_sTokens.push_back(sTemp);//Pushes the string of characters or combined characters to the output queue(vector).
	}
	std::vector<std::string> vsPostfix;//The vector of strings that will be in the correct order according to postfix notation.
	std::stack<std::string> ssStack;//The stack to push and pop tokens from to act like a buffer in the rearrangement process.
	for (const auto &i : va_sTokens)//Iterates through the vector made of strings containing the tokens making i the address of each element in va_sTokens.
	{
		if (isNumber(i))//Returns true if the last character in the token string is a digit and false if not. 
			vsPostfix.push_back(i);//If the last character of the token string is a digit then put the string into the postfix vector of strings.
		if (i == "(")//If the token string is a "(" return true.
			ssStack.push(i);//Pushes the "(" onto the stack of strings.
		if (i == ")")//If the token string is a ")" return true.
		{
			while (!ssStack.empty() && ssStack.top() != "(")//Whilst the stack is not empty and the top of the stack isn't a "(".
			{
				vsPostfix.push_back(ssStack.top());//Creates a string in the vsPostfix vector which is a copy of the top of the stack.
				ssStack.pop();//Removes the top of the stack.
			}
			ssStack.pop();//Removes the "(" that is left at the top of the stack.
		}
		if (isOperation(i) == true)//If the token string is an operation return true.
		{
			while (!ssStack.empty() && operationRank(ssStack.top()) >= operationRank(i))//Whilst the stack is not empty and the operation rank of the top of the stack is more than or equal to the operation rank of the token string.
			{
				vsPostfix.push_back(ssStack.top());//Creates a string in the vsPostfix vector which is a copy of the top of the stack.
				ssStack.pop();//Removes the top of the stack.
			}
			ssStack.push(i);//Creates a copy of the token string and pushes the token onto the stack.
		}
	}
	while (!ssStack.empty())//Whilst the stack is not empty.
	{
		vsPostfix.push_back(ssStack.top());//Creates a copy of the top of the stack and puts it in the end of vsPostfix.
		ssStack.pop();//Removes the top of the stack.
	}
	for (unsigned int i = 0; i <= vsPostfix.size() - 1; i += 2)//Iterates through the vector of strings vsPostfix up until one before the last string.
	{
		vsPostfix.insert(vsPostfix.begin() + i, " ");//Inserts a string filled with one character " " after the specified element in the array.
	}
	std::string sPostfix;//Creates a string called sPostfix to hold the final postfix equation.
	for (const auto &i : vsPostfix)//A range-based for statement that goes through vsPostfix container and sets i to the address of each element.
		sPostfix += i;//Loop statement that adds the characters in each string of vsPostfix to the end of the string sPostfix.
	return sPostfix;//Returns the final postfix notation of the equation.
}

long double rpnEvaluate(const std::string &a_c_sPostfix)//A function that takes in a string as an argument that should be a postfix equation and returns a double that is the answer.
{
	//Current operations: +, -, *, /, ^.
	std::istringstream iss(a_c_sPostfix);//Creates a buffer from the a_c_sPostfix string.
	std::stack<long double> sdStack;//Creates a stack that ends up containing one element which is the answer.
	std::string sToken;//Creates a string that is used to temporarily hold the value of each set of characters from the a_c_sPostfix string.
	while (iss >> sToken)//Iterates through each part of the a_c_sPostfix string making each set of characters equal to sToken until it reaches the end.
	{
		long double dToken;//A temporary value to check whether the token can be passed as a double or not.
		if (std::istringstream(sToken) >> dToken)//If the token can be passed as a double return true.
			sdStack.push(dToken);//Pushes the token which is a double to the top of the stack.
		else//If the token can't be passed as double.
		{
			long double dNumberTwo = sdStack.top();//Creates a double variable that is equal to the top of the stack which defaults to 0.
			sdStack.pop();//Removes the top of the stack. 
			long double dNumberOne = sdStack.top();//Creates a double variable that is equal to the top of the stack which defaults to 0.
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

std::string calculate(std::string &a_sInfix)//Uses all the above functions to convert the infix notation to postfix and then evaluate it.
{
	std::ostringstream strs;
	strs << rpnEvaluate(infixToPostfix(a_sInfix));//Sets the double to convert equal to the answer of the equation.
	std::string str = strs.str();//Creates a string equal to the double.
	return std::string(str);//Returns the answer as a string.
}