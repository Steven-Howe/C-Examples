/*
CIS 215, Summer 2020
Date: 8/3/2020
Author: Steven Howe
Assignment: Point.h
Comments: Header file for class Point
*/

#ifndef POINT_H
#define POINT_H

#include <string>

using namespace std;

class Point
{
	// Public class members
	public:
		// Functions
		void setXCoordinate(double);
		void setYCoordinate(double);
		string getLocation();
		
		
		// Accessors
		double getXCoordinate() const;
		double getYCoordinate() const;
		
		
		// Constructors
		Point();
		Point(double, double);


	// Private class members
	private: 
		double xCoordinate;
		double yCoordinate;
};

#endif
