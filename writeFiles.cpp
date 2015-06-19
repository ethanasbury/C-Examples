//Program ID:
//Assignment:
//Author:
//Date:
//Brief Description:
//

#include <iostream>
#include <fstream>
using namespace std;


int main ()
{
	double exam1, exam2, exam3, exam4, exam5;

	ofstream outFile;
	outFile.open ("report.txt");

	cout << "Please Enter Exam Score 1: ";
	cin >> exam1;
	cout << "Please Enter Exam Score 2: ";
	cin >> exam2;
	cout << "Please Enter Exam Score 3: ";
	cin >> exam3;
	cout << "Please Enter Exam Score 4: ";
	cin >> exam4;
	cout << "Please Enter Exam Score 5: ";
	cin >> exam5;
	

	outFile << "Exam Scores" << endl;
	outFile << exam1 << endl;
	outFile << exam2 << endl;
	outFile << exam3 << endl;
	outFile << exam4 << endl;
	outFile << exam5 << endl;
	outFile.close();

return 0;
}
	

