//Program ID: markUp.cpp
//Assignment Name: Mark Up
//Author: Ethan Asbury
//Class: CSC100AA
//Date: March 22 2011
//Brief Description:
//		A Progrma that recieves a price and a markup(in percentage) and calculates the total retail cost.
//


#include <iostream>
#include <iomanip>
using namespace std;

void getData (double &, double &);
double retail(double, double);

int main()
{
	char again = 'y';
	do
	{

	double wholeSale = 0, markUp = 0, retailPrice = 0;

	getData(wholeSale, markUp);
	retailPrice = retail(wholeSale, markUp); 
			
	cout << "Your Total Retail Price Is: " << fixed << setprecision(2) << retailPrice << endl;
	cout << endl;
	cout << "Would You Like To Try Again? (y or n): ";
	cin >> again;
	cout << endl;
	
	} while ((again == 'Y') || (again == 'y'));

	return 0;
}

double retail(double first, double second)
{	
	return first + first * (second/100);
}
void getData (double &wholeSale, double &markUp)
{
	cout << "Please Enter The Wholesale Price: ";
	cin >> wholeSale;

	while (wholeSale < 0.00)
	{
		cout << "Error - Please Enter The Wholesale Price (must be a positive number): ";
		cin >> wholeSale;
	}
	cout << "Please Enter The Markup Percentage: ";
	cin >> markUp;

	while (markUp < 0.00)
	{
		cout << "Error - Please Enter The Markup Percentage (must be a positive number): ";
		cin >> markUp;
	}
	
	
}
/* Program Output

Please Enter The Wholesale Price: 5
Please Enter The Markup Percentage: 100
Your Total Retail Price Is: 10.00

Would You Like To Try Again? (y or n): y

Please Enter The Wholesale Price: 20
Please Enter The Markup Percentage: 10
Your Total Retail Price Is: 22.00

Would You Like To Try Again? (y or n): y

Please Enter The Wholesale Price: -50
Error - Please Enter The Wholesale Price (must be a positive number): 50
Please Enter The Markup Percentage: 5
Your Total Retail Price Is: 52.50

Would You Like To Try Again? (y or n): n

Press any key to continue . . .

*/
