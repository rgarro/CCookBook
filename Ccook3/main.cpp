#include <iostream>
#include <cstring>

using namespace std;

void revstr(char *str);

int main()
{
    char str[] = "abcdefghikklm";
    cout << "original str: " << str << endl;
    revstr(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}

void revstr(char *str){
    int i,j;
    char t;
    for(i=0,j=strlen(str)-1;i<j;++i,--j){
        t = str[i];
        str[i] = str[j];
        str[j] = t;
    }
}
