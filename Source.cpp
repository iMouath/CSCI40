/* 
	filename: program 3.cpp
	CSCI 40 -- Aug 21
	Program # 3
	Real Roots of A Quadratic Equation
	Name: Muath Almubarrizi
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(){
	// Variables used in quadratic equation a,b,c For answer x1 and x2
	double a,b,c,x1,x2;
	// input assigment for the constant values of a,b,c
	//TODO: variable a cannot be zero, handle user input.
	cout<<"Enter Value for a: "; // User input for a
	cin>>a;
	cout<<"You Entered "<<a<<" For a"<<endl;
	cout<<"Enter Value for b: "; // User input for b
	cin>>b;
	cout<<"You Entered "<<b<<" For b"<<endl;
	cout<<"Enter Value for c: "; // User input for c
	cin>>c;
	cout<<"You Entered "<<c<<" For c"<<endl<<endl;
	// Calculations && OUTPUT
	//x1
	x1 = (-b+sqrt(b*b-4*a*c))/2*a; //using quadritc equation with + sign then assaign the value to x1
	cout<<"X1= "<<x1<<endl; // OUTPUT X1
	//x2
	x2 = (-b-sqrt(b*b-4*a*c))/2*a; //using quadritc equation with - sign then assaign the value to x2
	cout<<"X2= "<<x2<<endl; // OUTPUT X2
	system("PAUSE > NULL"); return 0;}
/* OUTPUT
	1st Run:
		Enter Value for a: 1
		You Entered 1 For a
		Enter Value for b: -3
		You Entered -3 For b
		Enter Value for c: -10
		You Entered -10 For c
		X1= 5
		X2= -2
	2nd Run:
		Enter Value for a: 1
		You Entered 1 For a
		Enter Value for b: -5
		You Entered -5 For b
		Enter Value for c: 6.25
		You Entered 6.25 For c
		X1= 2.5
		X2= 2.5
	3rd Run:
		Enter Value for a: 3
		You Entered 3 For a
		Enter Value for b: 1
		You Entered 1 For b
		Enter Value for c: -4
		You Entered -4 For c
		X1= 9
		X2= -12
*/