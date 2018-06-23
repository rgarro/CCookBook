#include <iostream>
#include <string>

using namespace std;

void showresult(string s,string::size_type is);

int main()
{
    string::size_type indx;
    string str{"one two three, one two three"};
    string str2;

    cout << "string to be searched: " << str << "/n/n";

    cout << "searching for the first occurrence of 'two'";
    indx = str.find("two");
    showresult(str,indx);

    return 0;
}

void showresult(string s,string::size_type i){
    if(i == string::npos){
        cout << "no match found";
        return;
    }
    cout << "match found at index " << i << endl;
    cout << "remaining string from point of match:" << s.substr(i) << "/n/n";
}
