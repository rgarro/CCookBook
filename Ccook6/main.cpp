#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char delims[] = ".,?;!";
    char str[] = "I like apple,pears,and grapes.Do you?";
    char *tok;

    cout << "Obtain the words in a sentence.";
    tok = "Obtain the words in a sentence";

    tok = strtok(str,delims);

    while(tok){
        cout << tok << endl;
        tok = strtok(NULL,delims);
    }
    char kvpairs[] = "count=10,name='Tom Jones'";
    char kvdelims[] = " =, ";

    cout << "Tokenize key value pairs ";
    tok = strtok(kvpairs,kvdelims);

    while(tok){
        cout << "key: " << tok << " ";
        if(!strcmp("name",tok)){
            tok = strtok(NULL,"");
        }else{
             tok = strtok(NULL,kvdelims);
        }
        cout << "va" << tok << endl;
        tok = strtok(NULL,kvdelims);
    }

    return 0;
}
