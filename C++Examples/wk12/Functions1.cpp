/*
CIS 215, Summer 2020
Date: 8/8/2020
Author: Steven Howe
Assignment: Functions1.cpp
Comments: Takes two numbers and returns sum and quotient.
*/

#include <iostream>
#include <sstream>

using namespace std;

// Declare variables
int num1;
int num2;

// Function prototypes
int myAdd(int, int);
double myDivide(int, int);

int main()
{
	cout << "This program will output the sum and quotient of two numbers." << endl;
	
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
	
	// Outputs the sum and quotient of the two numbers
	cout << "\nThe sum of the two numbers is: " << myAdd(num1, num2) << endl;
	cout << "The quotient of the two numbers is: " << myDivide(num1, num2) << endl;

	return 0;
}

// Function definitions
int myAdd(int num1, int num2)
{
	return num1 + num2;
}

double myDivide(int num1, int num2)
{
	return static_cast<double>(num1) / num2;
}
