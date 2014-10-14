

/* 
file: weatherCPP.cpp
This is a program to demonstrate reading from a file

Muath Almubarrizi
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int k, day, num=10, low_day, high_day;
    double l_temp, h_temp, sum_l=0.0, sum_h=0.0;
	double min_temp = 1000, max_temp = -1000;

    ifstream myfile;

    myfile.open("weather_data.txt"); // file have to be in the same directory!

    if (!myfile)
        cout<<"Error in opening file\n\n";
    else
    {
        for(k=1; k<=num; k++)
        {
            myfile>>day>>l_temp>>h_temp; // set data from myfile to variables
			sum_l = sum_l + l_temp;
            sum_h = sum_h + h_temp;

			if (min_temp > l_temp) // lowest temp
			{
				min_temp = l_temp;
				low_day = day;
			}
			if (max_temp < h_temp) // highest temp
			{
				max_temp = h_temp;
				high_day = day;
			}
        }

        cout<<fixed<<setprecision(1);
        cout<<"The average low temp was "<< sum_l/num<<endl<<endl;
        cout<<"The average high temp was "<< sum_h/num<<endl<<endl;
		cout << "The highest temp was " << max_temp << " on day " << high_day << endl << endl; // output high temp
		cout << "The lowest temp was " << min_temp << " on day " << low_day << endl; // output low temp

    }
    myfile.close();
    system("PAUSE > NUL");
    return(0);
}
/* OUTPUT

	The average low temp was 36.9

	The average high temp was 47.1

	The highest temp was 59.9 on day 117

	The lowest temp was 25.5 on day 115

*/
