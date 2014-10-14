/* Batting Average Program
   file:  batavg1CPP.cpp

   Glossary of abbreviations:
         
         BA = batting average
         PA = plate appearances
         H = hits
         BB = bases on balls (walks)
         HBP = times hit by pitch
         S = sacrifices
         AB = at bats
         _1B = singles
         _2B = doubles
         _3B = triples
         HR = home runs
         
*/

#include<iostream>
#include<cstdlib>
#include<iomanip>

//function prototype
double BA(int PA, int _1B, int _2B, int _3B, int HR, int S, int BB, int HBP);

using namespace std;

int main ()
{
    int _1B, _2B, _3B, HR, PA, BB, HBP, S; 
	
	/*In this example the actual parameter names match the formal parameter names. 
	  This doesn't have to be the case */
    
    cout<<"Enter a player's plate appearances: ";
    cin>>PA;
    
    cout<<endl;

    cout<<"Enter the number of singles: ";
    cin>>_1B;

    cout<<endl;

    cout<<"Enter the number of doubles: ";
    cin>>_2B;

    cout<<endl;

    cout<<"Enter the number of triples: ";
    cin>>_3B;

    cout<<endl;

    cout<<"Enter the number of home runs: ";
    cin>>HR;

    cout<<endl;

    cout<<"Enter the number of sacrifices: ";
    cin>>S;

    cout<<endl;

    cout<<"Enter the number of walks: ";
    cin>>BB;

    cout<<endl;

    cout<<"Enter the number of times hit by pitch: ";
    cin>>HBP;
    
    cout<<endl;

    cout<<fixed<<setprecision(3)<<"The player's batting average is "
         <<BA(PA, _1B, _2B, _3B, HR, S, BB, HBP);
    
    cout<<endl<<endl;
         
    system("PAUSE");
    return 0;
}

/*----------------------------------------------------------------------------*/

double BA(int PA, int _1B, int _2B, int _3B, int HR, int S,
              int BB, int HBP)
{
   int AB, H;
   double avg;
   H = _1B + _2B + _3B + HR;
   AB = PA - (BB + HBP + S);
   avg = static_cast<double>(H)/AB;
   return avg;
}


/* SAMPLE OUTPUT
Enter a player's plate appearances: 112

Enter the number of singles: 23

Enter the number of doubles: 6

Enter the number of triples: 1

Enter the number of home runs: 5

Enter the number of sacrifices: 4

Enter the number of walks: 5

Enter the number of times hit by pitch: 2

The player's batting average is 0.347

Press any key to continue . . .
*/

