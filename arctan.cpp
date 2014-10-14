
/*
filename: arctan.cpp
CSCI40 -- SEP 30
Arctan(x) for loop

Muath Almubarrizi
*/

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PI=3.14159265359; // PI
	int i; // controls condition in for loop
    double x,_arctan,sum; // x input, _arctan calculations, sum final calculated value

    cout << "Please Input an number: "; // prompt
    cin >> x; // input into x

	while (x<= -1 || x >=1) // check input for valid domain 
	{
		cout <<"Please input a number within the allowed domain [-1<x<1]: ";
		cin >> x;
	}
	sum = 0; // set sum to zero
	for (i=0; i<=19; i++) // for loop to calculate arctan
	{
		_arctan = pow(-1.0,i)*(pow(x,((2.0*i)+1))/((2.0*i)+1.0)); // formula used
		sum = sum + _arctan; // add _arctan to sum for every loop
	}

	cout << "The estimated arctan value of " << x << " is " << fixed << setprecision(4)<<sum<<endl; // output using formula used above
	cout << "The actual arctan value of " << x << " is " << fixed << setprecision(4)<< atan(x) << endl << endl; // output using atan(x)


    system ("PAUSE > NUL");
    return 0;

}
/* OUTPUT
1st Run:
	Please Input an number: .22
	The estimated arctan value of 0.22 is 0.2166
	The actual arctan value of 0.22 is 0.2166

2nd Run: 
	Please Input an number: .951
	The estimated arctan value of 0.951 is 0.7586
	The actual arctan value of 0.951 is 0.7603

3rd Run:
	Please Input an number: 4
	Please input a number within the allowed domain [-1<x<1]: .1
	The estimated arctan value of 0.1 is 0.0997
	The actual arctan value of 0.1 is 0.0997

*/