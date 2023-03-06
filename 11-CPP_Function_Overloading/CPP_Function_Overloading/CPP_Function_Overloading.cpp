/*
Basic C++ Programs
By J RAJAN
For Learners
Title: FUNCTION OVERLOADING
*/

#include <iostream>

using namespace std;

//Two functions of same name but have different parameters
void area(int r);
void area(int x, int y);

int main()
{
    cout << "Overloading in C++\n";

    cout << "\nFunction Overloading";

    cout << "\nEnter radius of circle : ";
    int r;
    cin >> r;
    area(r); //Function identification based on number of inputs

    cout << "\nEnter sides of rectangle. \nEnter X : ";
    int x;
    cin >> x;
    cout << "\nEnter Y : ";
    int y;
    cin >> y;
    area(x, y); //Function identification based on number of inputs 



}

//Function Definitions
void area(int r)
{
    cout << "\nArea of Circle = " << 0.5 * 3.14 * r * r;
}

void area(int x, int y)
{
    cout << "\nArea of Rectangle = " << x * y;
}