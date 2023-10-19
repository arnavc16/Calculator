// Name: Arnav Chandan
// TRU ID: T00630177

#ifndef BASIC_CALCULATOR_H
#define BASIC_CALCULATOR_H

#include <iostream>
using namespace std;

class BasicCalculator					// create a class named BasicCalculator
{
private:
	double n1, n2;						// data members

public:
	BasicCalculator(double, double);	// declare constructor

	static int printMenu();				// declare member functions
	void Addition();
	void Subtraction();
	void Multiplication();
	void Division();
	void SquareRoot();
	void Square();

	double getNum1();					// declare accessor
	double getNum2();					// declare accessor
	
	void setNum1(double);				// declare mutator
	void setNum2(double);				// declare mutator

	~BasicCalculator();					// declare destructor
};

#endif
