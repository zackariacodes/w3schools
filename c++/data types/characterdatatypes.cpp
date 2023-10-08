// The char data type is used to store a single character. The character must be surrounded by single quotes, like 'A' or 'C'.

#include <iostream>
using namespace std;

int main(){
    char myMath = 'A';
    char myScience = 'B';
    char myPhysics = 'C';
    char myGrades = myMath + myScience + myPhysics;

    cout << "My grades are: " << myMath << ", " << myScience << ", " << myPhysics << endl;

    return 0;
}