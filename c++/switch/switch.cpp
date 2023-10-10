// Use the switch statement to select one of many code blocks to be executed.

/*

Syntax:

switch(expression){
    case x:
        // code block
        break;
    case y:
        // code block
        break;
    default:
        // code block
    
}

*/

/*
The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break and default keywords are optional, and will be described later in this chapter
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int dayNum;
    cout << "Choose a day of the week (1-7): ";
    cin >> dayNum;

    switch(dayNum) {
        case 1:
            std::cout << "You chose Monday!";
            break;
        case 2:
            cout << "You chose Tuesday!";
            break;
        case 3:
            cout << "You chose Wednesday!";
            break;
        case 4:
            cout << "You chose Thursday!";
            break;
        case 5:
            cout << "You chose Friday!";
            break;
        case 6:
            cout << "You chose Saturday!";
            break;
        case 7:
            cout << "You chose Sunday!";
            break;
        default: // The default keyword specifies some code to run if there is no case match.
            cout << "You chose a number outside of (1-7). Try again." << endl;
    }

    cout << endl;
    return 0;

}

/*

When C++ reaches a break keyword it breaks out of the switch block.
This will stop the execution of more code and case testing inside the block.
When a match is found, and the job is done, it's time for a break. There is no need for more testing.
A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

*/