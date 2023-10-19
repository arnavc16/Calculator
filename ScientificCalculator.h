// Name: Arnav Chandan
// TRU ID: T00630177

#ifndef SCIENTIFIC_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_H

#include <iostream>
using namespace std;

// create a class named ScientificCalculator
class ScientificCalculator
{
private:
	// data member
	double x, y;

public:
	// declare constructor
	ScientificCalculator(double, double);

	// declare member functions
	static int printMenu();
	void Sine();
	void SineInverse();
	void Cosine();
	void CosineInverse();
	void Tangent();
	void TangentInverse();
	void Logarithm();
	void Logarithm_Base_10();
	void Power();

	// declare accessor
	double getX();
	double getY();

	// declare mutator
	void setX(double);
	void setY(double);

	// declare destructor
	~ScientificCalculator();
};

#endif

