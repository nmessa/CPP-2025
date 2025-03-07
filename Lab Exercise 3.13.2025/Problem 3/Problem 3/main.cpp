//Lab Exercise 3.13.2025 Problem 3
//Author: nmessa

#include <iostream>
#include <string>
using namespace std;

#define SIZE 10

//Function prototypes
void sortNames(string []);
void displayNames(string []);

int main()
{
	string names[SIZE] = {"James", "Mary", "Bob", "Eric", "Zeke", "Alex", 
		"Fred", "Erin", "Max", "Parker"};
	cout << "Original list of names: " << endl;
	displayNames(names);
	sortNames(names);
	cout << "\n\n\nList of names after sorting:" << endl;
	displayNames(names);
	return 0;
}

//Sorts an array of names in ascending order
void sortNames(string n[])
{
	for (int outer=0; outer < SIZE; outer++)
	{
		for (int inner = 0; inner < SIZE - 1 -outer; inner++)
		{
			if (n[inner] > n[inner+1])
				swap(n[inner], n[inner+1]);
		}
	}
}

//Displays an array of names
void displayNames(string n[])
{
	for (int i = 0; i < SIZE; i++)
		cout << n[i] << endl;
}

//Output
//Original list of names:
//James
//Mary
//Bob
//Eric
//Zeke
//Alex
//Fred
//Erin
//Max
//Parker
//
//
//
//List of names after sorting:
//Alex
//Bob
//Eric
//Erin
//Fred
//James
//Mary
//Max
//Parker
//Zeke
