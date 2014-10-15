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
	int k=0,i,index=0; //k = subscript in array, i used for loops
	double seconds[50], height[50], input,LI_H; // LI_H used to determine the interpolation height
	bool found = false; // a condition to check if input time was found in data .. if not we use the interpolation formula 

	ifstream flight_data;
	flight_data.open("flight.txt"); //Assuming flight.txt is in the same directory as the application

	cout << "Please Enter time in seconds: "; //prompt
	cin >> input;

	if (flight_data.is_open()) // check if the file is correctly opened
	{
		while (!flight_data.eof()) // keep reading until you reach the end of the file
		{
			flight_data >> seconds[k] >> height[k]; //read the file in assign the value to k corresponding to array subscript
			k++;
		}
	}
	else
	{
		cout << "Error opening flight.txt !\n\n";
	}
	for (i=0; i < k; i++)
	{
		if (seconds[i] == input) // checks of input is found inside the datafile
		{
			found = true; // value found in data 
			cout <<endl<< "At " << input << " Seconds." << " The Rocket Height = " << height[i] << " Meters." << endl << endl;
		}
	}
	if (!found) // if input is not in the datafile
	{
		for (i = 0; i < k; i++)
		{
			if (seconds[i] < input)
			{
				index = i;
			}
			else
				break;
		}

		LI_H = height[index] + ((input - seconds[index]) / (seconds[index + 1] - seconds[index]))*(height[index + 1] - height[index]); //using the formula provided in the assignment
		cout <<endl << "At " << input << " Seconds." << " The Rocket Height = " << LI_H << " Meters." << endl << endl; // Output
	}

	flight_data.close(); //close the file
	system("PAUSE");
	return 0;
}