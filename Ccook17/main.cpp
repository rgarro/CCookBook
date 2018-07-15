#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

stack<double> subtracAndRest(int a,int b,stack<double> stck){
    bool operand_missing = false;
    if(stck.size() < 2){
        cout << "Operand Missing\n";
        operand_missing = true;
    }
    if(!operand_missing){
    a = stck.top();
    stck.pop();
    b = stck.top();
    stck.pop();
    cout << a + b << "\n";
    stck.push(a+b);
    }
    return stck;
}

int main()
{
    stack<double> stck;
    double a,b;
    string s;
    do{
        cout << ": ";
        cin >> s;
        switch(s[0]){
            case 'E'://exit
            break;
            case '.':
                cout << stck.top() << "\n";
                break;
            case '+':
                subtracAndRest(a,b,stck);
                break;
            case'-':
                subtracAndRest(a,b,stck);
                break;
            case'*':
                if(stck.size() < 2){
                    cout << "operand missingn/n";
                    break;
                }
                a = stck.top();
                stck.pop();
                b = stck.top();
                stck.pop();
                cout << a*b << "/n";
                stck.push(a*b);
                break;
            case '/':
                if(stck.size() < 2){
                    cout << "operand missingn/n";
                    break;
                }
                a = stck.top();
                stck.pop();
                b = stck.top();
                stck.pop();
                cout << b/a << "/n";
                stck.push(b/a);
                break;
            default:
                stck.push(atof(s.c_str()));
                break;
        }
    }while(s != "q");

    return 0;
}
