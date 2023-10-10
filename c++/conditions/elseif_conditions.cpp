// Use the else if statement to specify a new condition if the first condition is false.

#include <iostream>

using std::cout;
using std::cin;


int main(){

    double entry;

    cout << "Enter a number between 10 and 20: ";
    cin >> entry;

    if (entry <= 10){
        cout << "Wrong! Your number is less than or equal to 10. Try again.";
    } else if (entry >= 20){
        cout << "Wrong! Your number is greater than or equal to 20. Try again.";
    } else {
        cout << "Correct! Your number is greater than 10 and less than 20. Good job!";
    }

    return 0;
}