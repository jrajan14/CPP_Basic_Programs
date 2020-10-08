/*
Basic C++ Programs
By J RAJAN
For Learners
Title: BASIC ARITHMATIC
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter Two Numbers\n";
    cout << "\nEnter First 1st Number : ";
    int firstNumber, secondNumber;
    int additionResult, subtractionResult, multiplicationResult;
    int divisionResult;
    int remainderValue;

    cin >> firstNumber;
    cout << "\nEnter Second Number : ";
    cin >> secondNumber;

    //Main Calculations
    additionResult = firstNumber + secondNumber;       //Addition
    subtractionResult = firstNumber - secondNumber;    //Subtraction
    multiplicationResult = firstNumber * secondNumber; //Multiplication
    divisionResult = firstNumber / secondNumber;       //Division (Without Remainder)
    remainderValue = firstNumber % secondNumber;       //Remainder value
   
    cout << "\n\nAddition Result = " << additionResult;
    cout << "\nSubtraction Result = " << subtractionResult;
    cout << "\nMultiplication Result = " << multiplicationResult;
    cout << "\nDivision Result = "  << divisionResult;
    cout << "\nRemainder value = " << remainderValue;


}
