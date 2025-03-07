//Lab Exercise 3/14/2025 Problem 4
//Author: nmessa

#include <iostream>
#include <iomanip>
using namespace std;
#define EPSILON 0.000001

int main()
{
	int n = 1, count = 0;
	double term, sum = 0.0;

	//Loop until term is less than EPSILON
	//If loop stops, convergence as occured
	do
	{
		//term = 1.0/(2*n-1);
		term = 1.0/n;
		sum += term;
		count++;
		//n++;
		n += 2;
		//cout << term << '\t' << sum << endl;
	}while (term > EPSILON);

	cout << fixed << showpoint << setprecision(8);
	cout << sum << '\t' << count << " terms" << endl;
	return 0;
}

//Output
//7.54293770      500001 terms