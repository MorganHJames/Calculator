//\===========================================================================================
//\ File: MemoryFunctions.cpp
//\ Author: Morgan James
//\ Date Created: 20/02/2017
//\ Brief: Contains the function information for the structure contained in MemoryFunctions.h.
//\===========================================================================================

#include "MemoryFunctions.h"//The header file that includes the structure.
#include <fstream>
#include <string>

std::string getMem1()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory1.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem1(std::string sInput)
{
	std::string strReplace = getMem1();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory1.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

	strTemp += "\n";
	fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}

std::string getMem2()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory2.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem2(std::string sInput)
{
	std::string strReplace = getMem2();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory2.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}

std::string getMem3()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory3.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem3(std::string sInput)
{
	std::string strReplace = getMem3();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory3.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}
std::string getMem4()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory4.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem4(std::string sInput)
{
	std::string strReplace = getMem4();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory4.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}
std::string getMem5()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory5.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem5(std::string sInput)
{
	std::string strReplace = getMem5();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory5.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}
std::string getMem6()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory6.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem6(std::string sInput)
{
	std::string strReplace = getMem6();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory6.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}
std::string getMem7()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory7.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem7(std::string sInput)
{
	std::string strReplace = getMem7();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory7.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}
std::string getMem8()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory8.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem8(std::string sInput)
{
	std::string strReplace = getMem8();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory8.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}
std::string getMem9()
{
	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory9.txt";
	//Creates a input fstream member.
	std::ifstream Memory;
	//Opens the dlScores file under the previousScore member.
	Memory.open(cMemoryPath);
	//Checks if the previous line failed, this will only run if the file didnt open correctly / if the file doesn't exist.
	if (!Memory)
	{//Opens/Creates the File.
		Memory.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string sMem;
	std::getline(Memory, sMem);
	//Closes the file.
	Memory.close();
	return (sMem);
}

int setMem9(std::string sInput)
{
	std::string strReplace = getMem9();

	std::string strNew = sInput;

	//Path to the Highscore folder.
	char* cMemoryPath = "./Memory/Memory9.txt";

	std::ifstream filein(cMemoryPath); //File to read from

	if (!filein)
	{//Opens/Creates the File.
		filein.open(cMemoryPath, std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::ofstream fileout("./Memory/fileout.txt"); //Temporary file

	if (!fileout)
	{//Opens/Creates the File.
		fileout.open("./Memory/fileout.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
	}

	std::string strTemp;

	while (filein >> strTemp)
	{
		if (strTemp == strReplace)
		{
			strTemp = strNew;
		}

		strTemp += "\n";
		fileout << strTemp;
	}

	filein.close();
	fileout.close();

	remove(cMemoryPath);

	rename("./Memory/fileout.txt", cMemoryPath);

	return 0;
}