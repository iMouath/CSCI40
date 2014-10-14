/* 
	filename: real and complex.cpp
	CSCI 40 -- Sep 16
	QUADRATIC EQUATION SOLVER – REAL AND COMPLEX ROOTS
	Name: Muath Almubarrizi
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	// Variables used in quadratic equation a,b,c For answer x1 and x2
	double a,b,c,x1,x2,discr; //discriminant is what under the square root in the formula
	// input assignment for the constant values of a,b,c
	cout<<"Enter Value for a: "; // User input for a
	cin>>a;
	cout<<"Enter Value for b: "; // User input for b
	cin>>b;
	cout<<"Enter Value for c: "; // User input for c
	cin>>c;
	
	// Calculations && OUTPUT
	discr = (pow(b, 2) - 4 * a * c); //discriminant used to check whether the roots will be real or complex
	cout << fixed << setprecision(2)<<endl; // setting the decimal value to 2
	if (a == 0.0) // checks if a = 0, if true output message then close application.
	{
		cout << "If a=0, then the equation is not quadratic." << endl << endl;
		system("PAUSE");
		return 0;
	}
		
	/* !Question to Professor Chris: What is the best practice here
	discr>0 OR discr>0.0 --- Will the decimal points matter ?
	*/
	if (discr>0.0) // if discriminant is greater than zero then it has 2 real roots 
	{
		cout << "For a= " << a << ", b= " << b << ", c= " << c << endl;
		//x1
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a); //using quadratic equation with + sign then assign the value to x1
		//x2
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a); //using quadric equation with - sign then assign the value to x2
		cout << "The roots of the quadratic equation are " << x1 << " and " << x2 << endl << endl;
	}
	
	else if (discr==0.0) // if discriminant equal zero then it has one real root
	{
		cout << "For a= " << a << ", b= " << b << ", c= " << c << endl;
		x1 = (-b) / (2 * a);
		cout << "The root of the quadratic equation is " << x1 << endl << endl;
	}
	
	else if (discr < 0.0) // if discriminant less than zero then it has two complex roots
	{
		cout << "For a= " << a << ", b= " << b << ", c= " << c << endl;
		cout << "The roots of the quadratic equation are " << (-b / 2 * a) << "+" << sqrt(-discr) / (2 * a)<<"i and "<<(-b/(2*a))<<"-"<<sqrt(-discr)/(2*a)<<"i\n\n";
	}

	system("PAUSE > NULL");
	return 0;
}
/* -- OUTPUT --
	Run1:
		Enter Value for a: 1
		Enter Value for b: -4
		Enter Value for c: 5

		For a= 1.00, b= -4.00, c= 5.00
		The roots of the quadratic equation are 2.00+1.00i and 2.00-1.00i

	Run2:
		Enter Value for a: 1
		Enter Value for b: 1
		Enter Value for c: 1

		For a= 1.00, b= 1.00, c= 1.00
		The roots of the quadratic equation are -0.50+0.87i and -0.50-0.87i

	Run3:
		Enter Value for a: 3
		Enter Value for b: 1
		Enter Value for c: -4

		For a= 3.00, b= 1.00, c= -4.00
		The roots of the quadratic equation are 1.00 and -1.33

*/