//Program ID: Exam.cpp
//Assignment Name: Exam
//Author: Ethan Asbury
//Class: CSC100AA
//Date: Feb 4 2011
//Brief Description:
//		A program to calculate the average of three exam scores into a total final score.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	int test1, test2, test3, totalScore;
	double totalAvg;

	cout << "Please input test score: ";
	cin >> test1 >> test2 >> test3;

	totalScore = test1 + test2 + test3;

	totalAvg = static_cast<double>(totalScore) / 3;

	cout << setprecision(1) << fixed << "Your Total Average Test Score is: " << totalAvg << endl;

	
	return 0;



}

/* Program Output:

Please input test score: 90 91 100
Your Total Average Test Score is: 93.7
Press any key to continue . . .

*/
