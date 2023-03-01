/*
Basic C++ Programs
By J RAJAN
For Learners
Title: STRUCTURES
*/

#include <iostream>

using namespace std;

int main() {
    cout << "C++ Structures\n\n";

    //Defining Structure
    struct Target       //Student becomes a custom datatype
    {
        string fullName;
        int age;
        float height;
    };


    struct //Not a Datatype, 
    {
        string fullName;
        string type;
        int model;
        float height;
    }Terminator; //Making object directly along with structure


    Target John; //Variable defined by datatype
    John.fullName = "John Connor";
    John.age = 10;
    John.height = 138.82;

    Target Sarah; //Another variable defined using same datatype
    Sarah.fullName = "Sarah Connor";
    Sarah.age = 29;
    Sarah.height = 177.5;

    //terminator is already defined
    Terminator.fullName = "Arnold Schwarzenegger";
    Terminator.height = 187.9;
    Terminator.type = "The Terminator";
    Terminator.model = 800;

    //Usage
    cout << Sarah.fullName << " and " << John.fullName << "\n";
    cout << "Age " << Sarah.age << " and " << John.age << "\n";
    cout << "with height " << Sarah.height << " and " << John.height << "\n";
    cout << "are being chased by " << "T-" << Terminator.model << " " << Terminator.type << " of height " << Terminator.height << "\n";
    cout << "Played by " << Terminator.fullName << "\n";
}
