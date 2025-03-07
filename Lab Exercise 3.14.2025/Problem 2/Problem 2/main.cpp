//Lab Exercise 3/14/2025 Problem 2
//Author: nmessa

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << pow(2.0, n) << "   ";
	for (n = 10; n <= 40; n += 10)
		cout << pow(2.0, n) << "   ";
	cout << endl;
	return 0;
}

//Output
//1   1024   1.04858e+006   1.07374e+009   1.09951e+012