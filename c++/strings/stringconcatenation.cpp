#include <iostream>
#include <string>

using std::cout;
using std::string;

int main(){

    string firstName = "Zackaria";
    string lastName = "Hitane";
    //string fullName = firstName + " " + lastName;
    string fullName = firstName.append(" " + lastName);


    cout << fullName;

    return 0;


}