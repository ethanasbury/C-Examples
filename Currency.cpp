//Program ID: Currency
//Assignment Name: Currency
//Author: Ethan Asbury
//Class: CSC100AA
//Date: Feb 4 2011
//Brief Description:
//		

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double dollar, yen, euro, EURO, YEN;

	EURO = .7175;
	YEN = 90.55;

	cout << "Please enter the Dollar amount: ";
	cin >> dollar;

	yen = dollar * YEN;
	euro = dollar * EURO;

	cout << setprecision(2) << fixed << "You have " << yen << " yen ";
	cout << setprecision(2) << fixed << " or, " << euro << " euro's" <<endl;

	return 0;



}

/* Program Output:

Please enter the Dollar amount: 300
You have 27165.00 yen  or, 215.25 euro's
Press any key to continue . . .

*/
