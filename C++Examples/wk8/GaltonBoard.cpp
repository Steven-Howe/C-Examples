/*
Date: 7/10/2020
Author: Steven Howe
Assignment: GaltonBoard.cpp
Comments: Takes a user-defined amount
of marbles and digitally simulates a
Galton board.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Declare variables
int numMarbles;
const int pegRows = 7;

// Declare array
int slots[8];

// Function prototype
char dropMarble();

int main()
{
	// Creates seed for random function located in dropMarble()
	srand(time(0));

	// Displays purpose of the program
	cout << "This program simulates a Galton Board using marbles.\n";

	// Gets number of marbles to use from user
	cout << "\nEnter the number of marbles you'd like to use: " << endl;
	cin >> numMarbles;
	
	// Loop will continue until there's no more marbles left to drop
	for (int marblesDropped = 0; marblesDropped < numMarbles; marblesDropped++)
	{	
		// Initializes marble's starting position
		int position = 0;
		
		// Marble runs through each of the peg rows and its direction is randomly determined
		for(int row = 0; row < pegRows; row++)
		{	
			// Keeps track of marble's direction	
			if (dropMarble() == 'R')
			{
				position += 1;
			}
			else
			{
				continue;
			}
		}
		// Adds a count to whatever the marble's final position is within the slots array
		slots[position] = slots[position] + 1;
		
	}

	// Prints out number of marbles in each of the 8 slots
        for(int index = 0; index < 8; index++)
        {
                cout << "The number of marbles in slot " << index << " is " << slots[index] << endl;
        }
	

	return 0;
}

// Function definition
char dropMarble()
{	
	// Will randomly pick either a 1, corresponding to a right, or a 0, corresponding to a left
	int direction = rand() % 2;

	if (direction == 1)
	{
		return 'R';
	}
	else
	{
		return 'L';
	}	
}
