#include <iostream>
using namespace std;

/*
All C++ variables must be identified with unique names.
Identifiers can be short names (like x and y) or more descriptive (like age, sum, totalVolume)
*/

int main(){
    int m = 60; //this does not have a good identifier
    int minutesPerHour = 60; //this is has a good identifier
    
    cout << m << "\n" << minutesPerHour;
    return 0;
}

/*
The General rules for naming variables are:

Names contain letter, digits and underscores.
Names must begin with a letter or an underscore (_).
Names are case sensitive (ex: myVar and myvar are different variables).
Names cannot contain whitespaces or special characters (ex: ?,!,#,% etc...).
Reserved words (like C++ keywords such as int,char,bool,string etc...) cannot be used as names.
*/