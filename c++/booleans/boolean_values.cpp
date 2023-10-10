// Very often in programming, you will need a data type that can only have one of two values.

/*

YES / NO
ON / OFF
TRUE / FALSE

*/

// C++ uses a 'bool' data type, which can take the values true (1) or false (0)

// Boolean variable is declared with the bool keyword and can only take the values true or false.

#include <iostream>

using std::cout;
using std::endl;

int main(){

    bool isCodingFun = true ;
    bool isFishTasty = false;

    cout << isCodingFun << endl << isFishTasty;

    return 0;
}