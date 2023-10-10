// Use the else statement to specify a block of code to be executed if the condition is false.

#include <iostream>

using std::cout;
using std::cin;

int main(){

    int entry;

    cout << "Choose a number greater than 100: ";
    cin >> entry;

    if (entry > 100){
        cout << "Correct!";
    } else {
        cout << "Incorrect!";
    }

    return 0;

}