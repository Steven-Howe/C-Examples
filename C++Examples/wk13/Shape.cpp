/*
CIS 215, Summer 2020
Date: 8/13/2020
Author: Steven Howe
Assignment: Shape.cpp
Comments: Shape.cpp class implementation file
*/

// defining the functions in the Shape class that are not virtual

#include "Shape.h"

Shape::Shape()
{
	color = "white";
	filled = false;
}

Shape::Shape(string color, bool filled)
{
	setColor(color);
	setFilled(filled);
}

string Shape::getColor() const
{
	return color;
}

void Shape::setColor(string myColor)
{
	color = myColor;
}

bool Shape::isFilled() const
{
	return filled;
}

void Shape::setFilled(bool myFilled)
{
	filled = myFilled;
}
