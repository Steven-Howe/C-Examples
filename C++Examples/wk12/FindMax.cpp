/*
CIS 215, Summer 2020
Date: 8/10/2020
Author: Steven Howe
Assignment: FindMax.cpp
Comments: Creates an array of 10 numbers then prints 
the largest value and its address.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Declare variable
int const ARRAY_SIZE = 10;

// Declare array
int numbers[ARRAY_SIZE];

// Function prototype
void printArray(int numbers[], int ARRAY_SIZE);

int main()
{	
	// Outputs the purpose of the program
	cout << "This program will randomly generate an array of 10 numbers "
	     << "it will then output the largest number, it's address, "
	     << "and also the address of the array.\n" << endl;
	     
	// Generates seed for random function
	srand(time(0));
	
	// Loops and assigns 10 numbers between 1 - 100 to the array
	for (int counter = 0; counter < ARRAY_SIZE; counter++)
	{
		// Generates random number between 1 - 100 and adds it to array
		numbers[counter] = (rand() % 100) + 1;
	}
	
	printArray(numbers, ARRAY_SIZE);
	
	return 0;
}

// Function definition
void printArray(int numbers[], int ARRAY_SIZE)
{
	cout << "The array includes the numbers: " << endl;
	
	// Iterates over list and outputs each value
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << numbers[i] << " ";
	}
	
	// Finds largest number and assigns memory address to a pointer
	int* pMax = max_element(numbers, numbers + ARRAY_SIZE);
	
	cout << "\n\nThe address of the largest number is: " << pMax << endl;
	cout << "\nThe value of the largest number is: " << *pMax << endl;
	cout << "\nThe address of the array is: " << &numbers << endl;
	
	
	

}
