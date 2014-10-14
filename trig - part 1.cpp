#include <iostream> // used for input & output
#include <cstdlib> // standard library 
#include <cmath> // used for sqrt()
#include <iomanip> // used for setprecision ...
using namespace std;

int main(){
	// Variables used in quadratic equation a,b,c For answer x1 and x2
	double a, b, c, x1, x2, discr; //discriminant is what under the square root in the formula
	// input assignment for the constant values of a,b,c
	cout << "Enter Value for a: "; // User input for a
	cin >> a;
	cout << "Enter Value for b: "; // User input for b
	cin >> b;
	cout << "Enter Value for c: "; // User input for c
	cin >> c;

	// Calculations && OUTPUT
	discr = (pow(b, 2) - 4 * a * c); //discriminant used to check whether the roots will be real or complex
	cout << fixed << setprecision(2) << endl; // setting the decimal value to 2
	if (a == 0.0) // checks if a = 0, if true output message then close application.
	{
		cout << "If a=0, then the equation is not quadratic." << endl << endl;
		return 0;
	}

	if (discr>0.0) // if discriminant is greater than zero then it has 2 real roots 
	{
		cout << "For a= " << a << ", b= " << b << ", c= " << c << endl;
		//x1
		x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a); //using quadratic equation with + sign then assign the value to x1
		//x2
		x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a); //using quadratic equation with - sign then assign the value to x2
		cout << "The roots of the quadratic equation are " << x1 << " and " << x2 << endl << endl;
	}

	else if (discr == 0.0) // if discriminant equal zero then it has one real root
	{
		cout << "For a= " << a << ", b= " << b << ", c= " << c << endl;
		x1 = (-b) / (2 * a);
		cout << "The root of the quadratic equation is " << x1 << endl << endl;
	}

	else if (discr < 0.0) // if discriminant less than zero then it has two complex roots
	{
		cout << "For a= " << a << ", b= " << b << ", c= " << c << endl;
		cout << "The roots of the quadratic equation are " << (-b / 2 * a) << "+" << sqrt(-discr) / (2 * a) << "i and " << (-b / (2 * a)) << "-" << sqrt(-discr) / (2 * a) << "i\n\n";
	}

	return 0;
}