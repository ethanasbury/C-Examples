//Program ID: asteriskPattern.cpp
//Assignment Name: asteriskPattern
//Author: Ethan Asbury
//Class: CSC 100AA
//Date: Feb 26 2011
//Brief Description:
//		A program prints out on the screen a pattern of astrisks.

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	char again = 'y';

	do
	{
	int num;
	char out = '*';
		
		cout << "Welcome To The Asterisk Pattern Program" << endl;
		cout << "Enter A Number In The Rage 1-10 (0 To Exit): "; 
		cin >> num;
		while ( num == 0 )
		{
			cout << "Good Bye" << endl;
			return 0;
		}

		while (( num < 1 ) || ( num > 10))
	{
		cout << "ERROR: Enter A Number In The Range 1-10 " << endl;
		cout << "Enter A Number In The Rage 1-10: "; cin >> num;
	}
	for (int i = 1; i <= num; i++)
    {
		for (int k = 0; k < i; k++)
		{
		cout << "*";
		}
        cout << endl;
	}
	for (int i = num - 1; i >= 1; i--)
	{
		for (int k = 0; k < i; k++)
		{
		cout << "*";
		}
		cout << endl;
	}
		cout << "Would You Like To Try Again (Y/N): ";
		cin >> again;

	}while ((again == 'Y') || (again == 'y'));  
return 0;
}
/* Program Output:

Welcome To The Asterisk Pattern Program
Enter A Number In The Rage 1-10 (0 To Exit): 4
*
**
***
****
***
**
*
Would You Like To Try Again (Y/N): y
Welcome To The Asterisk Pattern Program
Enter A Number In The Rage 1-10 (0 To Exit): 12
ERROR: Enter A Number In The Range 1-10
Enter A Number In The Rage 1-10: 3
*
**
***
**
*
Would You Like To Try Again (Y/N): y
Welcome To The Asterisk Pattern Program
Enter A Number In The Rage 1-10 (0 To Exit): 0
Good Bye
Press any key to continue . . .

*/
