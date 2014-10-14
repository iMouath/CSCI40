/*
	CSCI 40 -- Aug 19
	Program #2
	Volume of a Right Circular Cone
	

	Muath Almubarrizi
	0669399
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	const double PI=3.14159; //Value of PI as constant
	double r,h; //r= radius, h=height
	double cone_volume; // volume of a right circular cone

	r=4.56; // radius set to 4.56
	h=2.77; // height set to 2.77

	cone_volume = 0.33*PI*r*r*h; //calculation using the formula Vcone=1/3*pi*r^2*h

	cout<<"The volume of a right circular cone with \n radius of "<<r<<" meters\n and a height of "<<h<<" meters \n is "<<cone_volume<<" cubic meters."<<endl<<endl; // the output

	system ("PAUSE");

	return 0;

}

/* OUTPUT
	The volume of a right circular cone with
	radius of 4.56 meters
	and a height of 2.77 meters
	is 59.7136 cubic meters.

	Press any key to continue . . .

*/