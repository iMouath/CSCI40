
/* Batting Average Program
file:  batting-average.cpp

Muath Almubarrizi
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>

//---function prototypes---
//Batting Average
double BA(int PA, int _1B, int _2B, int _3B, int HR, int S, int BB, int HBP);
//On-base percentage
double OBP(int PA, int _1B, int _2B, int _3B, int HR, int BB, int HBP);
//Slugging percentage
double SLG(int PA, int _1B, int _2B, int _3B, int HR, int S, int BB, int HBP);

using namespace std;

int main()
{
	int _1B, _2B, _3B, HR, PA, BB, HBP, S;

	/*In this example the actual parameter names match the formal parameter names.
	This doesn't have to be the case */

	cout << "Enter a player's plate appearances: ";
	cin >> PA;

	cout << endl;

	cout << "Enter the number of singles: ";
	cin >> _1B;

	cout << endl;

	cout << "Enter the number of doubles: ";
	cin >> _2B;

	cout << endl;

	cout << "Enter the number of triples: ";
	cin >> _3B;

	cout << endl;

	cout << "Enter the number of home runs: ";
	cin >> HR;

	cout << endl;

	cout << "Enter the number of sacrifices: ";
	cin >> S;

	cout << endl;

	cout << "Enter the number of walks: ";
	cin >> BB;

	cout << endl;

	cout << "Enter the number of times hit by pitch: ";
	cin >> HBP;

	cout << endl;

	cout << fixed << setprecision(3) << "The player's batting average is "
		<< BA(PA, _1B, _2B, _3B, HR, S, BB, HBP) << endl;

	cout << "The Player's On-base percentage is " 
		<< OBP(PA, _1B, _2B, _3B, HR, BB, HBP) << endl;

	cout << "The Player's Slugging percentage is "
		<< SLG(PA, _1B, _2B, _3B, HR, S, BB, HBP) << endl;
	cout << endl << endl;

	system("PAUSE");
	return 0;
}

/*----------------------------------------------------------------------------*/
//Batting Avg Function
double BA(int PA, int _1B, int _2B, int _3B, int HR, int S, int BB, int HBP)
{
	int AB, H;
	double avg;
	H = _1B + _2B + _3B + HR;
	AB = PA - (BB + HBP + S);
	avg = static_cast<double>(H) / AB;
	return avg;
}
//On-base percentage
double OBP(int PA, int _1B, int _2B, int _3B, int HR, int BB, int HBP)
{
	int H;
	double percentage;
	H = _1B + _2B + _3B + HR;
	percentage = static_cast<double>((H + BB + HBP)) / PA;
	return percentage;
}
//Slugging percentage
double SLG(int PA, int _1B, int _2B, int _3B, int HR, int S, int BB, int HBP)
{
	int total_bases, AB;
	double percentage;
	AB = PA - (BB + HBP + S);
	total_bases = (HR * 4) + (_3B * 3) + (_2B * 2) + (_1B);
	percentage = static_cast<double>(total_bases) / AB;
	return percentage;
}

/* OUTPUT
Enter a player's plate appearances: 214

Enter the number of singles: 42

Enter the number of doubles: 5

Enter the number of triples: 3

Enter the number of home runs: 15

Enter the number of sacrifices: 6

Enter the number of walks: 12

Enter the number of times hit by pitch: 3

The player's batting average is 0.337
The Player's On-base percentage is 0.374
The Player's Slugging percentage is 0.627


Press any key to continue . . .
*/

