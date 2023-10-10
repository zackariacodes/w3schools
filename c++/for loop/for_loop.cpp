// When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.

/*

Syntax:

for (statement 1, statement 2, statement 3){
    // code block to be executed
}

Statement 1 is executed (one time) before the execution of the code block.
Statement 2 defines the condition for executing the code block.
Statement 3 is executed (every time) after the code block has been executed.

*/

#include <iostream>

using std::cout;
using std::endl;

int main(){
    for (int i = 0; i < 11; i = i + 2){
        cout << "Outer: " << i << endl;
        for (int j = 1; j < 10; j = j*2){
            cout << "   Inner: " << j << endl;
        }
    }

    return 0;
}

// A nested loop is when you place a loop within a loop.
// The inner loop will be executed one time for each iteration of the outer loop.


/*

For-each loop is used exclusively to loop through elements in an array (or other data sets.)

*/