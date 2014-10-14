/*
filename: for-loop.cpp
CSCI40 -- SEP 23
For Loop Trig Values -- PART 2

Muath Almubarrizi
*/

#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
	const double PI = 3.14159265359; // PI value
	double deg, rad; // degree and radian

	cout << setw(35) << "Table of Trig Functions" << endl << endl; // Table header
	cout << left << setw(15) << "Angle (deg.)" << setw(15) << "sin" << setw(15) << "cos" << setw(15) << "tan" << endl; // Table sub Header

	for (deg = 0; deg <= 360; deg = deg + 15) // begin for loop and keep looping until deg == 360, also after each loop increment deg by 15
	{
		rad = deg*PI / 180; // convert degree to radian
		
		if (deg == 90 || deg == 270) // if tangent is 90 or 270 print undefined 
		{ 
			cout << left << setw(5) << fixed << setprecision(0) << deg << right << setw(15) << fixed << setprecision(4) << sin(rad) << setw(15) << fixed << setprecision(4) << cos(rad) << setw(15) << "Undefined" << endl;
		}
		else // otherwise keep going
		{
			cout << left << setw(5) << fixed << setprecision(0) << deg << right << setw(15) << fixed << setprecision(4) << sin(rad) << setw(15) << fixed << setprecision(4) << cos(rad) << setw(15) << fixed << setprecision(4) << tan(rad) << endl;
		}
	}
	system("PAUSE");
	return 0;
}
/* OUTPUT
			Table of Trig Functions

Angle (deg.)   sin            cos            tan
0             0.0000         1.0000         0.0000
15            0.2588         0.9659         0.2679
30            0.5000         0.8660         0.5774
45            0.7071         0.7071         1.0000
60            0.8660         0.5000         1.7321
75            0.9659         0.2588         3.7321
90            1.0000        -0.0000      Undefined
105           0.9659        -0.2588        -3.7321
120           0.8660        -0.5000        -1.7321
135           0.7071        -0.7071        -1.0000
150           0.5000        -0.8660        -0.5774
165           0.2588        -0.9659        -0.2679
180          -0.0000        -1.0000         0.0000
195          -0.2588        -0.9659         0.2679
210          -0.5000        -0.8660         0.5774
225          -0.7071        -0.7071         1.0000
240          -0.8660        -0.5000         1.7321
255          -0.9659        -0.2588         3.7321
270          -1.0000         0.0000      Undefined
285          -0.9659         0.2588        -3.7321
300          -0.8660         0.5000        -1.7321
315          -0.7071         0.7071        -1.0000
330          -0.5000         0.8660        -0.5774
345          -0.2588         0.9659        -0.2679
360           0.0000         1.0000         0.0000
Press any key to continue . . .
*/