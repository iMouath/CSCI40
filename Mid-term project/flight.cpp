/*
file: flight.cpp
CSCI-40 -- Oct 20
LINEAR INTERPOLATION OF FLIGHT RECORDER DATA

Muath Almubarrizi
*/
#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int k;
	double seconds, height, input;
	ifstream flight_data;
	flight_data.open("flight.txt");

	cout << "Please Enter time in seconds: ";
	cin >> input;

	if (flight_data.is_open())
	{
		while (!flight_data.eof())
		{
			flight_data >> seconds >> height;
			if (input == seconds)
			{
				cout << "Height is: " << height << endl;
			}
			else
			{

			}
				
			
		}
	}
	else
	{
		cout << "Error opening flight.txt !\n\n";
		
	}
	flight_data.close();
	system("PAUSE");
	return 0;
}