/*
Basic C++ Programs
By J RAJAN
For Learners
Title: ARRAYS
*/

#include <iostream>

using namespace std;

void array_of_integers();
void array_of_characters();
void array_of_strings();
void two_dimensional_array();

int main()
{
    cout << "Arrays in C++\n";

    int option;
    cout << "1. Array of Integers\n";
    cout << "2. Array of Characters\n";
    cout << "3. Array of Strings\n";
    cout << "4. 2-Dimensional Array\n";
    cout << "Select an Option : ";
    cin >> option;

    //Switch case to select which loop to execute
    switch (option)
    {
        case 1:
        {
            array_of_integers();
            break;
        }
        case 2:
        {
            array_of_characters();
            break;
        }
        case 3:
        {
            array_of_strings();
            break;
        }
        case 4:
        {
            two_dimensional_array();
            break;
        }
        default:
        {
            cout << "Invalid Choice...\n";
        }
    }
}

// ARRAY OF INTEGERS
void array_of_integers()
{
    int myArray[10];   //Array declaration. [] takes size of array ie: no. of elemnts. here we chose 10 as size.

    cout << "Array created. Insert 10 numbers in the array\n";

    for (int i = 0; i < 10; i++) //Array index starts at 0
    {
        cin >> myArray[i];
    }

    cout << "Numbers added to array. \n Array : [ ";

    //Print Array of Integers / Numbers
    for (int i = 0; i < 10; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << "]\n";

}

// ARRAY OF CHARACTERS
void array_of_characters()
{
    //Notice while running, you can add all chcracters without pressing ENTER. 
    char myArray[10];
    cout << "Array created. Insert 10 (Alpha-Numeric) Characters in the array\n";

    for (int i = 0; i < 10; i++) 
    {
        cin >> myArray[i];
    }

    cout << "Characters added to array. \n Array : [ ";

    //Print array of Characters
    for (int i = 0; i < 10; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << "]\n";
}

// ARRAY OF STRINGS
void array_of_strings()
{
    string myArray[10]; 

    cout << "Array created. Insert 10  words in the array\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> myArray[i];
    }

    cout << "Words added to array. \n Array : [ ";
    
    //Print Array of Strings / Words
    for (int i = 0; i < 10; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << "]\n";
}

// TWO DIMENSION ARRAY
void two_dimensional_array()
{
    //2D array of integers
    int myArray[5][5]; //Two dimentional array needs two sizes for both length and width of the array. Usually used for Matrices and similar stuff.
    cout << "Array (5x5 MATRIX) created. Insert numbers : \n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> myArray[i][j];
        }
    }

    cout << "Numbers added to 2-D Array. \n Array : \n";
    // Print 2D array / MATRIX
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << myArray[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
