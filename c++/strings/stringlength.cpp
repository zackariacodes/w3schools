// To get the length of a string, use the length() function.

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main(){
    string text = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string text2 = "ABBABCCBCDDC";

    cout << "The length of this string is: " << text.length() << endl;
    cout << "The length of this string is: " << text2.size();

    return 0;
}

// You might also use size() function which as an alias for the length() function.