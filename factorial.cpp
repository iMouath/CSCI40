/*
filename: factorial.cpp
CSCI40 -- SEP 25
WHILE LOOP TO CALCULATE FACTORIAL

Muath Almubarrizi
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
	long n, factorial=1, i; // n for input, i for loop condition

	cout << "Please input a positive number: "; // prompt
	cin >> n; // input
	i = n;
	if (n <= 12) // can't handle anything bigger than 12
	{
		if (n >= 0) // control user input
		{
			while (i >= 1) // loop
			{
				factorial = factorial*i; // calculation
				i--; // decrement i to get the factorial
			}
			cout << "\nThe Factorial of " << n << " is " << factorial << endl << endl; // output
		}
		else // if input less than zero
			cout << "\nNumber MUST be greater than or equal to zero!" << endl;
	}
	else // if input bigger than 12
		cout << "Sorry, Can't give correct answer to anything greater than 12" << endl;
	system("PAUSE > NUL");
	return 0;
}

/* OUTPUT
1st Run:
	Please input a positive number: 0

	The Factorial of 0 is 1
2nd Run:
	Please input a positive number: 9

	The Factorial of 9 is 362880
3rd Run:
	Please input a positive number: 12

	The Factorial of 12 is 479001600

Program cannot handle anything bigger than 12 due to storage.
*/