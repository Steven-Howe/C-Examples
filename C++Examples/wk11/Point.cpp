/*
CIS 215, Summer 2020
Date: 8/3/2020
Author: Steven Howe
Assignment: Point.cpp
Comments: Implementation file for the rectangle class
*/

#include "Point.h"

// Implements the constructors
Point::Point()
{
	xCoordinate = 1.0;
	yCoordinate = 1.0;
}

Point::Point(double x, double y)
{
	xCoordinate = x;
	yCoordinate = y;
}

// Sets mutator functions
void Point::setXCoordinate(double x)
{
	xCoordinate = x;
}

void Point::setYCoordinate(double y)
{
	yCoordinate = y;
}

// Sets accessor functions
double Point::getXCoordinate() const
{
	return xCoordinate;
}

double Point::getYCoordinate() const
{
	return yCoordinate;
}

// Obtains coordinates and outputs quadrant location
string Point::getLocation()
{
	double x = getXCoordinate();
	double y = getYCoordinate();
	
	if (x == 0 && y == 0)
		return "\nThis point is located at the origin.\n";
	else if (x < 0 && y < 0)
		return "\nThis point is located in quadrant 3.\n";
	else if (x > 0 && y > 0)
		return "\nThis point is located in quadrant 1.\n";
	else if (x < 0 && y > 0)
		return "\nThis point is located in quadrant 2.\n";
	else
		return "\nThis point is located in quadrant 4.\n";

}
