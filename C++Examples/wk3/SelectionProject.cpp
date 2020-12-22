/*
CIS 215, Summer 2020
Date: 6/5/2020
Author: Steven Howe
Assignment: SelectionProject.cpp
Comments: Takes two user input values and prints the sum, difference, product, 
quotient, and modulus
*/

#include <iostream>
using namespace std;

int main()
{
  // Declare variables
  int userValue1;
  int userValue2;
  int sum;
  int difference;
  int product;
  double quotient;
  int modulus;

  // Print instructions to screen
  cout << "Enter two numbers and this program will find the sum, diference,"
  << " product, quotient, and modulus.\n";

  // Get numbers from user
  cout << "Enter value 1: " << endl;
  cin >> userValue1;
  cout << "\nEnter value 2: " << endl;
  cin >> userValue2;

  // Print error message if value 2 is zero
  if (userValue2 == 0)
    {
      cout << "Pick a number other than 0 because in ordinary arithmetic "
      << "division by zero is undefined.\n";
      return 1;
    }
  // If value 2 isn't zero continue with calculations
  else
    {
      // Calculate sum
      sum = userValue1 + userValue2;
      // Calculate difference
      difference = userValue1 - userValue2;
      // Calculate product
      product = userValue1 * userValue2;
      // Calculate quotient and cast int to double
      quotient = static_cast<double>(userValue1) / userValue2;
      // Calculate modulus
      modulus = userValue1 % userValue2;

      // Print calculation messages to screen
      cout << "\nThe sum of " << userValue1 << " and " << userValue2 << " is " << sum;
      cout << "\nThe difference of " << userValue1 << " and " << userValue2 << " is " << difference;
      cout << "\nThe product of " << userValue1 << " and " << userValue2 << " is " << product;
      cout << "\nThe quotient of " << userValue1 << " and " << userValue2 << " is " << quotient;
      cout << "\nThe modulus of " << userValue1 << " and " << userValue2 << " is " << modulus << "\n";
    }

  return 0;
}
