/*
CIS 215, Summer 2020
Date: 5/28/2020
Author: Steven Howe
Assignment: Week 2 programming assignment, SumTheDigits.cpp
Comments: Sums all the digits of a user given integer
*/

#include <iostream>
using namespace std;

int main()
{
	// Declare variables
	int userValue;
	int sum;
	
	// Print instructions for input
	cout << "Input a number from 0 to 999: ";

	// Get integer from user
	cin >> userValue;

	// Get 1's value int and add to sum
	sum = userValue % 10;
	userValue /= 10;

	// Get 10's value int and add to sum
	sum += userValue % 10;
	userValue /= 10;
	
	// Get 100's value int and add to sum
	sum += userValue % 10;
	
	// Output the sum of the digits
	cout << "The sum of the digits is: " << sum << endl;

	return 0;
}
