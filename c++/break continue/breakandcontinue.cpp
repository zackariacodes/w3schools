// We have already seen that a break statement was used to jump out of a switch statement.
// Break statement can also be used to jump out of a loop.

#include <iostream>

using std::cout;
using std::endl;

int main(){
    cout << "Break: " << endl;
    for (int i = 1; i < 32; i = i * 2){
        if ( i == 16){
            break; // Jumps out of the loop once i is equal to 4
        }
        cout << i << endl;
    }
    cout << "Continue: " << endl;
    for (int j = 0; j < 10; j++) {
        if (j == 4) {
            continue; // Skips the value of 4
        }
        cout << j << endl;
    }
    return 0;
}

// You can also use break and continue in while loops.