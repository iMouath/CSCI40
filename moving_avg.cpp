/*
file: moving_avg.cpp
CSCI-40
Moving Average Program

Muath Almubarrizi
*/

#include <iostream>
#include <cstdlib>
#include<iomanip>
void moving_average(const double x[], double y[], int n);
using namespace std;
int main()
{
	const int N = 20;
	const double p[N] = { 1.2, 5.3, 19.0, 35.6, 40.2, 48.7, 80.6, 99.9, 100.0, 112.5,
		122.7, 127.7, 138.2, 150.2, 153.6, 175.8, 181.2, 188.7, 210.0, 215.3 };
	double t[N];
	int n, k;
	n = 20;
	cout << fixed << setprecision(1);
	cout << "Before moving average function the array contents are:\n";
	for (k = 0; k <= n - 1; k++)
		cout << p[k] << endl;

	moving_average(p, t, n);

	cout << "\nAfter moving average function the array contents are:\n";
	for (k = 0; k <= n - 1; k++)
		cout << t[k] << endl;

	system("PAUSE > NUL");
	return 0;
}
void moving_average(const double x[], double y[], int n)
{
	int windowSize = 3,k=1;
	double movingAverage = 0.0, sum = 0.0;

	for (int i = 0; i <= (n - windowSize); i++)
	{
		sum = 0.0;                // Reinitialize sum back to zero.
		// Loop through x numbers from current i position, where x = windowSize.
		for (int j = i; j < i + windowSize; j++) {
			sum += x[j];           // Increment sum.
		}
		// Calculate moving average and fill the array.
		movingAverage = sum / windowSize;
		y[k] = movingAverage;
		k++;
	}
	y[0] = x[0]; //keep the first value
	y[19] = x[19]; //keep the last value
}
/* OUTPUT

	Before moving average function the array contents are:
	1.2
	5.3
	19.0
	35.6
	40.2
	48.7
	80.6
	99.9
	100.0
	112.5
	122.7
	127.7
	138.2
	150.2
	153.6
	175.8
	181.2
	188.7
	210.0
	215.3

	After moving average function the array contents are:
	1.2
	8.5
	20.0
	31.6
	41.5
	56.5
	76.4
	93.5
	104.1
	111.7
	121.0
	129.5
	138.7
	147.3
	159.9
	170.2
	181.9
	193.3
	204.7
	215.3

*/
