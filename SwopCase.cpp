//swopcase.cpp : Defines the entry point for the console application.
//Inga Melkerte
//c00184799

#include <iostream>
#include <string>
using namespace std;

//check if char is between 97 and 126 , return 0(lower case)
int islower(int somechar)
{
	if (somechar >= 97 && somechar <= 126)
		return 0;
}
//check if char is between 65 and 90, return 0 (they are uppercase letters)
int isupper(int somechar)
{
	if (somechar >= 65 && somechar <= 90)
		return 0;
}
//take away 32 to transfer to uppercase
int toupper(int somechar)
{
	return somechar - 32;
}
//add 32 to get lower case
int tolower(int somechar)
{
	return somechar + 32;
}

int main()
{
	char inchar = 0;
	cout << "Enter some characters\n";
	
	while (inchar != 10)
	{
		char convertC;//charater which is converted
		inchar = getchar();

		if (islower(inchar)== 0)
		{			
			convertC = toupper(inchar);
			cout << convertC;
		}
		else if (isupper(inchar)==0)
		{
			convertC = tolower(inchar);
			cout << convertC;
		}
		//display rest of the chars(even if they are not letters)
		else
		{
			cout << inchar;
		}
	}	
	cout << "\n\n";
	system("pause");
	return 0;
}

