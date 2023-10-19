// Name: Arnav Chandan
// TRU ID: T00630177

#include <cmath>
#include "BasicCalculator.h"

// define constructor
BasicCalculator::BasicCalculator(double n1, double n2)
{
	// initialize the data members to the given parameters
	this->n1 = n1;
	this->n2 = n2;
}

// method to print the menu & get user's choice
int BasicCalculator::printMenu()
{
	int operation;
	// display the menu of operations
	cout << "\nOperations:\n1. Addition		(+)\n2. Subtraction		(-)\n3. Multiplication	(*)" << endl;
	cout << "4. Division		(/)\n5. Square Root		(√)\n6. Square		(x^2)\n0. Quit" << endl;
	do
	{
		cout << "Enter an Operation: ";
		// get the user's choice of operation
		cin >> operation;
		// validate the user's choice
		if (operation < 0 || operation > 6)
			cout << "Invalid operation! Try again." << endl;
	} while (operation < 0 || operation > 6);

	// return the validated operation
	return operation;
}

// method to add two numbers
void BasicCalculator::Addition()
{
	cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
}

// method to subtract two numbers
void BasicCalculator::Subtraction()
{
	cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
}

// method to multiply two numbers
void BasicCalculator::Multiplication()
{
	cout << n1 << " x " << n2 << " = " << n1 * n2 << endl;
}

// method to divide two numbers
void BasicCalculator::Division()
{
	// check if the divisor is 0
	if (n2 == 0)
		// display an error message
		cout << "Error: Division by zero!" << endl;
	// else return the division result
	else
		cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
}

// method to find the square root of a number
void BasicCalculator::SquareRoot()
{
	cout << "Square root of " << n1 << " = " << sqrt(n1) << endl;
}

// method to find the square of a number
void BasicCalculator::Square()
{
	cout << n1 << " ^ 2 = " << pow(n1, 2) << endl;
}

// define accessors for both the operands
double BasicCalculator::getNum1() { return n1; }
double BasicCalculator::getNum2() { return n2; }

// define mutators
void BasicCalculator::setNum1(double n1) { this->n1 = n1; }
void BasicCalculator::setNum2(double n2) { this->n2 = n2; }

// define the destructor
BasicCalculator::~BasicCalculator() {}