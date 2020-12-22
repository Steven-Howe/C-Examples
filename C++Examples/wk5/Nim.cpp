/*
CIS 215, Summer 2020
Date: 6/19/2020
Author: Steven Howe
Assignment: Nim.cpp
Comments: Simulates the game Nim. There are 22
sticks in a pile. The player takes turns against
the computer. The one to pick up the last stick wins.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
  {
    // Declare variables
    bool humanPlayer;
    int nimSticks;
    int currentMove;

    // Print game instructions
    cout << "The name of this game is Nims.\n" << endl
      << "The game starts with 22 sticks in a pile. You have the choice of " << endl
      << "picking up either 1, 2, 3, or 4 sticks at a time. You will take turns " << endl
      << "facing against a computer. The one to pick up the last stick wins the game!" << endl
      << "You get to start the round first, good luck!\n" << endl;


    // Sets current player to human to start and sets amount of sticks
    humanPlayer = 1;
    nimSticks = 22;

    // Main game loop driver, will continue as long as there's sticks in the pile
    while (nimSticks != 0)
    {
      // Driver loop for the player's turn
      while (nimSticks != 0 && humanPlayer == 1)
      {
        cout << "\nIt's your turn to play!\n" << endl;

        // Shows current # of sticks in the pile and then gets player's choice
        cout << "There's " << nimSticks << " sticks currently in the pile." << endl;

        cout << "Choose the amount of sticks to pick up: ";
        cin >> currentMove;

	// Will output error if player's choice is outside 1-4 or bigger than the # of sticks left
	while ((currentMove <= 0 || currentMove > 4) || currentMove > nimSticks)
          {
	    cout << "You picked a number outside of 1-4 or chose a number higher than what's left for sticks. Try again!\n" << endl;
	    cin >> currentMove;
	  }
        // Subtracts the # of sticks chosen from the Nims pile
        nimSticks -= currentMove;
	
	// Outputs winner's message if there's no more sticks left in the pile after the player's turn
	if (nimSticks == 0)
	{
	  cout << "\nCongratulations, you won!" << endl;
	  return 0;
	}
        // If there's still sticks in the pile, player is set to the computer
	else
	{
          humanPlayer = 0;
	}
      }
      // Driver loop for the computer's turn
      while (nimSticks != 0 && humanPlayer == 0)
        {
          // Ouputs whose turn it is and how many sticks are currently in the pile
	  cout << "\nNow it's the computer's turn...\n" << endl;
	  cout << "There's " << nimSticks << " sticks currently in the pile." << endl;
          
	  // Generates a random number between 1 and 4 
	  srand(time(0));
	  currentMove = (rand() % 4) + 1;
          
	  // Adjusts computer's move if a higher value is picked than what's left in the pile
	  if (currentMove > nimSticks)
	  {
	    currentMove -= nimSticks;
	  }

	  else
	  {
            // Indicates how many sticks the computer took during its turn
	    cout << "The computer moved " << currentMove << " stick(s) from the pile." << endl;
	    nimSticks -= currentMove;
            
	    // Outputs that the computer won if there's no sticks left in pile after the computer's turn
	    if (nimSticks == 0)
	    {
              cout << "\nSorry, the computer won this time." << endl;
            }
            // If there's still sticks in the pile, player is set back to human player
	    else
	    {
              humanPlayer = 1;
	    }
	  }
        } // End of driver loop for computer
    } // End of main game loop driver


       return 0;
  }
