/*
Basic C++ Programs
By J RAJAN
For Learners
Title: RECURSION
*/


#include<iostream>

using namespace std;

// Factorial Function Declaration
long long int factorial(long long int num);  //"long long int" for very large numeric output

int main()
{

    long long int num;

    cout << "Enter a Number : ";
    cin >> num;

    long long int fact = factorial(num);
    cout << "\nFactorial of " << num << " = " << fact << "\n";

    return 0;
}

//Recursive Factorial Function Definition
long long int factorial( long long int num)
{
    if (num > 1)
        return num * factorial(num - 1); //Recursive function calls itself
    else
        return 1;                    //Make sure you avoid infinite loops
}