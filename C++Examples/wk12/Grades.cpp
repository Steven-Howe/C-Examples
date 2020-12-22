/*
CIS 215, Summer 2020
Date: 8/8/2020
Author: Steven Howe
Assignment: Grades.cpp
Comments: Returns the letter grade of 10 number grades
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Declare variable
int const ARRAY_SIZE = 10;

// Declare array
int numbers[ARRAY_SIZE];

int main()
{	// Generates seed for random function
	srand(time(0));
	
	// Loops and assigns 10 numbers between 50 - 100 to the array
	for (int counter = 0; counter < ARRAY_SIZE; counter++)
	{
		// Generates random number between 50 - 100 and adds it to array
		numbers[counter] = rand() % (51) + 50;
	}

	// Determines and outputs the letter grade of each number in the array
	for (int counter = 0; counter < ARRAY_SIZE; counter++)
	{
		// Declare local variable
		char grade;
		
		// A Grade
		if (numbers[counter] >= 90)
		{
			grade = 'A';
		}
		// B Grade
		else if (numbers[counter] >= 80)
		{
			grade = 'B';
		}
		// C Grade
		else if (numbers[counter] >= 70)
		{
			grade = 'C';
		}
		// D Grade
		else if (numbers[counter] >= 60)
		{
			grade = 'D';
		}
		// F Grade
		else
		{
			grade = 'F';
		}
		
		// Outputs the number and the resulting letter grade
		cout << "The number: " << numbers[counter] << " results in a(n): " << grade << endl;
	}
	
	return 0;
}
