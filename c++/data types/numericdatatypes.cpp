/* Flot vs Double: The precision of a floating point value indicates how many digits the value can have after the decimal point. THe precision of the float is only six or seven decimal digits, while double variables have a precision of about 15 digits.
    Therefore it is safer to use double for most calculations.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int f1 = 25.00;
    float f2 = 10.1234567890;
    double f3 = 25.1234567890;
    long double f4 = 25.1234567890;

    std::cout << std::fixed; //what does this do?

    cout << f1 << "\n" << f2 << "\n" << f3 << "\n";
    std::cout << std::setprecision(7) << f4;
    return 0;
}