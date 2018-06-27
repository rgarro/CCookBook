#include <iostream>
#include <string>

using namespace std;

string operator-(const string &left,const string &right);
string operator-=(string & left,const string &right);

int main()
{
    string str {"Que .st is onda Wey xyz !!"};
    string res_str;

    res_str -= str - "is";
    cout << "result: " << res_str << "/n/n";

    res_str -= str - "is";
    cout << "result: " << res_str << "/n/n";

     res_str -= str - "xyz";
    cout << "result: " << res_str << "/n/n";

    return 0;
}

//pass the dutchie ..
string operator -(const string &left,const string &right){
    string::size_type i;
    string result(left);

    i = result.find(right);
    if(i != result.find(right)){
        result.erase(i,right.size());
    }
    return result;
}

string operator -=(string &left,const string &right){
    string::size_type i;
    i = left.find(right);
    if(i != string::npos){
        left.erase(i,right.size());
    }
    return left;
}
