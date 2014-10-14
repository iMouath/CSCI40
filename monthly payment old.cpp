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
	double MP,LA,i;
	int n;

	cout<<"Loan amount: $";
	cin>>LA;
	cout<<"Duration of loan in years: ";
	cin>>n;
	cout<<"Annual intrest rate: ";
	cin>>i;

	n = n*12;
	cout<<"\n\n\n";
	MP=LA*((i*pow(1+i,n))/(pow(1+i,n)-1));
	cout<<"MP= $"<<fixed<<setprecision(2)<<MP<<endl;
	system("PAUSE");
	return 0;
}