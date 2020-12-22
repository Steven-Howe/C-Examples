/*
CIS 215, Summer 2020
Date: 8/13/2020
Author: Steven Howe
Assignment: Triangle.h
Comments: Triangle.h class file
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.cpp"

class Triangle: public Shape
{
	public:
		Triangle();
		
		void setSide(double, double, double);

		// overriding Shape's virtual functions
		double getArea() const;
		double getPerimeter() const;
	
	private:
		double side1;
		double side2;
		double side3;
};
#endif
