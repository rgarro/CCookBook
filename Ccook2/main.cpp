#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const char *url = "HuaLi.net";
    const char *url2 = "liubei.org";
    const char *emailaddr = "facheng@castle.com";
    const char *tld[] = {".com",".net",".org"};
    const char *p;

    for(int i=0;i<3;i++){
        p = strstr(url,tld[i]);
        if(p){
            cout << url << " has top-level domain " << tld[i] << endl;
        }else{
        //intentionally left blank
        }
        p = strstr(url2,tld[i]);
        if(p){
            cout << url2 << " has top-level domain " << tld[i] << endl;
        }else{
        //callejon del chavo del 8 ...
        }
    }
    p = strchr(emailaddr,'@');
    if(p){
        cout << "el dominio del email " << p + 1 << endl;
    }else{
    //p on the alley ...
    }

    if(p){
        cout << "Found " << *p << endl;
    }

    return 0;
}
