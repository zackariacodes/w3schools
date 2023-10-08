/*

== : equal to
!= : not equal to
> : greater than
< : less than
>= : greater than or equal to
<= : greater than or equal to

*/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    a = 3;
    b = 5;

    bool result;

    cout << "For these examples: 0 is false and 1 is true: " << endl;

    result = (a == b);
    cout << "3 == 5 is " << result << endl;
    result = (a != b);
    cout << "3 != 5 is: " << result << endl;
    result = (a > b);
    cout << "3 > 5 is: " << result << endl;
    result = (a < b);
    cout << "3 < 5 is: " << result << endl;
    result = (a >= 5);
    cout << "3 >= 5 is: " << result << endl;
    result = (a <= 5);
    cout << "3 <= 5 is: " << result << endl;

    return 0;
}