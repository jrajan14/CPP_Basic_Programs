/*
Basic C++ Programs
By J RAJAN
For Learners
Title: DATA TYPES IN C++
*/

#include <iostream>

using namespace std;

void main()  //Void - Valueless Data Type 
{
    //Boolean - 1 Byte. Stores TRUE or FALSE type values
    cout << "Boolean Values \n";
    bool boolean_value;
    boolean_value = 1;
    cout << "Boolean Numeric 1 : " << boolean_value << "\n";
    boolean_value = 0;
    cout << "Boolean Numeric 0 : " << boolean_value << "\n";
    boolean_value = true;
    cout << "Boolean True      : " << boolean_value << "\n";
    boolean_value = false;
    cout << "Boolean False     : " << boolean_value << "\n\n";
    
    /***************************************************************************/

    // Integer - Usually 4 Bytes
    cout << "Integer Values\n";
    int integer_value; 

    //Works
    cout << "Within Range";
    integer_value = -2147483648; //Negative Range
    cout << "\nNegative :" <<integer_value;
    integer_value = 2147483647; //Positive Range
    cout << "\nPositive : " << integer_value;

    //Doesn't work
    cout << "\n\n\Out of Range";
    integer_value = -2147483649; //Negative Range
    cout << "\nNegative : " << integer_value;
    integer_value = 2147483648; //Positive Range
    cout << "\nPositive :" << integer_value;

    /***************************************************************************/

    // Char - 1 Byte. Takes only single character. Numbers, Letters or ASCII values
    cout << "\n\nChar Values";
    char char_value;

    char_value = 'X';
    cout << "\nSingle Letter : " << char_value;
    char_value = '9'; //Will not show without ''. Try yourself
    cout << "\nSingle Number : " << char_value;
    char_value = '@';
    cout << "\nSingle ASCII  : " << char_value;

    /***************************************************************************/

    // Float - 4 Bytes. Precision upto 7 Decimal places
    cout << "\n\nFloat Values";
    float float_value;

    //Showing the range of FLOAT using built in function
    cout << "\nFloat Value limits : " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max();

    //See differences in Outputs of below
    float_value = 0.123456789; 
    cout << "\nFloat Precision : " << float_value;
    float_value = 1.123456789;
    cout << "\nFloat Precision : " << float_value;
    float_value = 999999.123456789;
    cout << "\nFloat Precision : " << float_value;

    /***************************************************************************/

    // Double - 8 Bytes. Can have multiple decimals and upto 15 digit precision
    cout << "\n\nDouble Values";
    double double_value;

    //Showing the range of DOUBLE using built in function
    cout << "\nDouble Value limits : " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max();
    
    //See differences in Outputs of below
    double_value = 0.12345678901234567890;
    cout << "\nDouble Precision : " << double_value;
    double_value = 999999.12345678901234567890;
    cout << "\nDouble Precision : " << double_value;

    //Above code will show similar result as FLOAT,
    //because of precision settings of COUT. 
    //Let's set the precision a bit higher.
    
    cout.precision(15);
    cout << "\nDouble Precision (15): " << double_value;
    cout.precision(25);
    cout << "\nDouble Precision (25): " << double_value;
    cout.precision(35);
    cout << "\nDouble Precision (35): " << double_value;
    cout.precision(40);
    cout << "\nDouble Precision (40): " << double_value;
    cout.precision(41);
    cout << "\nDouble Precision (41): " << double_value;

    /***************************************************************************
    *                               MODIFIERS                                  *
    *                     Signed, Unsigned, Short, Long                        *
    ****************************************************************************/
    
    cout << "\n\n\nMODIFIERS";
  
    //Unsigned Int
    cout << "\n\nUnsigned Int";
    unsigned int no_sign_int;
    no_sign_int = 9;
    cout << "\nUnsigned Int Positive Value : " << no_sign_int;
    no_sign_int = -9;
    cout << "\nUnsigned Int negative Value : " << no_sign_int;

    //Signed Int
    cout << "\n\nSigned Int";
    signed int sign_int;
    sign_int = 9;
    cout << "\nSigned Int Positive Value : " << sign_int;
    sign_int = -9;
    cout << "\nSigned Int negative Value : " << sign_int;

    //Short Int - 2 Bytes (int is usually 4 Bytes, short int is 2 Btyes)
    cout << "\n\nShort int";
    short int short_int;
    short_int = 32767;
    cout << "\nShort Int correct   Value : " << short_int;
    short_int = 32768; //Check output
    cout << "\nShort Int incorrect Value : " << short_int;

    // Long int - 8 Bytes
    long int long_int = 2147483647;
    cout << "\n\nLong Int : " << long_int;

    // Unsigned long long int
    unsigned long long int us_ll_int= 18446744073709551615; //Also Try 18446744073709551616 
    cout << "\n\nUnsigned Long Long Int : " << us_ll_int;

    cout << "\n\nNOT THE END\n\n";
}
