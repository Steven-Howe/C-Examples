/*
CIS 215, Summer 2020
Date: 8/13/2020
Author: Steven Howe
Assignment: TriangleTest.cpp
Comments: Test file for the Triangle class
*/

#include "Triangle.cpp"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	// Outputs the purpose of the program
	cout << "This program will gather the triangle side lengths from the user "
	     << "and then calculate and output the perimeter and area and also the color.\n" << endl;
	     
	// Instantiate the object
	Triangle myTriangle;
	
	// Declare local variables
	double s1;
	double s2;
	double s3;
	
	// Obtains user input for first side, makes sure it's a valid number
	string userInput1 = "";
	while(true)
	{
		cout << "Enter the length you'd like to use for side1: ";
		getline(cin, userInput1);
		stringstream myStream(userInput1);
		if(myStream >> s1)
		{
    			break;
		}
		cout << "Invalid number, please try again." << endl;
	}
	
	// Obtains user input for second side, makes sure it's a valid number
	string userInput2 = "";
	while(true)
	{
		cout << "Enter the length you'd like to use for side2: ";
		getline(cin, userInput2);
		stringstream myStream(userInput2);
		if(myStream >> s2)
		{
    			break;
		}
		cout << "Invalid number, please try again." << endl;
	}
	
	// Obtains user input for third side, makes sure it's a valid number
	string userInput3 = "";
	while(true)
	{
		cout << "Enter the length you'd like to use for side3: ";
		getline(cin, userInput3);
		stringstream myStream(userInput3);
		if(myStream >> s3)
		{
    			break;
		}
		cout << "Invalid number, please try again." << endl;
	}
	
	// Set the user-defined lengths of the triangle
	myTriangle.setSide(s1, s2, s3);

	// Set the color of the triangle
	myTriangle.setColor("blue");
	cout << "\nThe color of the triangle has been set to blue.\n" << endl;
	
	// Output statements
	cout << "\nThe color of the triangle is: " << myTriangle.getColor() << endl;
	cout << "The perimeter of the triangle is: " << myTriangle.getPerimeter() << endl;
	cout << "The area of the triangle is: " << myTriangle.getArea() << endl;

	return 0;
}

