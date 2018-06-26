#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string str("this is a test");
    char cstr[80];
    cout << "Here is the original: ";
    cout << str << "/n/n";
    const char *p = str.c_str();

    cout << "the null terminated: ";
    cout << p << "/n/n";

    if(sizeof(cstr) < str.size() + 1){
        cout << "hold the string";
        return 0;
    }
    strcpy(cstr,p);
    cout << "the copied string";
    try{
        char *p2 = new char[str.size()+1];
        strcpy(p2,str.c_str());
        cout << "string after:";
        cout << p2 << endl;
        delete [] p2;
    }catch(bad_alloc ba){//crazy ba mf
        cout << " --- ";
        return 1;
    }

    return 0;
}
