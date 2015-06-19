//Program ID: factorial.cpp
//Assignment Name: factorial
//Author: Ethan Asbury
//Class: CSC 100AA
//Date: Feb 26 2011
//Brief Description:
//		A program to calculate the all factorials of a number provided by the user.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	char again = 'y';

	do{
		int num = 0, total = 1;
		
		cout << "Please Enter A Number 1-10 (0 to exit): ";
		cin >> num;
		while ( num == 0 )
		{
			cout << "Good Bye" << endl;
			return 0;
		}
	
		while (( num < 0 ) || ( num > 10))
		{
			cout << "***ERROR: Enter A Number 1-10*** " << endl;
			cout << "Please Enter A Number 1-10: "; cin >> num;
		}
		

		for ( int i = 1; i <= num; i++ )
		{
			total *= i;
		}

		cout << num << "! = " << total << endl;


		cout << "Would You Like To Try Again (Y/N): ";
		cin >> again;

	} while ((again == 'Y') || (again == 'y'));
	return 0;
}

/*Program Output:

Please Enter A Number 1-10 (0 to exit): 22
***ERROR: Enter A Number 1-10***
Please Enter A Number 1-10: 7
7! = 5040
Would You Like To Try Again (Y/N): y
Please Enter A Number 1-10 (0 to exit): 0
Good Bye
Press any key to continue . . .

*/
