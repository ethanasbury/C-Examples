//Program Id:  FunctionTest.cpp  Starting File
//Author : P Baker
//Date:  
//Description:
//	In class activity - implementing functions
//	Using the halfIt function from the worksheet
//
//	discuss pass by value and pass by reference
//
//  discuss overloading functions.  must differ in 
//  number or datatype of arguments.  Note that the
//  compiler does not consider return type when 
//  determining which function to call. 



#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double halfIt(double);
int halfIt(int); //overloaded function
void halfItRef(double &);
void getData (double &, double &);

int main()
{

	double value1 = 0;
	double value2 = 0;
	double result = 0;
	int iValue = 0;


	getData(value1,value2);

	//overloaded function
	cout << "Now Try The Overloaded Function" << endl;
	cout << "Result From overloaded function is: " << halfIt(value1) << endl;

	//cout << "Enter value1: ";
	//cin >> value1;
	//cout << "Enter value2: ";
	//cin >> value2;

	result = halfIt(value1);
	cout << "Value1 is " << value1 << " and the result is " << result << endl;

	result = halfIt(value2);
	cout << "Value2 is " << value2 << " and the result is " << result << endl << endl;

	cout << "Ok, now call halfItRef with value1= " << value1 << endl;
    halfItRef(value1);
	cout << "Value1 now = " << value1 <<  endl << endl;

	



}//main

//this function demonstrates pass by value
double halfIt(double value)
{
	return(value * 0.5);

}

// overloaded function - pass by value
int halfIt(int value)
{
	return(value * 0.5);
}

//this function demonstrates pass by reference
void halfItRef(double &rvalue)
{
	rvalue = rvalue * 0.5;
}

void getData (double &value1, double &value2)
{

	cout << "Enter value1: ";
	cin >> value1;
	cout << "Enter value2: ";
	cin >> value2;

	//validation code i want 1 to 50
	while ((value1 < 1) || (value1 > 50))
	{
		cout << "Enter value1 (must be between 1 and 50)";
		cin >> value1;
	}
	while ((value2 < 1) || (value2 > 50))
	{
		cout << "Enter value2 (must be between 1 and 50)";
		cin >> value2;
	}

}

/*Expected Output
Enter value1: 30
Enter value2: 21
Value1 is 30 and the result is 15
Value2 is 21 and the result is 10.5

Ok, now call halfItRef with value1= 30
Value1 now = 15

Now try overloading
iValue is 12 and the result is 6

Press any key to continue . . .
*/
