/*
Basic C++ Programs
By J RAJAN
For Learners
Title: POINTERS AND REFERENCES
*/

#include <iostream>

using namespace std;

void main() 
{
	//Simple variable declaration
	string phrase;

	// Input some value
	cout << "Write something... : ";
	cin >> phrase;

	// Pointer to the given string
	string* ptrPhrase = &phrase;

	// Display the original String
	cout << "Given Phrase : " << phrase << "\n";

	// Display memory address of given string
	cout << "Memory Address : " << &phrase << "\n";

	// Display the content with the pointer
	cout << "Given Phrase through Pointer : " << *ptrPhrase << "\n";

	//Display memory address with Pointer
	cout << "Memory address through Pointer : " << ptrPhrase << "\n";
}
