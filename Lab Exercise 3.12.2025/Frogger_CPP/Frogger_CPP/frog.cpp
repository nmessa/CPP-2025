//Frog class implementation file
//frog.cpp
//Author: nmessa

#include "frog.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

Frog::Frog(string n)
{
	name = n;
	frow = 20;
	fcol = 20;
	maxDistance = 0.0;
	srand(time(NULL));
	initialize();
}

void Frog::initialize()
{
	int i, j;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			marsh[i][j] = ' ';
}

void Frog::jump()
{
	int rNumber;
	rNumber = rand() % 5 + 1;
	switch (rNumber)
	{
		case 1: break;
		case 2: if (frow == ROWS - 1)
					break;
				marsh[frow][fcol] = '*';
				frow++;
				marsh[frow][fcol] = 'F';
				break;
		case 3: if (frow == 0)
					break;
				marsh[frow][fcol] = '*';
				frow--;
				marsh[frow][fcol] = 'F';
				break;
		case 4: if (fcol == COLS - 1)
					break;
				marsh[frow][fcol] = '*';
				fcol++;
				marsh[frow][fcol] = 'F';
				break;
		case 5: if (fcol == 0)
					break;
				marsh[frow][fcol] = '*';
				fcol--;
				marsh[frow][fcol] = 'F';
				break;
	}
	distance = calcDistance();
	if (distance > maxDistance)
	{
		maxDistance = distance;
	}
}

void Frog::display()
{
	int i, j;
	marsh[20][20] = 'S';
	system("CLS");
	cout << "This is " << name << "'s swamp" << endl;
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			cout << marsh[i][j] << ' ';
		cout << endl;
	cout << "You traveled " << maxDistance << " feet from home: " << endl;
}

double Frog::calcDistance()
{
	return sqrt(pow(abs(frow-20), 2.0) + pow(abs(fcol-20), 2.0));
}
