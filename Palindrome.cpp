//Palindrome.cpp : Defines the entry point for the console application.
//Inga Melkerte
//C00184799
//Number Palindrome

#include "stdafx.h"
#include <iostream>

int main()
{
	char inchar = 0;//for input characters	
	int total = 0;
	int reverse = 0;
	int digit;
	int number;
	
	std::cout << "Enter the numbers\n";
	inchar = getchar();//get first character
	if (inchar >= 48 && inchar <= 57)//check is it a number
	{
		while (inchar != 10)//till user presses enter
		{
			total = total * 10;//to get tens and hundreds etc..
			total = total + int(inchar) - 48;//to get number from ASCII (any number - 48)
			inchar = getchar();//get next char
			number = total;//assign total to another variable, because I loose it in another loop
		}
		while (total != 0)//get the reverse of the number
		{
			digit = total % 10;//mod 10 total number to get remainder - the last digit
			reverse = (reverse * 10) + digit;//store reverse; add number and multiply by 10 
			total = total / 10;// divide total nuber by 10 , to get rid of last digit ( the remainder)
		}
		if (number == reverse)//compare the reverse with number itself , if they the same = it is palindrome
		{
			std::cout << "This is a palindrome!\n";
		}
		else
		{
			std::cout << "This is  NOT a palindrome!\n";
		}
	}
	else
	{
		std::cout << "You didn't entered number!";
	}
	system("pause");
	return 0;
}
