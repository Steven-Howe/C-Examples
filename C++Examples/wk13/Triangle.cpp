/*
CIS 215, Summer 2020
Date: 8/13/2020
Author: Steven Howe
Assignment: Triangle.cpp
Comments: Triangle.cpp class implementation file
*/

#include "Triangle.h"
#include <math.h>

Triangle::Triangle()
{
	side1 = 1;
	side2 = 1;
	side3 = 1;
}

void Triangle::setSide(double s1, double s2, double s3)
{
	side1 = s1;
	side2 = s2;
	side3 = s3;
}

// getPerimeter function inherited from Shape
double Triangle::getPerimeter() const
{
	return side1 + side2 + side3;
}

// getArea function inherited from Shape
double Triangle::getArea() const
{
	double s = (side1 + side2 + side3) / 2;
	
	// May produce an error, -nan, if calculations produce a negative number
	// and tries to take its square root
	return sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
