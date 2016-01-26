//Task3b.cpp : Defines the entry point for the console application.
//Inga Melkerte
//c00184799
//Get name of the month by entering number using if statment

#include "stdafx.h"
#include <iostream>

int main()
{
	char inchar = 0;//for input characters	
	int monthNum = 0;//for months number
	std::cout << "Enter the number of the month\n";
	inchar = getchar();//get first character

	while (inchar != 10)//till user presses enter
	{
		monthNum = monthNum * 10;//to get tens and hundreds etc..
		monthNum = monthNum + int(inchar) - 48;//to get number from ASCII (any number - 48)
		inchar = getchar();
	}
		
	if (monthNum == 1)
	{
		std::cout << "January\n";
	}
	else if (monthNum == 2)
	{
		std::cout << "February\n";
	}
	else if (monthNum == 3)
	{
			std::cout << "March\n";
	}
	else if (monthNum == 4)
	{
		std::cout << "April\n";
	}
	else if (monthNum == 5)
	{
		std::cout << "May\n";
	}
	else if (monthNum == 6)
	{
		std::cout << "June\n";
	}
	else if (monthNum == 7)
	{
		std::cout << "July\n";
	}
	else if (monthNum == 8)
	{
		std::cout << "August\n";
	}
	else if (monthNum == 9)
	{
		std::cout << "September\n";
	}
	else if (monthNum == 10)
	{
		std::cout << "October\n";
	}
	else if (monthNum == 11)
	{
		std::cout << "November\n";
	}
	else if (monthNum == 12)
	{
		std::cout << "December\n";
	}
	else
	{
		std::cout << "Wrong number of the month\n";
	}		
	std::cout << "\n\n";
	system("pause");
	return 0;
}

