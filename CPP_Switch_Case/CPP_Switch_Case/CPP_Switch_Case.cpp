/*
Basic C++ Programs
By J RAJAN
For Learners
Title: SWITCH CASE
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a Number to check Month : ";
    int month;
    cin >> month;

    switch (month)                            //Swithing the variable "month"
    {
                                             //Various cases
        case 1: 
        {
            cout << "\n Month is JANUARY";
            break;                          //To Stop Execution of SWITCH CASE
        }
        case 2:
        {
            cout << "\n Month is FEBRUARY";
            break;
        }
        case 3:
        {
            cout << "\n Month is MARCH";
            break;
        }
        case 4:
        {
            cout << "\n Month is APRIL";
            break;
        }
        case 5:
        {
            cout << "\n Month is MAY";
            break;
        }
        case 6:
        {
            cout << "\n Month is JUNE";
            break;
        }
        case 7:
        {
            cout << "\n Month is JULY";
            break;
        }
        case 8:
        {
            cout << "\n Month is AUGUST";
            break;
        }
        case 9:
        {
            cout << "\n Month is SEPTEMBER";
            break;
        }
        case 10:
        {
            cout << "\n Month is OCTOBER";
            break;
        }
        case 11:
        {
            cout << "\n Month is NOVEMBER";
            break;
        }
        case 12:
        {
            cout << "\n Month is DECEMBER";
            break;
        }

        //Default case
        default:
        {
            cout << "\n INVALID MONTH";
            break;
        }
        
    }
}