/*
CIS 215, Summer 2020
Date: 8/8/2020
Author: Steven Howe
Assignment: Functions2.cpp
Comments: Takes three numbers and sorts them in ascending order.
*/

#include <iostream>
#include <sstream>

using namespace std;

// Declare variables
int num1;
int num2;
int num3;

// Function prototype
void sortedNumbers(int, int, int);

int main()
{	// Outputs the purpose of the program
	cout << "This program will take 3 integer numbers and return them"
	     << " in ascending order." << endl;
	     
	// Obtains user input for first number, makes sure it's a valid number
	string userInput1 = "";
	while(true)
	{
		cout << "\nEnter the first integer number: ";
		getline(cin, userInput1);
		stringstream myStream(userInput1);
		if(myStream >> num1)
		{
    			break;
		}
		cout << "Invalid number, please try again." << endl;
	}
	
	// Obtains user input for second number, makes sure it's a valid number
	string userInput2 = "";
	while(true)
	{
		cout << "\nEnter the second integer number: ";
		getline(cin, userInput2);
		stringstream myStream(userInput2);
		if(myStream >> num2)
		{
    			break;
		}
		cout << "Invalid number, please try again." << endl;
	}
	
	// Obtains user input for third number, makes sure it's a valid number
	string userInput3 = "";
	while(true)
	{
		cout << "\nEnter the third integer number: ";
		getline(cin, userInput3);
		stringstream myStream(userInput3);
		if(myStream >> num3)
		{
    			break;
		}
		cout << "Invalid number, please try again." << endl;
	}
	
	// Function sorts numbers least to greatest and outputs numbers
	sortedNumbers(num1, num2, num3);
	
	return 0;
}

// Function prototype
void sortedNumbers(int num1, int num2, int num3)
{	
	// Declare variables and array
	int const ARRAY_SIZE = 3;
	int myArray[ARRAY_SIZE] = {num1, num2, num3};
	
	// Bubble sort algorithm, continues to iterate while swapping is still occuring
	// Continues until all ints have been sorted least to greatest
	bool swapped = true;
	do
	{
		// Resets swapped bool for each iteration
		swapped = false;
		for (int index = 0; index < ARRAY_SIZE -1; index++)
		{
			// Will swap values if first index is greater than the second
			if (myArray[index] > myArray[index + 1])
			{
				swap(myArray[index], myArray[index + 1]);
				swapped = true;
			}
		}
	} while (swapped);
	
	// Outputs numbers in ascending order
	cout << "\nThe numbers sorted are: " << myArray[0] << ", " << myArray[1] 
	     << ", " << myArray[2] <<endl;
}
