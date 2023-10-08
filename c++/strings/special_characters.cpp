// Be careful when putting words or characters into quotations (whether single or double or backslash) using special escape characters.

/*

\' to use single quotes
\" to use double quotes
\\ to use backslash

*/

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main(){

    string text1 = "Morocco is a country in \"North Africa\" and has \'Arab\' heritage.";
    string text2 = "Morocco reached the semi-finals of the 2022 World Cup in \\Qatar\\.";

    cout << text1 << endl;
    cout << text2 << endl;

    return 0;
}

// \n inserts a new line (similar to endl)
// \t inserts a tab