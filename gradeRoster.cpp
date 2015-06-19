//Project Name: GradeRoster.cpp
//Assignment Name: Programing Assignment Extra Credit
//Author: Ethan Asbury
//Date: March 3 2011
//Brief Description: 
//		The program reads names of individuals and the values of three exam scores from a text file, 
//		calculates their average and prints the individuals names and their average exam score.
//		


#include <iostream>
#include <fstream> 
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream myReadFile;
	ofstream studentExamReport;
	
	int count = 0;
	double num1, num2, num3, avg;
	string first = " ", last = " ";


	cout << "Student Exam Grade Report" << endl;
    cout << "-------------------------" << endl;
	

	myReadFile.open("C:/Users/Ethan/Desktop/C++ Programs/GradeRoster/scores.txt");
	studentExamReport.open("StudentExamReport.txt");

	studentExamReport << "Student Exam Grade Report" << endl;
	studentExamReport << "-------------------------" << endl;

	if (!myReadFile)
	{
		cout << "Error Cannot Open File" << endl;

		return 0;
	}

	while (!myReadFile.eof())
	{
		count = (count + 1);
		myReadFile >> first >> last >> num1 >> num2 >> num3;
		avg = ( num1 + num2 + num3 ) / 3;
		
		if( myReadFile.eof() )
		{
        break;
		}

		cout << first << " " << last << " " << "has an exam average of: " << fixed << setprecision(2) << avg << endl;
		studentExamReport << first << " " << last << " " << "has an exam average of: " << fixed << setprecision(2) << avg << endl;
		

		
	}
		count = ( count - 1 );
		cout << "-------------------------" << endl;
		cout << "There were " << count << " " << "student records in the file" << endl;
		cout << endl;
		studentExamReport << "-------------------------" << endl;
		studentExamReport << endl;
		studentExamReport << "There were " << count << " " << "student records in the file" << endl;
		cout << endl;
		cout << "Claim To Fame" << endl;
		cout << "-------------" << endl;
		cout << "Grace Hopper: " << "She developed the first compiler for computer programming." << endl;
		cout << "John Backus: " << "He helped invent the programming language FORTRAN." << endl;
		cout << "Randy Pausch: " << "He gave the lecture titled The Last Lecture." << endl;
		cout << "Dennis Ritchie: " << "He was the developed the C programming language." << endl;
		cout << "Brian Kernighan: " << "He co-authored the first book on the C programming language." << endl;
		cout << endl;
		cout << "All files are closed and report is written. " << "Goodbye!" << endl;
		studentExamReport << "-------------------------" << endl;
		cout << endl;

	myReadFile.close();
	studentExamReport.close();

	return 0;
}
/*Program Output:

Student Exam Grade Report
-------------------------
Grace Hopper has an exam average of: 79.00
Allan Kay has an exam average of: 75.67
John Backus has an exam average of: 91.00
Randy Pausch has an exam average of: 83.50
Dennis Ritchie has an exam average of: 98.33
Brian Kernighan has an exam average of: 99.67
-------------------------
There were 6 student records in the file


Claim To Fame
-------------
Grace Hopper: She developed the first compiler for computer programming.
John Backus: He helped invent the programming language FORTRAN.
Randy Pausch: He gave the lecture titled The Last Lecture.
Dennis Ritchie: He was the developed the C programming language.
Brian Kernighan: He co-authored the first book on the C programming language.

All files are closed and report is written. Goodbye

Press any key to continue . . .

*/
