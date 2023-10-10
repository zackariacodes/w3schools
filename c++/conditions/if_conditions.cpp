/*

Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b

*/

/*

Use 'if' to specify a block of code to be executed, if a specified condition is true
Use 'else' to specify a block of code to be executed, if the same condition is false
Use 'else if' to specify a new condition to test, if the first condition is false
Use 'switch' to specify many alternative blocks of code to be executed

*/

// if statement has to be in lowercase or else will generate an error.

#include <iostream>

using std::cout;
using std::endl;

int main(){
    
    int x = 49, y =23;

    if (x > y){
        cout << "X is greater than Y.";
    }

    return 0;
}