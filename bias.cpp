/*
file: bias.cpp
CSCI 40
One-dimensional arrays as function arguments

Muath Almubarrizi
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void bias(double x[], double y[], int n);
double min(double x[], int n);
int main()
{
	const int N = 20;
	double x[N],y[N];
	int n = 0;
	//--INPUT--
	for (int i = 0; i < N; i++)
	{
		cout << "Fill array x with data [" << i << "]: ";
		cin >> x[i];
		n++;
	}

	bias(x, y, n); //send x to fill y

	//--OUTPUT--
	cout << setw(10) << "X Array" << setw(10) << "Y Array"<<endl;
	for (int k = 0; k < n; k++)
		cout << setw(5) << x[k] << setw(15) << y[k] << endl;

	system("PAUSE > NUL");
	return 0;
}
//bias
void bias(double x[], double y[], int n)
{
	for (int k = 0; k < n; k++)
	{
		y[k] = x[k] - abs(min(x, n)); 
	}
}
//min
double min(double x[], int n)
{
	double min_x;
	min_x = x[0];
	for (int k = 1; k <= n - 1; k++)
	{
		if (x[k] < min_x)
			min_x = x[k];
	}
		
	return min_x;
}
/* OUTPUT
1st Run Positive Min:
	Fill array x with data [0]: 6
	Fill array x with data [1]: 4
	Fill array x with data [2]: 10
	Fill array x with data [3]: 6
	Fill array x with data [4]: 3
	Fill array x with data [5]: 8
	Fill array x with data [6]: 13
	Fill array x with data [7]: 16
	Fill array x with data [8]: 17
	Fill array x with data [9]: 11
	Fill array x with data [10]: 9
	Fill array x with data [11]: 19
	Fill array x with data [12]: 7
	Fill array x with data [13]: 14
	Fill array x with data [14]: 19
	Fill array x with data [15]: 15
	Fill array x with data [16]: 5
	Fill array x with data [17]: 18
	Fill array x with data [18]: 17
	Fill array x with data [19]: 15
	   X Array   Y Array
		6              3
		4              1
	   10              7
		6              3
		3              0
		8              5
	   13             10
	   16             13
	   17             14
	   11              8
		9              6
	   19             16
		7              4
	   14             11
	   19             16
	   15             12
		5              2
	   18             15
	   17             14
	   15             12

2nd Run Negative Min:
	Fill array x with data [0]: 6
	Fill array x with data [1]: 4
	Fill array x with data [2]: 10
	Fill array x with data [3]: -4
	Fill array x with data [4]: 3
	Fill array x with data [5]: 8
	Fill array x with data [6]: 13
	Fill array x with data [7]: 16
	Fill array x with data [8]: 17
	Fill array x with data [9]: 11
	Fill array x with data [10]: 9
	Fill array x with data [11]: 19
	Fill array x with data [12]: 7
	Fill array x with data [13]: 14
	Fill array x with data [14]: 19
	Fill array x with data [15]: 15
	Fill array x with data [16]: 5
	Fill array x with data [17]: 18
	Fill array x with data [18]: 17
	Fill array x with data [19]: 15
	X Array   Y Array
	6              2
	4              0
	10              6
	-4             -8
	3             -1
	8              4
	13              9
	16             12
	17             13
	11              7
	9              5
	19             15
	7              3
	14             10
	19             15
	15             11
	5              1
	18             14
	17             13
	15             11

*/
