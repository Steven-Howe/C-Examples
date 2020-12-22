/*
CIS 215, Summer 2020
Date: 8/13/2020
Author: Steven Howe
Assignment: Shape.h
Comments: Shape.h class file
*/

// inheritance from an abstract base class

#ifndef SHAPE_H
#define SHAPE_H
#include <string>  // required for the string variable
using namespace std;  // required for the string variable

// an abstract base class
class Shape
{	
	// directly accessible in the Shape class and all derived classes
	protected:
	// abstract classes need constructors to initialize private members
		Shape();
		Shape(string color, bool filled);
		double area;
		double perimeter;
		
	public: // directly accessible outside the Shape class and derived classes
		string getColor() const;
		void setColor(string color);
		bool isFilled() const;
		void setFilled(bool filled);
		
		// virtual functionsmean that this is an abstract class
		// all of the shape derived classes will have to override the getArea and getPerimeter functions
		virtual double getArea() const = 0;
		virtual double getPerimeter() const = 0;
	
	private: // not directly accessible outside the Shape class
		string color;
		bool filled;
};
#endif
