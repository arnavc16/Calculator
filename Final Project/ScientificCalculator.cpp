// Name: Arnav Chandan
// TRU ID: T00630177

#include <cmath>
#include "ScientificCalculator.h"

// define constructor
ScientificCalculator::ScientificCalculator(double x, double y)
{
	// initialize the data member to the given parameter
	this->x = x;
	this->y = y;
}

// method to print the menu & get user's choice
int ScientificCalculator::printMenu()
{
	int operation;
	// display the menu of operations
	cout << "\nOperations:\n1. Sin\n2. Sin Inverse\n3. Cos\n4. Cos Inverse" << endl;
	cout << "5. Tan\n6. Tan Inverse\n7. Log\n8. Log with Base 10\n9. Power\n0. Quit" << endl;
	do
	{
		cout << "Enter an operation: ";
		// get the user's choice of operation
		cin >> operation;
		// validate the user's choice
		if (operation < 0 || operation > 9)
			cout << "Invalid operation! Try again." << endl;
	} while (operation < 0 || operation > 9);

	// return the validated operation
	return operation;
}

// method to find the sine of a number
void ScientificCalculator::Sine()
{
	cout << "Sine of " << x << " = " << sin(x) << endl;
}

// method to find the sine inverse of a number
void ScientificCalculator::SineInverse()
{
	cout << "Inverse Sine of " << x << " = " << asin(x) << endl;
}

// method to find the cosine of a number
void ScientificCalculator::Cosine()
{
	cout << "Cosine of " << x << " = " << cos(x) << endl;
}

// method to find the cosine inverse of a number
void ScientificCalculator::CosineInverse()
{
	cout << "Inverse Cosine of " << x << " = " << acos(x) << endl;
}

// method to find the tan of a number
void ScientificCalculator::Tangent()
{
	cout << "Tan of " << x << " = " << tan(x) << endl;
}

// method to find the tan inverse of a number
void ScientificCalculator::TangentInverse()
{
	cout << "Inverse Tan of " << x << " = " << atan(x) << endl;
}

// method to find the log of a number
void ScientificCalculator::Logarithm()
{
	cout << "Log of " << x << " = " << log(x) << endl;
}

// method to find the log with base 10 of a number
void ScientificCalculator::Logarithm_Base_10()
{
	cout << "Log with Base 10 of " << x << " = " << log10(x) << endl;
}

void ScientificCalculator::Power()
{
	cout << x << " to the power of " << y << " = " << pow(x, y) << endl;
}

// define  accessor
double ScientificCalculator::getX() { return x; }

// define mutator
void ScientificCalculator::setX(double x) { this->x = x; }

// define the destructor
ScientificCalculator::~ScientificCalculator() {}
