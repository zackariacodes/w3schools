#include <iostream>
using namespace std;

int main(){
    int numOne;
    int numTwo;

    cout << "Enter your first integer: ";
    cin >> numOne;
    cout << "Enter your second integer: ";
    cin >> numTwo;
    int numSum = numOne + numTwo;
    cout << "Your total is: " << numSum;
    return 0;
}