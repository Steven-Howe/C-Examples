/*
CIS 215, Summer 2020
Date: 8/3/2020
Author: Steven Howe
Assignment: PointTest.cpp
Comments: Test file for Point class
*/

#include<iostream>
#include "Point.cpp"

using namespace std;

int main()
{	// Declare variables
	double x;
	double y;
			
	// Output purpose of the program
	cout << "This program will take X, Y coordinates of a point and output its quadrant location.\n" << endl;
	
	// Gets location of X coordinate from the user
	cout << "Enter the X coordinate you'd like to use: " << endl;
	cin >> x;
	
	// Gets location of X coordinate from the user
	cout << "\nEnter the Y coordinate you'd like to use: " << endl;
	cin >> y;
	
	// Point object creation
	Point coordinates(x, y);	
	
	// Sets X and Y coordinates
	coordinates.setXCoordinate(x);
	coordinates.setYCoordinate(y);

	// Outputs the quadrant location
	cout << coordinates.getLocation();
	
	return 0;
}
