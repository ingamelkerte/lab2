//Inga Melkerte	
//C001884799
//Task3.cpp : Defines the entry point for the console application.
//Get name of the month by entering number using switch statment

#include "stdafx.h"
#include <iostream>

int main()
{
	char inchar = 0;//for input characters	
	int noOfMonth = 0;//for months number
	std::cout << "Enter the number of the month\n";
	inchar = getchar();//get first character
	
	while (inchar != 10)//till user presses enter
	{
		noOfMonth = noOfMonth * 10;//to get tens and hundreds etc..
		noOfMonth = noOfMonth + int(inchar) - 48;//to get number from ASCII (any number - 48)
		inchar = getchar();
	}		
		switch (noOfMonth)
		{
		case 1:
			std::cout << "January\n";
			break;
		case 2:
			std::cout << "February\n";
			break;
		case 3:
			std::cout << "March\n";
			break;
		case 4:
			std::cout << "April\n";
			break;
		case 5:
			std::cout << "May\n";
			break;
		case 6:
			std::cout << "June\n";
			break;
		case 7:
			std::cout << "July\n";
			break;
		case 8:
			std::cout << "August\n";
			break;
		case 9:
			std::cout << "September\n";
			break;
		case 10:
			std::cout << "October\n";
			break;
		case 11:
			std::cout << "November\n";
			break;
		case 12:
			std::cout << "December\n";
			break;
		default:
			std::cout << "Please enter valid month number between 1 and 12\n";			
		}
	std::cout << "\n\n";
	system("pause");
	return 0;
}


