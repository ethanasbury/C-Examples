//Program ID: structureLab.cpp
//Assignment Name: Structrue Lab
//Author: Ethan Asbury
//Class: CSC 100AA
//Date: April 1 2011
//Brief Decription:
//		This Program uses structures to calculate the circumference, area,
//		and diameter of a circle based upon a radius input given by the user.

#include <iostream>
#include <iomanip>

using namespace std;

struct Circle //Structure
{
	double radius;
	double diameter;
	double area;
	double circumference;
	
	Circle( ) //Default Structure
	{	radius = 0;
		diameter = 0;
		area = 0;
		circumference = 0;
	}
};

Circle getCircleData(); //Function Prototypes
void calculateCircleData(Circle &);
void displayCircleData(Circle);
bool tryAgain();

int main()
{
	int counter = 1;//counter to increment circle number
	cout << "Welcome To The Circle Calculator" << endl;//Program Greeting/Title
	cout << "--------------------------------" << endl;
	do
	{
		struct Circle num1;//Structure Variable num1
		
		cout << "\nCircle: " << counter << endl;//Circle incremented by int counter
		cout << "---------\n" << endl;
		num1 = getCircleData();//Calling function getCircleData and setting it equal to num1 structure
		calculateCircleData(num1);//Calling calculateCircleData function and passing num1 date to it
		displayCircleData(num1);//Calling displayCircleData function and passing 
		cout << "\n";			//it the updated info recieved from calculateCircleData
		counter++;//incrementing the counter by 1	

	}while(tryAgain());//determines what the do loop will do according to what the 
}					   //bool tryAgain returns
//Function Definitions
Circle getCircleData()
{
	Circle result;//Circle variable set to store function information and return that data to num1
	cout << fixed << setprecision(2) << "Please Enter Your Circle Radius: ";
	cin >> result.radius;
	cout << "\n";
	while(result.radius <= 0)
	{
		cout << "Error: Please Enter A Number Larger Than 0: ";
		cin >> result.radius;
		cout << "\n";
	}
	return result;
}

void calculateCircleData(Circle &num1)
{
	num1.diameter = num1.radius * 2;//Calculating circle data
	num1.area = (num1.radius * num1.radius) * 3.14159265;
	num1.circumference = 2 * 3.14159265 * num1.radius;
}

void displayCircleData(Circle num1)
{
	cout << "Your Circle Data is:\n " << endl;
	cout <<	"       Radius: " << num1.radius << endl;
	cout << "     Diameter: " << num1.diameter << endl;//Displays info calculated in the calculateCircleData function
	cout << "Circumference: " << num1.circumference << endl;
	cout << "         Area: " << num1.area << endl;
}

bool tryAgain()
{
   char again;
   cout << "Would You Like To Continue(Y/N): ";
   cin >> again;

   if((again == 'y')||(again =='Y'))
   {
	   return true; 
   }
   else//Any value not y or Y will result in an exit of the do loop
   {
	   cout << "\n\n";
	   cout << "Good Bye!\n" << endl;
	   return false;
   }
}


/* Program Output

Welcome To The Circle Calculator
--------------------------------

Circle: 1
---------

Enter Your Circle Radius: 3

Your Circle Data is:

       Radius: 3.00
     Diameter: 6.00
Circumference: 18.85
         Area: 28.27

Would You Like To Continue(Y/N): y

Circle: 2
---------

Enter Your Circle Radius: 0

Error: Please Enter A Number Larger Than 0: 4.5
Your Circle Data is:

       Radius: 4.50
     Diameter: 9.00
Circumference: 28.27
         Area: 63.62

Would You Like To Continue(Y/N): y

Circle: 3
---------

Enter Your Circle Radius: -2

Error: Please Enter A Number Larger Than 0: 32
Your Circle Data is:

       Radius: 32.00
     Diameter: 64.00
Circumference: 201.06
         Area: 3216.99

Would You Like To Continue(Y/N): n

Good Bye

Press any key to continue . . .

*/
