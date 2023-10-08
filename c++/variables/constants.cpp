// const will declare the variable as 'constant' and make it unchageable and read-only.

#include <iostream>
using namespace std;

using std::string;
using std::cout;

/*int main(){
    const int myNum = 15;
    //myNum = 10; this will result in an error

    cout << myNum;
    return 0;
}

Always declare variables as constants when they are unlikely to change.
*/

int main(){
    const int minutesPerHour = 60;
    const float PI = 3.14;
    const string Acc = "meters per second squared";

    cout << minutesPerHour << "\n" << PI << "\n" << Acc ;
    return 0;
}