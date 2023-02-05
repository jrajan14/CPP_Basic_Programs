/*
Basic C++ Programs
By J RAJAN
For Learners
Title: BASIC ARITHMATIC
*/


#include <iostream>

using namespace std;

/**********************************************************************************************
In C++, all the custom functions needs to be mentioned before the 'main' function.
These can be either declared before the 'main' function or defined before the 'main' function.
In our case, we are defining all the additional functions before the main function.
***********************************************************************************************/

//Printing Hello world using function
void hello_world_function()
{
    cout << "\n hello world!";
}

//Printing given value using function
void print_given_value(int value)
{
    cout << "\nEntered value is : " << value;
}

//Adding two numbers using function
void add_two_numbers(int value_a, int value_b)
{
    int added_value = value_a + value_b;
    cout << "\nCombined value of inputs : " << added_value;
}

//Returning an incremented integer value by returning the new value
int print_returned_value(int value)
{
    cout << "\n Incrementing the input";
    int new_value;
    new_value = value + 1;

    return new_value;

}

//MAIN FUNCTION
int main()
{
    cout << "Simple Function in C++\n\n"; 

    cout << " 1. Print 'hello world!' using a function\n";
    cout << " 2. Print a number that you mention (Single input)\n";
    cout << " 3. Print addition of two numbers (Multiple inputs)\n";
    cout << " 4. Print incremented value by getting return value from function (get return value)\n";

    cout << "\n Select option No : ";
    int choice;
    cin >> choice;

    switch (choice)
    {
        case 1 :
        {
            hello_world_function(); //Hello world function is called here
            break;                  //Need to break after every case otherwise switch case will continue
        }
        
        case 2 :
        {
            cout << "\nEnter a  value : ";
            int num;
            cin >> num;
            print_given_value(num);
            break;
        }

        case 3 :
        {
            cout << "\nEnter First value : ";
            int first_value;
            cin >> first_value;

            cout << "\nEnter second value : ";
            int second_value;
            cin >> second_value;

            add_two_numbers(first_value, second_value);
            break;
        }

        case 4 :
        {
            cout << "\nEnter a number : ";
            int num;
            cin >> num;
            int return_value;
            return_value = print_returned_value(num);
            
            cout << "\n Returned value is : " << return_value;
            break;
        }

        default :
        {
            cout << "Invalid selection.";
            break;
        }
    
    }
}


