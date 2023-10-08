/*
    cout is used to output and uses (<<) aka insertion operator.
    cin is used to input and uses (>>) aka extraction operator.
*/

#include <iostream>
using namespace std;

int main(){

    string question;
    
    cout << "What is your name? ";
    cin >> question;
    cout << "Your name is: " << question << '.';
    return 0;
}