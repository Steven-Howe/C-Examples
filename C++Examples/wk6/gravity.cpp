/*
Date: 6/25/2020
Author: Steven Howe
Assignment: gravity.cpp
Comments: Outputs the distance in meters that
an object falls over 10 seconds.
*/

#include <iostream>
#include <math.h>

using namespace std;

// Function prototype
double fallingDistance(int);

int main()
{
  // Declare variable, sets starting value for sentinel value
  int seconds = 1;
  
  // Sentinel controlled loop, completes 10 iterations
  while (seconds != 11)
  {
    // Outputs distance in meters for each second from 1 to 10
    cout << "In " << seconds << " seconds an object will fall " << fallingDistance(seconds) << " meters." << endl;

    // Increments seconds by 1 for each iteration
    seconds++;
  }

  return 0;
}
  
// Function definition
double fallingDistance(int seconds)
{
  // Calculates the distance an object falls in a specified amount of seconds and returns the value
  return 0.5 * (9.8 * pow(seconds, 2));
}
