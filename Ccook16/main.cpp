#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    queue<string> q;

    cout << "a queue: ";
    q.push("one");
    q.push("two");
    q.push("three");
    q.push("four");

    cout << "mas tarde lo seguimos wey";
    while(!q.empty()){
        cout << "Popping";
        cout << q.front() << " /n";
        q.pop();
    }
    cout << endl;

    stack<char> stck;
    cout << "stack demo:";
    stck.push('A');
    stck.push('B');
    stck.push('C');
    stck.push('D');
    stck.push('E');
    cout << "LIFO order";

    while(!stck.empty()){
        cout << "Popping: ";
        cout << stck.top() << "/n";
        stck.pop();
    }

    return 0;
}
