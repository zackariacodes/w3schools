// int : stores integers (whole numbers), without decimals. ex: 123 or -123
// double : stores floating point numbers with decimals. ex: 1.23 or -22.09
// char : stores single characters such as 'a' or 'B'. Single quotes used.
// string : stores text, such as "Hello World". Double quotes used.
// bool : stores values with two states. ex: true or false.

#include <iostream>

using std::cout;
using std::string;

int main(){
    int myNum;
    double myFloatnum;
    char myCharacters;
    string myWords;
    bool TorF;

    myNum = 22;
    myFloatnum = 6.99;
    myCharacters = 'A';
    myWords = "Hello Variables!";
    TorF = true;

    cout << "My age is: " << myNum << "\n" << "I chose a random float: " << myFloatnum <<  "\n" << "A or B? " << myCharacters <<  "\n" << "Quick message: " <<  myWords <<  "\n" << "True or False? " << TorF;
    return 0;
}