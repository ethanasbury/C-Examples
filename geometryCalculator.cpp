//Program ID: GeometryCalculator
//Author: Ethan Asbury
//Date: Feb 10 2010
//Brief Description:
//		A program to calculate geometric shapes from user inputed values.


#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	
	double radius, rLength, rWidth, tBase, tHeight, circleArea, rectangleArea, triangleArea;
	char num;

	cout << "Geometry Calculator" << endl;
	cout << "-------------------" << endl;
	cout << "1. Calculate the area of a Circle" << endl;
	cout << "2. Calculate the area of a Rectangle" << endl;
	cout << "3. Calculate the area of a Triangle" << endl;
	cout << "4. Quit\n" << endl;
	cout << "Enter Your Choice (1-4)" << endl;
	cin >> num;

	switch(num)
	{
		case '1' : cout << "Please Enter The Radius Of Your Circle: " << endl;
	cin >> radius;
	if(radius < 0)
	{
		cout << "Invalid Number! Must Be A Positive Number." << endl;
	}
	else if(radius > 0)
	{
	circleArea = 3.14159 * pow(radius,2);
	cout << fixed << setprecision(2) << "The Area Of Your Circle Is: " << circleArea << endl;
	}
		break;
		case '2' : cout << "Please Enter The Lenght Of Your Rectangle: " << endl;
	cin >> rLength;
	cout << " Please Enter The Width Of Your Rectangle: " << endl;
	cin >> rWidth;
	rectangleArea = rLength * rWidth;
	cout << "The Area Of Your Rectangle Is: " << rectangleArea << endl;
		break;
		case '3' : cout << "Please Enter The Base Of Your Triangle: " << endl;
	cin >> tBase;
	cout << "Please Enter The Height Of Your Triangle: " << endl;
	cin >> tHeight;
	triangleArea = (.5 * tBase) * tHeight;
	cout << "The Area Of Your Triangle Is: " << triangleArea << endl;
		case '4' :
		break;
		default: cout << "Incorrect Selection" << endl;
	}
	return 0;
}

/*Program Output
Circle Radius:

Geometry Calculator
-------------------
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter Your Choice (1-4)
1
Please Enter The Radius Of Your Circle:
3
The Area Of Your Circle Is: 28.27
Press any key to continue . . .

Negative Number For Radius:

Geometry Calculator
-------------------
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter Your Choice (1-4)
1
Please Enter The Radius Of Your Circle:
-3
Invalid Number! Must Be A Positive Number.
Press any key to continue . . .

Rectangle Area:

Geometry Calculator
-------------------
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter Your Choice (1-4)
2
Please Enter The Lenght Of Your Rectangle:
8
 Please Enter The Width Of Your Rectangle:
4
The Area Of Your Rectangle Is: 32
Press any key to continue . . .

Triangle Area:

Geometry Calculator
-------------------
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter Your Choice (1-4)
3
Please Enter The Base Of Your Triangle:
6
Please Enter The Height Of Your Triangle:
4
The Area Of Your Triangle Is: 12
Press any key to continue . . .

4th Selection:

Geometry Calculator
-------------------
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter Your Choice (1-4)
4
Press any key to continue . . .

Invalid Number Selection:

Geometry Calculator
-------------------
1. Calculate the area of a Circle
2. Calculate the area of a Rectangle
3. Calculate the area of a Triangle
4. Quit

Enter Your Choice (1-4)
5
Incorrect Selection
Press any key to continue . . .

*/
