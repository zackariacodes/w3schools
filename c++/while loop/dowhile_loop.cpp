// The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

/*

do {
    // code block to be executed
}
while (condition);

*/

#include <iostream>

using std::cout;
using std::endl;


int main(){
    int i = 0;
    do {
        cout << i << " ";
        i++;
    }
    while (i <= 5);

    return 0;
}