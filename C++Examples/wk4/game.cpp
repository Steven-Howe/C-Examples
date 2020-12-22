/*
CIS 215, Summer 2020
Date: 6/10/20
Author: Rob Rapalus
Assignment: Week 4 Number Guessing
Comments: Written in TextPad
*/#include <iostream>
#include <ctime> //time function
#include <cstdlib> //rand and srand functions
using namespace std;int main()
{
	//Establish variables and random number generation
	srand(time(0));
	int number = (rand() % 100) + 1;
	int guess;
	int attempts = 0;
	//Identify input
	cout << "Try to guess the number I've picked!" << endl;	//Pre-test sentinal controlled loop. I selected this structure because it's most straight-forward way to achieve the solution we want.
	//It does not rely on any increment or decrement (counter controlled) and I prefer variable names more descriptive than single characters (like 'for' loops).
	//A do-while or for loop would also be more complex, and at this point, I want to keep things simple for debugging and reference later.
	while (guess != number) //This is the loop continuation condition
	{
		cout << "Your guess: ";
		cin >> guess;
		if (guess == number)
		{
			attempts++;
			cout << "\nThat's right! The number was " << number << endl;
			cout << "It took you " << attempts << " guesses to guess the correct number." << endl;
		}
		else if (guess < number)
		{
			cout << "\nNope! That number is too low!" << endl;
			attempts++;
		}
		else
		{
			cout << "\nNope! That number is too high!" << endl;
			attempts++;
		}
	}
	return 0;
}
