// Short hand if else is known as the ternary operator because it consits of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements.

/* 
Syntax:
variable = (condition) ? expressionTrue : expressionFalse;
*/

#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){

    int timeOfDay;

    cout << "Choose a time of day (ex: 4 o'clock is 16 and midnight is 23.): ";
    cin >> timeOfDay;
    string result = (timeOfDay < 12) ? "Good Morning!" : "Good Evening!";
    cout << result;

    return 0;
}