#include <iostream>
using namespace std;

//function prototype
int findMaximum( int, int );
int multiply(int);
void displayData(int, int);

void main()
{
	int maxNum = 0;
	int firstNumber;
	int secondNumber;

	
	cout << "First Integer Number: ";
	cin >> firstNumber;

	cout << "Second Integer Number: ";
	cin >> secondNumber;

	/*if (firstNumber > secondNumber)
	{
		maxNum = firstNumber;
	}else {
		maxNum = secondNumber;
	}*/
	
	//invoking, calling the function here
	maxNum = findMaximum( firstNumber, secondNumber );
	cout << "The maximum number = " <<  maxNum << endl <<endl;
	cout << "The Result is: " << multiply(secondNumber) << endl;
	displayData(firstNumber, secondNumber);
}
//function definitions
int findMaximum(int first, int second)
{
	int maxNum;
	if( first > second )
	{
		maxNum = first;
	}
	else
	{
		maxNum = second;
	}
	return maxNum;
}


int multiply(int value)
{
	int result = value * 2;
	return result;
	//return(value * 2);
}

 void displayData(int a, int b)
 {
	 cout << "The Value Of The First Number Is: " << a << endl;
	 cout << "The Value Of The Second Number Is: " << b << endl;
 }
