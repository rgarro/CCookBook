#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char strA[7] = "Up";
    char strB[5] = "Down";
    char strC[5] = "Left";
    char strD[6] = "Right";

    cout << "here are the strings" << endl;
    cout << "strA:" << strA << endl;
    cout << "strB:" << strB << endl;
    cout << "strC:" << strC << endl;
    cout << "strD:" << strD << "\n\n";

    cout << "lenght of a strA is " << strA << endl;

    strcat(strA,strB);
    cout << "strA after concatenation " << strA << endl;
    cout << "Length of a strA:" << strlen(strA) << endl;

    strcpy(strB,strC);
    cout << "strB now holds" << strB << endl;

    if(!strcmp(strB,strC)){
        cout << "strB is equal to strC \n";
    }

    int result = strcmp(strC,strD);
    if(!result){
        cout << "strC is equal to strD\n";
    } else if(result < 0){
        cout << "strC is less than strD\n";
    } else if(result > 0){
        cout << "strC is greater than strD\n";
    }

    return 0;
}
