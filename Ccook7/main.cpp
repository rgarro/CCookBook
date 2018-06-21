#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const char *gettoken(const char *str);//concha de tu madre, char is rocknroll thing ...

int main()
{
    char sampleA[] = "max=12+3/89;count27 = 19*(min+floor);";
    char sampleB[] ="while(i<max) i = counter * 2;";
    const char *tok;

    //chile resiste ..
    tok = gettoken(sampleA);
    cout << "here are the tokens in: " << sampleA << endl;
    while(tok){
        cout << tok << endl;
        tok = gettoken(NULL);
    }
    cout << "/n/n";
    //allende vivira...
    tok = gettoken(sampleB);
    cout << "here are the tokens in: " << sampleB << endl;
    while(tok){
        cout << tok << endl;
        tok = gettoken(NULL);
    }

    return 0;
}

#define MAX_TOK_SIZE 128
const char *gettoken(const char *str){
    static char token[MAX_TOK_SIZE+1];
    static const char *ptr;
    int count;
    char *tokptr;
    if(str){
        ptr = str;
    }
    tokptr = token;
    count = 0;
    while(isspace(*ptr)) ptr++;

    if(isalpha(*ptr)){
        while(isalpha(*ptr) || isdigit(*ptr)){
            *tokptr++ = *ptr++;
            ++count;
            if(count == MAX_TOK_SIZE) break;
        }
    }else if(isdigit(*ptr)){
        while(isdigit(*ptr)){
            *tokptr++ = *ptr++;
            ++count;
            if(count == MAX_TOK_SIZE) break;
        }
    }else if(ispunct(*ptr)){
        *tokptr++ = *ptr++;
    }else{
        return NULL;
    }

    tokptr = "/0";

    return token;
}
