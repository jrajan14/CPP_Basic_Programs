/*
Basic C++ Programs
By J RAJAN
For Learners
Title: CONDITIONAL STATEMENTS
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a Number to check if it's EVEN or ODD : ";
    int inputNumber;
    cin >> inputNumber;

    if (inputNumber % 2 == 0)             //Main IF Condition
    {
        cout << "\nThe Number is EVEN";
    }
    else if (inputNumber %2 == 1)        //IF ELSE condition, this comes after IF condition
    {
        cout << "\nThe Number is ODD";
    }
    else                                 //ELSE statement, whatever doesn't fit in IF and IF ELSE conditions
    {
        cout << "\nINVALIED NUMBER";
    }
}

