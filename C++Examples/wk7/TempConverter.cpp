/*
Date: 7/1/2020
Author: Steven Howe
Assignment: TempConverter.cpp
Comments: Takes a user given temperature and 
converts it either to Fahrenheit or Celsius
depending on the user's input.
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function prototype
double convertTemp(double, char);

int main()
{

  // Declare variables
  double temp;
  char tempType = {0};
  double convertedTemp;
  char newTempType;
  string input = "";

  // Output purpose of program
  cout << "This program will take a user given temperature " <<
	  "and convert it to either Celsius or Fahrenheit.\n" << endl;
	  
  // Loop will continue until a valid number is entered
  while (true)
  {
    // Get user input for temperature
    cout << "Enter the temperature you'd like to convert: " << endl;
    getline(cin, input);
    
    // Converts the string into a number
    stringstream myStream(input);
    
    // If valid, loop will break, otherwise it will continue to prompt user
    if(myStream >> temp)
    {
      break;
    }
    cout << "You must enter a valid temperature, try again!\n" << endl;
  }
  
  // Loop will continue until a valid number is entered
  while(true)
  {
    // Get user input for Celsius or Fahrenheit
    cout << "If the temperature you entered was Celsius, " <<
	    "enter 'C' or if Fahrenheit, enter 'F': " << endl;
    getline(cin, input);
    
    // If valid, loop will break, otherwise it will continue to prompt user
    if (input.length() == 1 && (input[0] == 'C' || input[0] == 'F'))
    {
      tempType = input[0];
      break;
    }
    cout << "You must enter a valid character, try again!\n" << endl;
  }
  
  // Call function to convert temperature with parameters
  convertedTemp = convertTemp(temp, tempType);
  
  // Get new temperature type
  if (tempType == 'C')
  {  
    newTempType = 'F';
  }
  else
  { 
    newTempType = 'C';
  }

  // Output converted temperature
  cout << "\nYour original temperature was: " << temp << " " << tempType << endl;
  cout << "The converted temperature is: " << convertedTemp << " " << newTempType << endl; 


  return 0;
}

// Function definition
double convertTemp(double temp, char tempType)
{
  // Will choose Celsius if char is C or Fahrenheit if F
  if (tempType == 'C')
  {
    // Converts Celsius to Fahrenheit
    return (9.0 / 5) * temp + 32;
  }
  else
  {
    // Converts Fahrenheit to Celsius
    return (5.0 / 9) * (temp - 32);
  }
}
