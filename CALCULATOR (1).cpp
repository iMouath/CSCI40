/*
	filename: CALCULATOR.cpp
	CSCI 40 -- Sep 16
	MENU-DRIVEN CALCULATOR PROGRAM
	Name: Muath Almubarrizi
*/
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double e = 2.71828182846, PI = 3.14159265359; // e & PI values as constant
	double x, y; // x,y for user input
	int selected; // selected is the menu options set by user used in switch case
	
	do // loop till the user quit or set the value of selected to 0
	{
		x = 0; // x set to zero
		y = 0; // y set to zero
		system("cls"); // clean screen before and after loop
		// -- MENU OPTIONS --
		cout << "*----MENU-DRIVEN CALCULATOR PROGRAM----*"<<endl<<endl;
		cout << left << setw(20) << "1. Square Root" << left << setw(20) << "2. Square" << endl;
		cout << left << setw(20) << "3. Natural log" << left << setw(20) << "4. Common log" << endl;
		cout << left << setw(20) << "5. e^x" << left << setw(20) << "6. y^x" << endl;
		cout << left << setw(20) << "7. 1/x" << left << setw(20) << "8. sin(x)" << endl;
		cout << left << setw(20) << "9. cos(x)" << left << setw(20) << "10. tan(x)" << endl;
		cout << left << "0. Quit!" << endl << endl;
		cout << "Pick an Option[0-10]: ";
		cin >> selected;
			switch (selected) // start of switch statement with selected(int) as an argument
			{
			case 0:
				break;
			case 1: // Square Root calculation and output
			{
				bool good = false;
				do
			{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--Square Root--" << endl;
					cout << "Please enter a number: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else if (x >= 0){
						cout << "The Square Root of " << x << " is " << sqrt(x) << endl << endl;
						good = true;
						system("PAUSE");
					}
					else
					{
						cout << "The number cannot be less than zero" << endl;
						system("PAUSE");
					}
			} while (good != true);
			break; }
			case 2: // Square calculation and output
			{	bool good = false;
			do
			{
				system("cls");
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "--Square--" << endl;
				cout << "Please enter a number: ";
				cin >> x;
				if (cin.fail())
				{
					cout << "Invalid Input!, Try Again"<<endl;
					system("PAUSE");
				}
				else
				{
					cout << "The square of " << x << " is " << pow(x, 2) << endl << endl;
					good = true;
					system("PAUSE");
				}
			} while (good != true);
			break; }
			case 3: // Natural log calculation and output
			{
				bool good=false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--Natural log--" << endl;
					cout << "Please enter a number: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else if (x > 0){
						cout << "The Natural log of " << x << " is " << log(x) << endl << endl;
						good = true;
						system("PAUSE");
					}
					else
					{
						cout << "The number cannot be less than or equal to zero\n" << endl;
						system("PAUSE");

					}
				} while (good != true);
				break; }
			case 4: // Common log calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--Common log--" << endl;
					cout << "Please enter a number: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else if(x > 0){
						cout << "The Common log of " << x << " is " << log10(x) << endl << endl;
						good = true;
						system("PAUSE");
					}
					else
					{
						cout << "\nThe number cannot be less than or equal to zero" << endl;
						system("PAUSE");
					}
				} while (good != true);
				break; }
				
			case 5: // e^x calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--e^x--" << endl;
					cout << "Please enter a number: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else
					{
						cout << "e^" << x << "= " << pow(e, x) << endl << endl;
						good = true;
						system("PAUSE");
					}
				} while (good != true);
				break; }
			case 6: // y^x calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--y^x--" << endl;
					cout << "Please Enter a number for y: ";
					cin >> y;
					cout << "Please Enter a number for x: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else{
						cout << y << "^" << x << "= " << pow(y, x) << endl << endl;
						good = true;
						system("PAUSE");
					}
				} while (good != true);
				break; 
			}
			case 7: // 1/x calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--1/x--" << endl;
					cout << "Please enter a number: ";
					cin >> x;
					if (x == 0){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else{
						cout << "1/" << x << "= " << 1.0 / x << endl << endl;
						good = true;
						system("PAUSE");
					}
					
				} while (good != true);
				break; 
			}
			case 8: // sin(x) calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--sin(x)--" << endl;
					cout << "Please enter an angle in degree: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else{
						cout << "The Sine of " << x << " is " << sin(x*(PI / 180)) << " radians" << endl << endl;
						good = true;
						system("PAUSE");
					}
				} while (good != true);
			break;}
			case 9: // cos(x) calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--cos(x)--" << endl;
					cout << "Please enter an angle in degree: ";
					cin >> x;
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else{
						cout << "The Cosine of " << x << " is " << cos(x*(PI / 180)) << endl << endl;
						good = true;
						system("PAUSE");
					}
				} while (good != true);
			break;}
			case 10: // tan(x) calculation and output
			{
				bool good = false;
				do
				{
					system("cls");
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					cout << "--tan(x)--" << endl;
					cout << "Please enter an angle in degree: ";
					cin >> x; //TODO: x cannot be 90 or 270 output undifined instead.
					if (cin.fail()){
						cout << "Invalid Input!, Try Again" << endl;
						system("PAUSE");
					}
					else if(x==90 || x==270){
						cout<<"The tangent of " << x << " is undefined." << endl;
                        good = true;
                        system("PAUSE");
					}
					else{
						cout << "The Tangent of " << x << " is " << tan(x*(PI / 180)) << endl << endl;
						good = true;
						system("PAUSE");
					}
				} while (good != true);
			break;}
			default:
				cout << "Invalid option, Please try again" << endl << endl; // case of user picked wrong option
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				system("PAUSE");
			}
	} while (selected != 0); // keep looping until selected is set to zero

	return 0;
}