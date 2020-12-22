/*
CIS 215, Summer 2020
Date: 8/21/2020
Author: Steven Howe
Assignment: Polymorphism.cpp
Comments: Demonstrates polymorphism using a base class and
three derived classes and an implementation section.
*/

#include <iostream>
#include <string>

using namespace std;

// The base class
class Vehicle
{
	public:
		Vehicle()
		{
			cout << "Calling the Vehicle constructor.\n" << endl;		
		}
		
		string getName()
		{
			return name;
		}
		
		void setName(string vehicleName)
		{
			name = vehicleName;
		}
		
		virtual void purpose() = 0;
	
	private:
		string name;
		
}; // End of Vehicle class

// Derived classes
class FireTruck: public Vehicle
{
	public:
		FireTruck(string vehicleName)
		{	
			cout << "Calling the FireTruck constructor." << endl;
			setName(vehicleName);
			cout << "I'm a: " << getName() << endl;
		}
		
		// Function overrides the Vehicle purpose function
		void purpose()
		{
			cout << "My purpose is to help put out fires!" << endl;
		}
		
		// Function to extend base class
		void turnOnSirens()
		{
			cout << "The sirens have been turned on!\n" << endl;
		}

}; // End of class FireTruck

class PoliceCar: public Vehicle
{
	public:
		PoliceCar(string vehicleName)
		{	
			cout << "Calling the PoliceCar constructor." << endl;
			setName(vehicleName);
			cout << "I'm a: " << getName() << endl;
		}
		
		// Function overrides the Vehicle purpose function
		void purpose()
		{
			cout << "My purpose is to help put the bad guys in jail!" << endl;
		}
		
		// Function to extend base class
		void turnOnSirens()
		{
			cout << "The sirens have been turned on!\n" << endl;
		}

}; // End of class PoliceCar

class Ambulance: public Vehicle
{
	public:
		Ambulance(string vehicleName)
		{	
			cout << "Calling the Ambulance constructor." << endl;
			setName(vehicleName);
			cout << "I'm an: " << getName() << endl;
		}
		
		// Function overrides the Vehicle purpose function
		void purpose()
		{
			cout << "My purpose is to help bring sick people to the hospital!" << endl;
		}
		
		// Function to extend base class
		void turnOnSirens()
		{
			cout << "The sirens have been turned on!\n" << endl;
		}

}; // End of class Ambulance

// Testing of the classes
int main()
{
	FireTruck ladderTruck("Fire Truck");
	ladderTruck.purpose();
	ladderTruck.turnOnSirens();
	
	PoliceCar canineUnit("Police Car");
	canineUnit.purpose();
	canineUnit.turnOnSirens();

	Ambulance EMS("Ambulance");
	EMS.purpose();
	EMS.turnOnSirens();
	
	return 0;
}
