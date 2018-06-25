#include <iostream>
#include <string>

using namespace std;

bool search_and_replace(string &str,const string &oldsubstr,const string &newsubstr);

int main()
{
    string str = "this is s test";
    cout << "Original string: " << str << "/n/n";
    cout << "Replacing is with was:/n";

    while(search_and_replace(str,"is","was")){
        cout << str << endl;
    }
        cout << endl;
        string oldstr{"so"};
        string newstr{"so too"};
        cout << "the replace ..." << endl;
        search_and_replace(str,oldstr,newstr);
        cout << str << endl;

    return 0;
}

bool search_and_replace(string &str,const string &oldsubstr,const string &newsubstr){
    string::size_type startidx;
    startidx = str.find(oldsubstr);
    if(startidx != string::npos){
        str.replace(startidx,oldsubstr.size(),newsubstr);
        return true;
    }
    return false;
}
