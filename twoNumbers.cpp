//Program Id: TwoNumbers.cpp
//Author: Ethan Asbury
//Date Written: Jan 27, 2011
//Brief Description:
//		A program used to calculate two different numbers, and 
//		display the sum, difference, product, and quotient.

#include <iostream>
using namespace std;

int main ()
{
	int number1;
	int number2;
	int sum;
	int diff;
	int prod;
	int quot;

	number1 = 25;
	number2 = 75;
	sum = number1 + number2;
	diff = number2 - number1;
	prod = number1 * number2;
	quot = number2 / number1;

	cout << "The Sum of 25+75 is: " << sum <<endl;
	cout << "The Difference of 75-25 is: " << diff <<endl;
	cout << "The Product of 25x75 is: " << prod <<endl;
	cout << "The Quotient of 75/25 is: " << quot <<endl;


	return 0;

}
/* Expected Output

The Sum of 25+75 is: 100
The Difference of 75-25 is: 50
The Product of 25x75 is: 1875
The Quotient of 75/25 is: 3
Press any key to continue . . .

*/

