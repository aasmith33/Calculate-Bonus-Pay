// Abigail-Smith-CPT-168-Lab-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	system("color f2");
	cout << "\t\t***************************\t\t" << endl;
	cout << "\t\t*      Abigail Smith      *\t\t" << endl;
	cout << "\t\t*   Calculate Bonus Pay   *\t\t" << endl;
	cout << "\t\t*                         *\t\t" << endl;
	cout << "\t\t***************************\t\t" << endl << endl;
	cout << fixed << setprecision(2);
	double salary = 0.0;
	int numYears = 0;
	double bonus = 0.0;

	cout << "Please enter your gross pay per year: ";
	cin >> salary;
	cout << "Please enter number of years you worked: ";
	cin >> numYears;
	if (numYears > 0)
	{
		if (numYears >= 1 && numYears <= 5)
		{
			bonus = salary * 0.01;
			cout << "Your bonus is: $" << bonus << endl << endl;
		}
		else
		{
			bonus = salary * 0.02;
			cout << "Your bonus is: $" << bonus << endl << endl;
		}
	}
	else
		cout << "Invalid number of years entered" << endl <<endl;
	cout << "T H A N K   Y O U" << endl << endl; 
	system("pause");
	return 0;
}
