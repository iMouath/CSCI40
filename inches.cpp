/*
filename: inches.cpp
CSCI40 -- Oct 14
FUNCTIONS

Muath Almubarrizi
*/

#include <cstdlib>
#include <iostream>
using namespace std;

//function prototype
int total_inches(int yards, int feet, int inches);

int main()
{
	int yards, feet, inches, results; //using the same names for vars 

	//--INPUT--
	cout << "Enter Yards: ";
	cin >> yards;
	cout << "Enter Feet: ";
	cin >> feet;
	cout << "Enter Inches: ";
	cin >> inches;

	results = total_inches(yards, feet, inches); // call the function total_inches and send the arguments, returned values is assigned to results

	//--OUTPUT--
	cout << endl << "Total Number of Inches = " << results << endl;

	system("PAUSE > NUL");
	return 0;
}

//Begin total_inches function
int total_inches(int yards, int feet, int inches)
{
	int total;
	yards = yards * 36; // yards to inches
	feet = feet * 12; // feet to inches
	total = yards + feet + inches; // sum up the total inches
	return total; // return it
}

/* OUTPUT
1st Run:
	Enter Yards: 3
	Enter Feet: 2
	Enter Inches: 5

	Total Number of Inches = 137

2nd Run:
	Enter Yards: 5
	Enter Feet: 3
	Enter Inches: 2

	Total Number of Inches = 218

3rd Run:
	Enter Yards: 0
	Enter Feet: 5
	Enter Inches: 6

	Total Number of Inches = 66

*/