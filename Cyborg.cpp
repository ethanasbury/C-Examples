//Program Id: Cyborg.cpp
//Author: Ethan Asbury
//Class: CSC100AA
//Date Written: Jan 27, 2011
//Brief Description:
//		A program to determine how many bytes are used for in the "Cyborg" computer
//		char, int, float, and double.

#include <iostream>
using namespace std;

int main ()
{
	cout << "The Size of char is: " << sizeof (char);
	cout << " bytes." << endl;
	cout << "The Size of int is: " << sizeof (int);
	cout << " bytes." << endl;
	cout << "The Size of float is: " << sizeof (float);
	cout << " bytes." << endl;
	cout << "The Size of double is: " << sizeof (double);
	cout << " bytes." << endl;
	
	
	return 0;

}

/*Expected Output

The Size of char is: 1 bytes.
The Size of int is: 4 bytes.
The Size of float is: 4 bytes.
The Size of double is: 8 bytes.
Press any key to continue . . .

*/
