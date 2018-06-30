#include <iostream>
#include <list>

using namespace std;

void show(const char *msg,list<char> lst);

int main()
{
    list<char> lstA;
    list<char> lstB;

    lstA.push_back('A');
    lstB.push_back('B');
    lstA.push_back('F');
    lstA.push_back('R');

    lstB.push_back('X');
    lstB.push_back('A');
    lstB.push_back('F');

    show("lstA:",lstA);
    show("lstB:",lstB);

    cout << "size lstA: " << lstA.size() << endl;
    cout << "size lstB: " << lstB.size() << endl;

    lstA.sort();
    lstB.sort();

    show("lstA:",lstA);
    show("lstB:",lstB);
    cout << endl;

    lstA.merge(lstB);
    show("merged",lstA);
    if(lstB.empty()){
        cout << "empty lstB";
    }
    cout << endl;

    lstB.push_back('G');
    lstB.push_back('H');
    lstB.push_back('P');

    show("lstB:",lstB);
    cout << endl;

    list<char>::iterator itr = lstA.begin();
    ++itr;
    lstA.splice(itr,lstB);
    show("after splice:",lstA);
    cout << endl;


    return 0;
}

void show(const char *msg,list<char> lst){
    list<char>::iterator itr;
    cout << msg;
    for(itr = lst.begin();itr != lst.end();++itr){
        cout << *itr << " ";
    }
    cout << "/n";
}
