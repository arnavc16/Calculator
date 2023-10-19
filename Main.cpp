// Name: Arnav Chandan
// TRU ID: T00630177

#include <iostream>
#include "BasicCalculator.cpp"
#include "ScientificCalculator.cpp"
using namespace std;

// main function
int main()
{
    // required variables
    double num1, num2;
    int operation, choice;

    cout << "\n#########################################################\n";
    cout << "#########################################################\n";
    cout << "####################CALCULATOR###########################\n";
    cout << "#########################################################\n";
    cout << "#########################################################\n\n";

    do
    {
        // print the choices of calculators
        cout << "Menu:\n1. Basic Calculator\n2. Scientific Calculator\n0. Exit" << endl;
        // input the choice of calculator
        cout << "\nYour choice: ";
        cin >> choice;

        // if the user selects to use a basic calculator
        if (choice == 1)
        {
            do
            {
                // declare a BasicCalculator object
                BasicCalculator *BasicCalc;
                // print the basic calculator operations & get the user's input
                operation = BasicCalculator::printMenu();

                // if the user selects a valid operation
                if (operation >= 1 && operation <= 4)
                {
                    // input two numbers
                    cout << "Enter first number: ";
                    cin >> num1;
                    cout << "Enter second number: ";
                    cin >> num2;
                    // instantiate the calculator with the inputted values
                    BasicCalc = new BasicCalculator(num1, num2);
                }
                // for the square root and square operations only one number is required
                else if (operation == 5 || operation == 6)
                {
                    // input a single number
                    cout << "Enter a number: ";
                    cin >> num1;
                    // instantiate the calculator with the inputted value & 0
                    BasicCalc = new BasicCalculator(num1, 0);
                }
                // else the user selects to quit the basic calculator
                else
                {
                    // diplay an appropriate message and break the loop
                    cout << "Quitting calculator" << endl;
                    break;
                }

                // switch the valid operation, invoke the corresponding operation & display the result
                switch (operation)
                {
                case 1:
                    BasicCalc->Addition();
                    break;
                case 2:
                    BasicCalc->Subtraction();
                    break;
                case 3:
                    BasicCalc->Multiplication();
                    break;
                case 4:
                    BasicCalc->Division();
                    break;
                case 5:
                    BasicCalc->SquareRoot();
                    break;
                case 6:
                    BasicCalc->Square();
                    break;
                default:
                    break;
                }
            } while (operation != 0); // loop till the user selects to quit the basic calculator
        }

        // else if the user selects to use a scientific calculator
        else if (choice == 2)
        {
            do
            {
                // declare a ScientificCalculator object
                ScientificCalculator *ScientificCalc;
                // print the scientific calculator operations & get the user's input
                operation = ScientificCalculator::printMenu();

                // if the user selects a valid operation
                if (operation >= 1 && operation <= 8)
                {
                    // input a single number
                    cout << "Enter a number: ";
                    cin >> num1;
                    // instantiate the calculator with the inputted value
                    ScientificCalc = new ScientificCalculator(num1, num2);
                }
                else if (operation == 9)
                {
                    // input a single number
                    cout << "Enter a number: ";
                    cin >> num1;
                    cout << "Enter the power: ";
                    cin >> num2;
                    // instantiate the calculator with the inputted value
                    ScientificCalc = new ScientificCalculator(num1, num2);
                }
                // else the user selects to quit the scientific calculator
                else
                {
                    // diplay an appropriate message and break the loop
                    cout << "Quitting calculator" << endl;
                    break;
                }

                // switch the valid operation & display the result
                switch (operation)
                {
                case 1:
                    ScientificCalc->Sine();
                    break;
                case 2:
                    ScientificCalc->SineInverse();
                    break;
                case 3:
                    ScientificCalc->Cosine();
                    break;
                case 4:
                    ScientificCalc->CosineInverse();
                    break;
                case 5:
                    ScientificCalc->Tangent();
                    break;
                case 6:
                    ScientificCalc->TangentInverse();
                    break;
                case 7:
                    ScientificCalc->Logarithm();
                    break;
                case 8:
                    ScientificCalc->Logarithm_Base_10();
                    break;
                case 9:
                    ScientificCalc->Power();
                    break;
                default:
                    break;
                }
            } while (operation != 0); // loop till the user selects to quit the scientific calculator
        }

        // else if the user selects to exit
        else if (choice == 0)
            cout << "END" << endl;

        // else the user selects an invalid choice
        else
            cout << "Invalid choice!" << endl;

        cout << endl;
    } while (choice != 0); // loop till the user selects to exit the program
    return 0;
}