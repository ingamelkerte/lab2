//LeapYear.cpp : Defines the entry point for the console application.
//Inga Melkerte
//C00184799
//Leap year

#include "stdafx.h"
#include <iostream>

int main()
{
	char inchar = 0;	
	inchar = getchar();//get first character
	int year = 0;	
	if (inchar > '0' && inchar < '9')//check if it is number
	{
		while (inchar != 10)//till the user press enter (ASCII= 10)
		{
			year = year * 10;//get tens and hundreds etc
			year = year + (int)inchar - 48;//add each char to previous, get right decimal value from ASCII table
			inchar = getchar();
		}
		//leap year 
		if (((year % 4 == 0) || (year % 400 == 0)) && (year % 100 != 0))
		{
			std::cout << "This is leap year!\n";
		}
		else
		{
			std::cout << "This is NOT a leap year!\n";
		}
	}
	else
	{
		std::cout << "Error!Enter a number!\n";
	}
	
	system("pause");
	return 0;
}
