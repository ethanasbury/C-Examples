//Program ID: showMeTheMoney
//Assignment Name: Show Me The Money
//Author: Ethan Asbury
//Class: CSC 100AA
//Date: Feb 26 2011
//Brief Description:
//		A program to calculate how much a person would earn if they were payed at a rate which their salary doubles every
//		day they work for a month.


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	char again = 'y';

	do 
	{
	int days;
	double currentSalary = 0.01,totalSalary = 0.00;
	

	
		cout << "Enter The Number Of Days Worked: "; 
		cin >> days;

		while (( days < 1 ) || (days > 31))
	{
		cout << "ERROR: Enter A Number In The Range 1 - 31 " << endl;
		cout << "How Many Days Did You Work This Month: "; cin >> days;
	}
	
		
		cout << setw(5) << "Days" << setw(12) << "Pay" << endl;
		cout << "--------------------" << endl;

		for (int i = 1; i <= days; i++)
	{
	  cout << "Day " << i << ":\t    " << fixed << setprecision(2) << "$ " << currentSalary << endl;
	  totalSalary += currentSalary;
	  currentSalary *= 2;
	}
	cout << "--------------------" << endl;
	cout << "Total salary: " << "$ " << totalSalary << endl;
	
		cout << "Would You Like To Try Again (Y/N): ";
		cin >> again;
		
	} while ((again == 'Y') || (again == 'y'));
	
	return 0;
}

/* Program Output

Enter The Number Of Days Worked: 7
 Days         Pay
--------------------
Day 1:      $ 0.01
Day 2:      $ 0.02
Day 3:      $ 0.04
Day 4:      $ 0.08
Day 5:      $ 0.16
Day 6:      $ 0.32
Day 7:      $ 0.64
--------------------
Total salary: $ 1.27
Would You Like To Try Again (Y/N): y
Enter The Number Of Days Worked: 45
ERROR: Enter A Number In The Range 1 - 31
How Many Days Did You Work This Month: -2
ERROR: Enter A Number In The Range 1 - 31
How Many Days Did You Work This Month: 3
 Days         Pay
--------------------
Day 1:      $ 0.01
Day 2:      $ 0.02
Day 3:      $ 0.04
--------------------
Total salary: $ 0.07
Would You Like To Try Again (Y/N):

*/
