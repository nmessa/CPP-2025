//Lab Exercise 5.13.2025 Problem 3
//Author: 

#include <iostream>
#include <sstream>
using namespace std;

//Add prototype for isBoiling here

int main()
{
	cout << boolalpha;
	cout << isBoiling("212F") << endl;
	cout << isBoiling("100C") << endl;
	cout << isBoiling("0F") << endl;

	return 0;
}

//Add code for isBoiling here

//Output
//true
//true
//false
