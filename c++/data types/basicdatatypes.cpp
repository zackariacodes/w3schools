#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){

    int myNum = 5; // Integer (whole number without decimal(s))
    float myFloatNum = 5.1234567890; // Floating point number up to 6-7 decimal digits.
    double myDoubleNum = 9.1234567890; // Floating point number up to 15 decimal digits.
    char myLetter = 'D'; // Single character/letter/number or ASCII value.
    bool myBoolean = true; // Boolean (true or false).
    string myText = "Hello"; // String.


    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myText << "\n"; 

    return 0;
}
