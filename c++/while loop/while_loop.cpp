// Loops can execute a block of code as long as a specified condition is reached.
// Loops are handy because they save time, reduce errors, and they make code more readable.

// The while loop loops through a block of code as long as a specified condition is 'true'.

/*

Syntax:

while (condition){
    // code block to be executed
}

*/

// Do not forget to increase the variable used in the condition, otherwise the loop will never end!

#include <iostream>

using std::cout;
using std::endl;

int main(){
    int i = 100;
    while (i >= 0){
        cout << i << endl;
        i--;
    }
    
    return 0;
}