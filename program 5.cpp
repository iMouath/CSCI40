/*
	filename: program5.cpp
	CSCI 40 == Sep 9
	Program # 5
	Character and String Input With Output Format Manipulation

	Name: Muath Almubarrizi
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	// -- Variables Declarations --
	string student_name_1, student_name_2, student_name_3; // Student Names
	string student_id_1, student_id_2, student_id_3; // Student IDs
	char grade_1, grade_2, grade_3, junk; // Student Grade -- junk: used to catch \n from the buffer
	double avg_1, avg_2, avg_3; // Students Average
	// -- END Variables -- 

	// -- INPUT --
	cout<<"Enter Student 1 Informations\n\n";
	
	cout<<"Student name (Last, First, Initial): ";
	getline(cin, student_name_1);
	
	cout<<"Student ID: ";
	getline(cin, student_id_1);
	
	cout<<"Grade: ";
	grade_1=cin.get();
	junk=cin.get();
	
	cout<<"Course Average: ";
	cin>>avg_1;
	//--2
	cout<<"\n\nEnter Student 2 Informations\n\n";
	junk = cin.get();
	cout<<"Student name (Last, First, Initial): ";
	getline(cin, student_name_2);
	
	cout<<"Student ID: ";
	getline(cin, student_id_2);
	
	cout<<"Grade: ";
	cin.get(grade_2);
	junk=cin.get();
	
	cout<<"Course Average: ";
	cin>>avg_2;
	
	//--3
	cout<<"\n\nEnter Student 3 Informations\n\n";
	junk = cin.get();
	cout<<"Student name (Last, First, Initial): ";
	getline(cin, student_name_3);
	
	cout<<"Student ID: ";
	getline(cin, student_id_3);
	
	cout<<"Grade: ";
	cin.get(grade_3);
	junk=cin.get();
	
	cout<<"Course Average: ";
	cin>>avg_3;
	
	//-- END INPUT --

	//-- OUTPUT --
	cout << "\n\n"; // Style purpose
	cout << left << setw(30) << student_name_1 << setw(10) << student_id_1 << setprecision(4) << setw(2) << avg_1 << "%  " << grade_1 << endl << endl;
	cout << left << setw(30) << student_name_2 << setw(10) << student_id_2 << setprecision(4) << setw(2) << avg_2 << "%  " << grade_2 << endl << endl;
	cout << left << setw(30) << student_name_3 << setw(10) << student_id_3 << setprecision(4) << setw(2) << avg_3 << "%  " << grade_3 << endl << endl;
	// -- END OUTPUT --

	system("PAUSE > NULL");
	return 0;
}
/*
	--OUTPUT--

	Enter Student 1 Informations

	Student name (Last, First, Initial): Jones, Peter F.
	Student ID: 023543
	Grade: C
	Course Average: 78.4


	Enter Student 2 Informations

	Student name (Last, First, Initial): Krentz, John D.
	Student ID: 045666
	Grade: A
	Course Average: 92.3


	Enter Student 3 Informations

	Student name (Last, First, Initial): Small, Jennifer S.
	Student ID: 022334
	Grade: B
	Course Average: 82.1


	Jones, Peter F.               023543    78.4%  C

	Krentz, John D.               045666    92.3%  A

	Small, Jennifer S.            022334    82.1%  B


*/