// C++ uses the + operator for both addition and concatenation.
// Numbers are added and strings are concatenated.

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;


int main(){
    int x = 10;
    int y = 20;

    string wordOne = "Ten";
    string wordTwo = "Twenty";

    int z = x + y;
    string words = wordOne.append(" and " + wordTwo);

    cout << "Since they are numbers the + operator adds them and gives us: " << z << endl;
    cout << "Since they are strings the + operator concatenates them and gives us: " << words << '.' ;

    return 0;
}