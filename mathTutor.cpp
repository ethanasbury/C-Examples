//Program ID: mathTutor
//Author: Ethan Asbury
//Date: Feb 10 2011
//Brief Description:
//		A program that generates two random numbers and prompts the user to add the two together
//		and displays whether they got the answer right or wrong.


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	int num1, num2, sum, correctSum;
	unsigned int seed = time(0);
	
	
	srand(seed);
	num1 = 1 + rand() % 50;
	num2 = 1 + rand() % 50;
	
	correctSum = num1 + num2;
	
	cout << setw(45) << "Math Flash Card" << endl;
	cout << setw(45) << "---------------" << endl;
	cout << setw(37) << "  " << num1 << endl;
	cout << setw(37) << "+ " << num2 << endl;
	cout << setw(41) << "--------" << endl;
	cout << setw(37) << "        " << setw(0); cin >> sum;
	

	if (sum == correctSum)
	{
		cout << setw(41) << "Correct" << endl;
	}
	else 
	{
		cout << setw(43) << "Inncorrect!" << endl; 
		cout << setw(48) << "The Correct Answer Is: " << correctSum << endl;
	}
	return 0;
}

/* Program Output
  Correct Anwser:                            
							  Math Flash Card
                              ---------------
                                     34
                                   + 36
                                 --------
                                     70
                                  Correct
Press any key to continue . . .

Incorrect Anwser:
                              Math Flash Card
                              ---------------
                                     24
                                   + 1
                                 --------
                                     99
                                Inncorrect!
                         The Correct Answer Is: 25
Press any key to continue . . .

*/
