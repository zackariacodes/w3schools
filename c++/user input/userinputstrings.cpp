#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){

    string firstName;
    string lastName;

    cout << "What is your First name? ";
    getline (cin, firstName);
    cout << "What is your Last name? ";
    getline (cin, lastName);
    string fullName = firstName + " " + lastName;
    cout << "Your name is: " << fullName ;

    return 0;
}

// Cin considers whitespace/tab etc.. to be terminating. Only the first word will be outputted and recorded.
// Use getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second.