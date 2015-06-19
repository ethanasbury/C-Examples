//Program ID: starSearch.cpp
//Assignment Name: starSearch
//Author: Ethan Asbury
//Class: CSC 100AA
//Date: March 23 2011
//Brief Description:
//	
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getJudgeData(double &);
void calcScore(double s1, double s2, double s3, double s4, double s5);
double findLowest(double s1, double s2, double s3, double s4, double s5);
double findHighest(double s1, double s2, double s3, double s4, double s5);



int main ()
{
	char again = 'y';
	int counter = 1;

	cout << "Welcome To Star Search" << endl;
		cout << "----------------------" << endl;
		cout << "\n";
		cout << "Scores must be greater than 0 and less than 10(e.g. 7.5)" << endl;

	do
	{
		double judge1 = 0, judge2 = 0, judge3 = 0, judge4 = 0, judge5 = 0;
		double lowest = 0, highest = 0, total = 0;

		cout << "\n";
		cout << "Contestant " << counter << endl;
		cout << "-------------\n" << endl;

		getJudgeData(judge1);
		getJudgeData(judge2);
		getJudgeData(judge3);
		getJudgeData(judge4);
		getJudgeData(judge5);

		lowest = findLowest(judge1, judge2, judge3, judge4, judge5);
		highest = findHighest(judge1, judge2, judge3, judge4, judge5);

		cout << "The Low Score Is: " << fixed << setprecision(1) << lowest << "  " << "The High Score Is: " << highest ;
		cout << "\n";
		
		calcScore(judge1, judge2, judge3, judge4, judge5);

		counter++;

		cout << "Would You Like To Try Again? (Y or N): ";
		cin >> again;
		cout << "\n";

	}while(( again == 'Y' ) || ( again == 'y' ));
	
	cout << "Goodbye!" << endl;
	cout << "\n";

	return 0;
}

void getJudgeData(double &score)
{
	cout << "Please Enter Your Score: ";
	cin >> score;

	while ((score < 0) || (score > 10))
	{
		cout << "Error - Please Enter a Score Greater Than 0 But Less Than 10: ";
		cin >> score;
	} 
}
double findLowest(double s1, double s2, double s3, double s4, double s5)
{
	double low = s1;
	if (s2<low)
	{
		low=s2;
	}
	if(s3<low)
	{
		low=s3;
	}
	if (s4<low)
	{
		low=s4;
	}
	if (s5<low)
	{
		low=s5;
	}
	return low;
}
double findHighest(double s1, double s2, double s3, double s4, double s5)
{
	double high = s1;
	if (s2>high)
	{
		high=s2;
	}
	if(s3>high)
	{
		high=s3;
	}
	if (s4>high)
	{
		high=s4;
	}
	if (s5>high)
	{
		high=s5;
	}
	return high;
}
void calcScore(double s1, double s2, double s3, double s4, double s5)
{
	double sum;
	double avg;

	sum = s1 + s2 + s3 + s4 + s5;
	sum = sum - findHighest(s1, s2, s3, s4, s5)- findLowest(s1, s2, s3, s4, s5);
	avg = sum/3; 

	cout << "The Total Score Is: " << fixed << setprecision(2) << avg << endl;
	cout << "\n";
}
/*Program Output:

Welcome To Star Search
----------------------

Scores must be greater than 0 and less than 10(e.g. 7.5)

Contestant 1
Please Enter Your Score: 8.1
Please Enter Your Score: 7.5
Please Enter Your Score: 7
Please Enter Your Score: -3
Error - Please Enter a Score Greater Than 0 But Less Than 10: 6
Please Enter Your Score: 7.2
The Low Score Is: 6.0  The High Score Is: 8.1
The Total Score Is: 7.23

Would You Like To Try Again? (Y or N): y


Contestant 2
Please Enter Your Score: 4.2
Please Enter Your Score: 12
Error - Please Enter a Score Greater Than 0 But Less Than 10: 2
Please Enter Your Score: 3.8
Please Enter Your Score: 2.6
Please Enter Your Score: 1.9
The Low Score Is: 1.9  The High Score Is: 4.2
The Total Score Is: 2.80

Would You Like To Try Again? (Y or N): n

Goodbye

Press any key to continue . . .

*/
