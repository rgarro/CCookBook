#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    const char *str = "I will have 30 applesa and 12 pears";
    int letters=0,spaces=0,punct=0,digits=0;
    cout << str << endl;
    while(*str){
        if(isalpha(*str)) ++letters;
        else if(isspace(*str)) ++spaces;
        else if(ispunct(*str)) ++punct;
        else if(isdigit(*str)) ++digits;

        ++str;
    }
    cout << "letters: " << letters << endl;
    cout << "digits: " << digits << endl;
    cout << "spaces: " << spaces << endl;
    cout << "punctuation: " << punct << endl;

    return 0;
}
