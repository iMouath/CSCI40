/*
file: crap_game.cpp
CSCI-40
Craps Game


Muath Almubarrizi
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_craps();
int rand_int(int a, int b);

int main()
{
	srand(time(0)); //generate new seeds
	char answer;
	do
	{
		cout << endl << endl << endl;
		cout << "Would you like to play a game of craps \?\nType y for yes"
			<< " or n for no:";
		answer = cin.get();
		cin.ignore();
		if (answer == 'y' || answer == 'Y')
			play_craps();
	} while (answer == 'y' || answer == 'Y');

	system("PAUSE");
	return 0;

}
//play_craps function
void play_craps()
{
	int die_1, die_2, total;
	die_1 = rand_int(1, 6);
	die_2 = rand_int(1, 6);
	total = die_1 + die_2;

	cout << "You Rolled\nDie1: " << die_1 << "\nDie2: " << die_2 << endl;

	if (total == 7 || total == 11)
		cout << "\n\nYou Won!" << endl;
	else if (total == 2 || total == 3 || total == 12)
		cout << "\n\nYou Lose!" << endl;
	else
	{
		cout << "Your roll wasn't successful." << endl;
		play_craps();
	}
		
	
}
//rand_int function
int rand_int(int a, int b)
{
	return rand() % (b - a + 1) + a;
}
/* OUTPUT
Lost on first roll:
	Would you like to play a game of craps ?
	Type y for yes or n for no:y
	You Rolled
	Die1: 1
	Die2: 2

	You Lose!

Lost on multiple rolls:
	Would you like to play a game of craps ?
	Type y for yes or n for no:y
	You Rolled
	Die1: 2
	Die2: 6
	Your roll wasn't successful.
	You Rolled
	Die1: 1
	Die2: 3
	Your roll wasn't successful.
	You Rolled
	Die1: 4
	Die2: 5
	Your roll wasn't successful.
	You Rolled
	Die1: 4
	Die2: 4
	Your roll wasn't successful.
	You Rolled
	Die1: 1
	Die2: 1

	You Lose!

Won on multiple rolls:
	Would you like to play a game of craps ?
	Type y for yes or n for no:y
	You Rolled
	Die1: 1
	Die2: 3
	Your roll wasn't successful.
	You Rolled
	Die1: 3
	Die2: 3
	Your roll wasn't successful.
	You Rolled
	Die1: 1
	Die2: 6

	You Won!

Won on first roll:
	Would you like to play a game of craps ?
	Type y for yes or n for no:y
	You Rolled
	Die1: 6
	Die2: 1

	You Won!
*/