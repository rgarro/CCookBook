#include <iostream>
#include <cctype>

using namespace std;

int strcmp_ign_case(const char *str1,const char *str2);
void showresult(const char *str1,const char *str2,int result);

int main()
{
    char strA[] ="testT";
    char strB[] = "Test";
    char strC[] = "testing";
    char strD[] = "Tea";

    int result;

    cout << "here are the strings " << endl;
    cout << "strA: " << strA << endl;
    cout << "strB: " << strB << endl;
    cout << "strC: " << strC << endl;
    cout << "strD: " << strD << endl;

    result = strcmp_ign_case(strA,strB);
    showresult(strA,strB,result);

    result = strcmp_ign_case(strA,strC);
    showresult(strA,strC,result);

    result = strcmp_ign_case(strA,strD);
    showresult(strA,strD,result);

    result = strcmp_ign_case(strD,strA);
    showresult(strD,strA,result);

    return 0;
}

int strcmp_ign_case(const char *str1,const char *str2){
    while(*str1 && * str2){
        if(tolower(*str1) != tolower(*str2)){
            break;
        }else{
            //intentionally left blank
        }
        ++str1;
        ++str2;
    }
    return tolower(*str1) - tolower(*str2);
}

void showresult(const char *str1,const char *str2,int result){
    cout << str1 << " is ";
    if(!result){
        cout << "equal to ";
    }else if(result < 0){
        cout << "less than ";
    } else {
        cout << "greater than";
    }
    cout << str2 << endl;
}
