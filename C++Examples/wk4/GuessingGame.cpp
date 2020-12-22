/*
CIS 215, Summer 2020
Date: 6/10/2020
Author: Steven Howe
Assignment: GuessingGame.cpp
Comments: Picks a random number between 1 - 100 and the
player will guess what the number is. Hints will be given
to the player until the correct number is guessed.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
  // Declare variables
  int correctNum;
  int playerGuess;
  int rounds;

  // Sets seed for rand()
  srand(time(0));
  // Pick a random number between 1 - 100
  correctNum = (rand() % 100) + 1;

  // Output game instructions
  cout << "This is the Guessing Game. A random number between\n"
  << "1 - 100 has been chosen. You must guess the correct number\n"
  << "in order to win. You will get hints if your guess is lower\n"
  << "or higher. To quit the game enter'-1'. Good luck!\n" << endl;

  // Set the round counter
  rounds = 0;
  
  /* I used a sentinel controlled loop with a priming read. I chose
     this structure becuase it allows the player to keep guessing
     until they get the right number or it allows the player to
     exit the game at any time by entering -1. It is a more simplistic
     implementation compared to other constructs.
   */
  cout << "Enter your guess: " << endl;
  cin >> playerGuess;

  // Start of the sentinel controlled loop
  while (playerGuess != -1)
    {
      // Increment the round counter
      rounds++;

      // Selection structure
      if (playerGuess == correctNum)
      {
	// If number is guessed correctly, outputs message and exits program
        cout << "\nCongratulations you guessed the correct number!" << endl;
	cout << "It took you " << rounds << " guesses to guess the correct number.\n" << endl;
        return 0;
      }
        // If number is too low outputs message with hint
        else if (playerGuess < correctNum)
        {
          cout << "Your guess was too low.\n" << endl;
        }
	// If number is too high outputs message with hint
        else
        {
          cout << "Your guess was too high.\n" << endl;
        }

      // Get the player's guessed number
      cout << "Enter your guess: " << endl;
      cin >> playerGuess;
    }

return 0;
}
