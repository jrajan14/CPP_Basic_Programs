/*
Basic C++ Programs
By J RAJAN
For Learners
Title: LOOPS IN C++
*/

#include <iostream>

using namespace std;

//When function defition is written after the main function, other function declarations needs to be made above
void while_Loop_function();
void for_loop_function();
void do_while_loop_function();
void for_each_loop_function();
void nested_loops_function();

int main()
{
    int option;
    cout << "Loops in C++\n\n";
    
    cout << "1. While Loop\n";
    cout << "2. For Loop\n";
    cout << "3. Do While Loop\n";
    cout << "4. For Each Loop\n";        //Works on C++11 and above versions
    cout << "5. Nested Loops Loop\n\n";
    cout << "Select an Option : ";
    cin >> option;

    //Switch case to select which loop to execute
    switch (option)
    {
        case 1:
        {
            while_Loop_function();
            break;
        }
        case 2:
        {
            for_loop_function();
            break;
        }
        case 3:
        {
            do_while_loop_function();
            break;
        }
        case 4:
        {
            for_each_loop_function();
            break;
        }
        case 5:
        {
            nested_loops_function();
            break;
        }
        default:
        {
            cout << "Invalid Choice...\n";
        }
    }

}

// WHILE LOOP
void while_Loop_function()
{
    int first_num = 1;
    int last_num;
    cout << "\nPrinting Natural numbers using WHILE LOOP.\n";
    cout << "Enter Last digit of series to print : ";
    cin >> last_num;

    // While Loop Starts
    while (first_num <= last_num)
    {
        cout << first_num << " ";
        first_num++;
    }
}

// FOR LOOP
void for_loop_function()
{
    int last_num;
    cout << "\nPrinting Natural numbers using FOR LOOP.\n";
    cout << "Enter Last digit of series to print : ";
    cin >> last_num;

    // For Loop Starts
    for (int i = 1; i <= last_num; i++)
    {
        cout << i << " ";
    }
}

// DO WHILE LOOP
void do_while_loop_function()
{
    int first_num = 1;
    int last_num;
    cout << "\nPrinting Natural numbers using DO WHILE LOOP.\n";
    cout << "Enter Last digit of series to print : ";
    cin >> last_num;

    // For Each Loop Starts
    do
    {
        cout << first_num << " ";
        first_num++;

    } while (first_num <= last_num);
    
}

// FOR EACH LOOP
//Works on C++11 and above versions
//Requires an array
void for_each_loop_function()
{
    int arr[] = { 0, 1, 2, 3, 4, 5, 7, 8, 9 }; //Arrays examples in next programs
    string in_str;
    cout << "Print each array element with input string : ";
    cin >> in_str;

    //Loop Starts
    for (int i : arr)
    {
        cout << arr[i] << " " << in_str << "\n";
    }
}

//NESTED LOOPS
void nested_loops_function()
{
    cout << "Printing Matric using nedted FOR LOOPS\n";

    //Nested For Loop Starts
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << " " << i + j << " ";
        }
        cout << "\n";
    }
        
    cout << "Printing Matric using FOR LOOP INSIDE WHILE LOOP \n";
    
    //Nested For in While Loops Starts
    int i = 1;
    while (i <= 3)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << " " << i + j << " ";
        }
        cout << "\n";
        i++;
    }
}
