/*
file: flight.cpp
CSCI-40 -- Oct 20
LINEAR INTERPOLATION OF FLIGHT RECORDER DATA

Muath Almubarrizi
*/
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm> // Used to calculate the Maximum & Minimum value from the given datafile.

using namespace std;

int main()
{
	int sentinel_location; // Used to locate the sentential
	int k=0,i,index=0; //k = subscript in array, i used for loops
	double seconds[50], height[50], input,LI_H,_Max,_Min; // LI_H used to determine the interpolation height
	bool found = false; // a condition to check if input time was found in data .. if not we use the interpolation formula 

	//--Reading data file
	ifstream flight_data;
	flight_data.open("flight.txt"); //Assuming flight.txt is in the same directory as the application

	if (flight_data.is_open()) // check if the file is correctly opened
	{
		while (!flight_data.eof()) // keep reading until you reach the end of the file
		{
			flight_data >> seconds[k] >> height[k]; //read the file in assign the value to k corresponding to array subscript
			k++;
			
		}
	}
	else // file not found
	{
		cout << "Error opening datafile !\n\nExiting.\n\n";
		system("PAUSE");
		return 0; //exit application.
	}

	sentinel_location = k - 1; // k = the number of elements in the array
	_Min = *min_element(seconds, seconds + sentinel_location); //Get the Minimum value and assign it to _Min
	_Max = *max_element(seconds, seconds + sentinel_location); //Get the Maximum value and assign it to _Max
	
	//--Prompt & Input --
	cout << "Please Enter time in seconds: "; //prompt

	if (!(cin >> input)) //Input takes numbers only
	{
		cout << "\nNumbers Only!\nExiting.\n\n";
		system("PAUSE");
		return 0;
	}
	else if (input < _Min || input > _Max) // input is lower or higher than datafile, exit.
	{
		cout << "\nInvalid!\nWe Don't have data for this input.\nExiting.\n\n";
		system("PAUSE");
		return 0;
	}
	else // input is valid
	{
		for (i = 0; i < k; i++)
		{
			if (seconds[i] == input) // checks if input is found inside the datafile
			{
				found = true; // value found in data 
				cout << endl << "At " << input << " Seconds." << " The Rocket Height = " << height[i] << " Meters." << endl << endl;
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
			cout << endl << "At " << input << " Seconds." << " The Rocket Height = " << LI_H << " Meters." << endl << endl; // Output
		}
	}
	

	flight_data.close(); //close the file
	system("PAUSE");
	return 0;
}
