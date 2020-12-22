/*
CIS 215, Summer 2020
Date: 7/26/2020
Author: Steven Howe
Assignment: Craps.cpp
Comments: Simulates a simple game of Craps.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Declare Variables
int roll;

// Function Prototype
int rollDice();

// Main Function
int main()
{
	// Sets seed for the random function in rollDice()
	srand(time(0));
	
	// Prints program's purpose
	cout << "This program simulates the game of Craps.\n" << endl
	  << "If you roll a 7 or 11 on the first roll you win!" << endl
	  << "If you roll a 2, 3, or 12 on the first roll you loose." << endl
	  << "Otherwise, you must continue to roll until you roll the" << endl
	  << "original amount again or if you roll a 7 you loose!" << endl;
	
	// Rolls the dice for the "come out roll" and keeps track of the point value
	roll = rollDice();
	
	// Selection structure for first roll, exits if 7, 11, 2, 3, or 11 rolled	
	if (roll == 7 or roll == 11)
	{
		cout << "\nCongratulations you won by rolling a " << roll << endl;
	}
	else if (roll == 2 or roll == 3 or roll == 12)
	{
		cout << "\nSorry you lost by rolling a " << roll << endl;
	}
	else
	{	
		// Second roll
		cout << "\nYou may roll again by pressing Enter!" << endl;
		cin.ignore();
		int newRoll = rollDice();
		bool playing = true;
		
		// Looping structure for 2nd roll, exits if 7 or point rolled, otherwise rolling dice continues
		do
		{
			if (newRoll == roll)
			{
				cout << "\nCongratulations you won by rolling the point: " << roll << endl;
				playing = false;
			}
			else if (newRoll == 7)
			{
				cout << "\nSorry you lost by rolling a 7" << endl;
				playing = false;
			}
			else
			{
				cout << "\nYou may roll again by pressing Enter!" << endl;
				cin.ignore();
				newRoll = rollDice();
			}
		} while (playing);
	}
	return 0;
}

// Function Definition
int rollDice()
{
	// Declares variable
	int point;
	
	// Generates the random number for each die
	int die1 = (rand() % 6) + 1;
	int die2 = (rand() % 6) + 1;

	// Determines the Point value
	point = die1 + die2;
	
	// Prints out the values of each die and the point value
	cout << "\nYou rolled on Die1: " << die1 << endl;
	cout << "You rolled on Die2: " << die2 << endl;
	cout << "The Point is: " << point << endl;
	
	// Returns the sum of the die as point
	return point;
}
