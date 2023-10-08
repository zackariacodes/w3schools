// You can access the characters in a string by referring to its index number inside square brackets [].

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main(){
    string myString = "ABCDEFGHIJKL";
    string fixWord = "New Work City";
    fixWord[4] = 'Y';

    cout << myString[5] << ": is the 6th character in the string." << endl;
    cout << fixWord;

    return 0;
}

/*

[0]: outputs the first character. The sequence then follows a +1 sequence. ex: [5] would be the sixth character.
!!! : This also accounts for whitespaces.

*/