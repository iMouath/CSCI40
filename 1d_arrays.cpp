/*
filename: 1d_arrays.cpp
CSCI 40
ONE DIMENSIONAL ARRAYS
FORWARD/REVERSE

Muath Almubarrizi
*/

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int myarray[21],k=0,i;
	ifstream datafile;
	datafile.open("data.txt");

	if (datafile.is_open())
		while (!datafile.eof())
		{
		datafile >> myarray[k];
		k++;
		}
	else // file not found
	{
		cout << "Error opening datafile !\n\nExiting.\n\n";
		system("PAUSE");
		return 0; //exit application.
	}
	cout << "Forward:" << endl; 
	for (i = 0; i < k-1 ;i++) //output forward
		cout << myarray[i]<<endl;


	cout << "\nReverse:" <<endl;
	for (i = k - 2; i >= 0; i--) //output reversed
		cout << myarray[i] << endl;

	system("PAUSE > NUL");
	return 0;
}

/* OUTPUT

	Forward:
	-3
	2
	4
	23
	65
	12
	77
	14
	2
	-2
	-6
	87
	644
	165

	Reverse:
	165
	644
	87
	-6
	-2
	2
	14
	77
	12
	65
	23
	4
	2
	-3


*/