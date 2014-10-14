/* 
	filename: program 4.cpp
	CSCI 40 -- Aug 26
	Program # 4
	Monthly Payment on a Loan
	Name: Muath Almubarrizi
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	double MP,LA,i; // Vars MP=Monthly Payment,LA=Loan Amount,i=intrest rate
	int n; //n= load durations

	// -- USER Input --
	cout<<"Enter Loan Amount: $";
	cin>>LA; // input for loan amount
	cout<<"Enter Duration of loan in years: ";
	cin>>n; // input for duration
	cout<<"Enter Annual intrest rate: ";
	cin>>i; // input for intrest rate
	// -- END USER Input --

	n = n*12; // Convert years to months 
	i = i/100/12; // get decimal points
	cout<<"\n"; // empty line for style purpose

	// -- Calculations And OUTPUT --
	MP=LA*((i*pow(1+i,n))/(pow(1+i,n)-1)); // Formula used to determine monthly payment
	cout<<"Your Loan Amount is: $"<<fixed<<setprecision(2)<<LA<<endl<<
		"Your Intrest Rate is: "<<fixed<<setprecision(2)<<i*100*12<<"%"<<endl<<
		"Your Loan Duration: "<<n/12<<" Years"<<endl<<
		"Your Monthly Payment: $"<<fixed<<setprecision(2)<<MP<<endl<<endl; //Final OUTPUT 
	
	system("PAUSE > NUL");
	return 0;
}

/* OUTPUT

1st Run:
	Enter Loan Amount: $190500
	Enter Duration of loan in years: 30
	Enter Annual intrest rate: 4.5

	Your Loan Amount is: $190500.00
	Your Intrest Rate is: 4.50%
	Your Loan Duration: 30 Years
	Your Monthly Payment: $965.24

2nd Run:
	Enter Loan Amount: $12000
	Enter Duration of loan in years: 3
	Enter Annual intrest rate: 6.0

	Your Loan Amount is: $12000.00
	Your Intrest Rate is: 6.00%
	Your Loan Duration: 3 Years
	Your Monthly Payment: $365.06
*/