/*
Date: 7/15/2020
Author: Steven Howe
Assignment: BubbleSort.cpp
Comments: Takes a randomly sorted array
and sorts it using the bubble sort method.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Declare variable
int const ARRAY_SIZE = 10;

// Declare an array
int myArray[ARRAY_SIZE];

// Function prototype
void printArray(int myArray[], int ARRAY_SIZE);

int main()
{
	// Outputs the purpose of the program
	cout << "This program will start with a randomly sorted array " <<
	        "and then sort it using the bubble sort method, step by step." << endl;

	// Generates seed for random function
	srand(time(0));


	// Adds 10 random numbers into the array
	for (int counter = 0; counter < ARRAY_SIZE; counter++)
	{
		// Generates random number between 1 - 100 and adds it to array
		myArray[counter] = (rand() % 100) + 1;
	}
	
	// Prints the randomly sorted array to the screen
	cout << "\nThe array before being sorted is:" << endl;
	printArray(myArray, ARRAY_SIZE);
	cout << endl;
	
	// Buble sort algorithm, continues to iterate while swapping is still occuring
	// Continues until all ints have been sorted least to greatest
	bool swapped = true;
	do
	{
		// Resets swapped bool for each iteration
		swapped = false;
		for (int index = 0; index < ARRAY_SIZE -1; index++)
		
			// Will swap values if first index is greater than the second
			if (myArray[index] > myArray[index + 1])
			{
				swap(myArray[index], myArray[index + 1]);
				swapped = true;
			}
	
	
		// Prints the array in the process of being sorted
		cout << "\nThe array currently being sorted is:" << endl;
		printArray(myArray, ARRAY_SIZE);
		
		// Stops execution of program until user presses enter key
		cout << "\nPress enter to continue." << endl;
		cin.ignore();
		
	} while (swapped);
	
	// Prints the array after it's been completely sorted
	cout << "\nThe array after being sorted is:" << endl;
	printArray(myArray, ARRAY_SIZE);
	cout << endl;

	return 0;
}

// Function definition
void printArray(int myArray[], int ARRAY_SIZE)
{
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		cout << myArray[index] << " ";
	}
}
