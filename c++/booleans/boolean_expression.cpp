// A boolean expression returns a boolean value that is either 1 (true) or 0 (false).

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    double x = 33; // Declared a double variable so that when someone enters a float it is also taken into consideration.

    cout << "Enter a value that is greater than 33: ";
    cin >> x;
    cout << "If the terminal returns 1 then you are correct!: " << (x > 33);

    return 0;
}