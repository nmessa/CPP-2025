//Lab Exercise 3/14/2025 Problem 3
//Author: nmessa

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#define EPSILON 0.000001

int main()
{
	int n = 0;
	double term1, term2;

	//Loop until the difference in the two terms is smaller
	//than EPSILON.  If loop ends convergence has occured
	do
	{
		term1 = double(n-2)/(n-5);  //term
		term2 = double((n+1)-2)/((n+1)-5); //next term
		n++;
		cout << term1 << '\t' << term2 << endl;
		//getch();
	}while (abs(term1 - term2) > EPSILON);
	cout << "\n\nTerms to converge: " << n << endl;
	cout << fixed << showpoint << setprecision(10);
	cout << "Final value: " << term2 << endl;
	return 0;
}

//Output
//Terms to converge: 1738
//Final value: 1.0017311021